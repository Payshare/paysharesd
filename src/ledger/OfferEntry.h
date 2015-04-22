#ifndef __OFFERENTRY__
#define __OFFERENTRY__

#include "LedgerEntry.h"


namespace payshares
{
    class OfferEntry : public LedgerEntry
    {
        void insertIntoDB();
        void updateInDB();
        void deleteFromDB();

        void calculateIndex();
        void setFromCurrentRow(Database *db);
    public:
        uint160 mAccountID;
        uint32	mSequence;
        STAmount mTakerPays;
        STAmount mTakerGets;
        bool mPassive;
        uint32 mExpiration;


        OfferEntry(SLE::pointer sle);
        OfferEntry(Database *db);


        static void dropAll(LedgerDatabase &db);
        static void appendSQLInit(vector<const char*> &init);
    };
}

#endif