#include "cpu.h"
#include "ram.h"
#include <iostream>

void compute (){
int sum = 0;
    for (int i = 0;i<8;i++){
        sum += read (i);
    }
    std::cout << sum <<std::endl;
}

void sum (){
    std::cout << "Sum of all number in buffer equal :";
    compute ();
}