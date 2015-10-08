# binomial

Straightforward **C++** implementation of the *Binomial Coefficient* and *Binomial Distribution*

#### Building
Compile and run the source ``binomial.cpp`` with your favorite C++ compiler (mine is ``g++``)
```
g++ -o binomial.exe binomial.cpp
```
Tested on **Ubuntu 14.04.3 LTS** under *GCC 4.8.4*.

#### Output
```
# ./binomial.exe
# ---- BINOMIAL DISTRIBUTION ----
#
# binomial_coefficient( 6 , 3 ) = 20
#
# score 3 heads after 6 coin tosses
# binomial_distribution( 6 , 3 , 0.5 ) = 0.3125
#
# score 3 "6" after 6 dice rolls
# binomial_distribution( 6 , 3 , 0.166667 ) = 0.0535837
```
