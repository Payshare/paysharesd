# Roadmap

This is our general plan for developing **paysharesd**. Until December we are mostly working on changing the core data structures and simplifying the protocol. The goal is to get much higher performance and scalability and make it a tractable task for people to build alternate implementations.

Times, priority, and tasks are all subject to change as the network evolves, we grow the team, and receive more or less contributions from the community. We use github issues for all the near term [items we are working on.](https://github.com/payshares/paysharesd/issues)

### Our Plan

#### Performance & Scalability Refactor
1. Redesign node store/ledger hashing/communication protocol. (done)
2. Do apply only once. (done)
3. Inflation using the SQL store (done)
4. Move Ledger objects into SQL. (done)
5. Refactor and optimization of ledger closing (in progress - november)
6. Replay stream of transactions to recreate a given ledger. (in progress - november)
7. Make SLEs actual classes (in progress - november)
8. Decouple Transactions from nodestore (november)
9. Performance testing (november)
10. History as stream of transactions with ledger checkpoints. (november)
11. Change how nodes fetch the history from Network. (december)
12. Make offer matching and other things use the SQL DB rather the SLEs. (december) 
13. Temporal buckets for ledger objects. (december)
14. Clean up dead nodestore code. (december)
15. SQL backend for postgres or someother DB (later)


#### New features
1. Merge accounts. This will allow people to clean up accounts they are no longer using and recover the reserve balance.  (done)
2. Pull changes from rippled. This is an ongoing process but we will spend some time looking through the rippled commits since we diverged and see what makes sense to pull in. (in progress - november)
3. Improve deployment pipeline. (november)
4. New consensus algorithm. (in progress - november)
5. Merge various transaction memo fields into one. (december)
6. Clean up API. *please [let us know](https://github.com/payshares/payshares-protocol/issues) anything you would like to see changed* (december)
7. Ephemeral messaging. (2015)
8. Multi-sig. (2015)
9. Design Scripting/contracts. (2015)
10. Start implementing Private transactions. (2015)
 

### How you can help
- Submit issues
- [Fix issues.](https://github.com/payshares/paysharesd/labels/contribute) We mark the best ones to get started contributing with the `contribute` label.
- Write tests!
