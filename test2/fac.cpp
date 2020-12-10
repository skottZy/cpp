/*
author: skottZy
date: 2020/12/10
sumarry: test2.cpp
version: 2020/12/10 v1
*/

#include <iostream>

using namespace std;

uint32_t fac(uint32_t n){
    if (n < 0){
        cout << "n < 0, data error!";
        return -1;
    }

    else if (n == 0 || n == 1)
        return 1;
    
    else
        return n * fac(n - 1);
    
}

int main(){
    uint32_t n = fac(5);
    cout << n << endl; 
    return 0;
}