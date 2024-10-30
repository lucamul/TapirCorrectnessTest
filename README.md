# TAPIR Transaction Trace Collector

This repository is a fork of TAPIR -- the Transaction
Application Protocol for Inconsistent Replication -- from the SOSP 2015 paper, ["Building Consistent Transactions with
Inconsistent Replication."](http://dl.acm.org/authorize?N93281).

In this repository we add a way to log the transaction trace of tapir to be able to examine its correctness.

To collect such log follow these steps:

1. Install the following libraries needed to compile TAPIR:
  - libprotobuf-dev
  - libevent-openssl
  - libevent-pthreads
  - libevent-dev
  - libssl-dev
  - protobuf-compiler
2. Go to store/tapirstore/client.cc and in the method LogToFile change the location of the file to your location of this repository on your machine
3. Go back to root of the repo and run make to compile. If you have issues compiling consult the README from the original TAPIR repository.
4. Go to store/tools
5. In run_test.sh modify srcdir to your directory (similarly to what was done in step 2).
6. run ./run_test.sh
7. your results should be in trace.txt in the logs directory

results are in the format:
r(key,value,client_id,transaction_id)
w(key,value,client_id,transaction_id)

Remark: the only additions to this repo are the logging of transactions in store/tapirstore/client.cc and modification to clients in store/benchmark and run_test.sh to have a simple experiment which causes the correctness error 