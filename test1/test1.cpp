/*
author: skottZy
date: 2020/11/23
sumarry: test1.cpp

*/
#include <iostream>
#include <cmath>s
#include <ctime>

using namespace std;

const uint32_t n = 1e8;


uint32_t sum1(uint32_t n){
    uint32_t sum = 0;
    for (uint32_t i = 1; i <= n; i++)
        sum += pow(-1, i);
    return sum;
}

uint32_t sum2(uint32_t n){
    uint32_t sum = 0;
    if (n % 2 == 0)
        sum = 0;
    else
        sum = -1;
    return sum;
}

int main(){

    cout << "starting..." << endl;
    time_t startTime, endTime, sumTime;

    // sum1
    startTime = clock();
    uint32_t res1 = sum1(n);
    cout << "sum: " << res1 << endl;
    endTime = clock();
    sumTime = endTime - startTime;
    cout << "time: " << sumTime / 1000 << "s" << endl;

    //sum2
    startTime = clock();
    uint32_t res2 = sum2(n);
    cout << "sum: " << res2 << endl;
    endTime = clock();
    sumTime = endTime - startTime;
    cout << "time: " << sumTime / 1000 << "s" << endl;

    system("pause");
    return 0;

}
