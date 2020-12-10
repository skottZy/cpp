/*
author: skottZy
date: 2020/12/10
sumarry: test3.cpp
version: 2020/12/10 v1
*/

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;


uint64_t fib1(uint32_t n){
    if (n < 1)
        return -1;
    else if (n == 1 || n == 2)
        return 1;
    else
        return fib1(n - 1) + fib1(n - 2);
}

uint64_t fib2(uint32_t n){
    
    if (n < 1)
        return -1;
        
    uint64_t res;
    uint64_t *tmpList = new uint64_t[n + 1];
    tmpList[1] = tmpList[2] = 1;

    for (uint32_t i = 3; i <= n; i++)
        tmpList[i] = tmpList[i - 1] + tmpList[i - 2];
    
    res = tmpList[n];
    delete tmpList;
    return res;
}

int main(){

    time_t startTime;

    startTime = clock();
    uint32_t n = 50;
    uint64_t res1 = fib2(n);
    cout << "fib2(" << n << ") = " << res1 << " time: " 
    << (clock() - startTime) / 1000 << " s" << endl;

    startTime = clock();

    uint64_t res2 = fib1(n);
    cout << "fib1(" << n << ") = " << res2 << " time: " 
    << (clock() - startTime) / 1000 << " s" << endl;

    return 0;

}
