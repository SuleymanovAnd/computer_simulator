#include "kbd.h"
#include <iostream>
#include "ram.h"


void input (){
    for (int i = 0;i < 8;i++){
        int tmp;
        std::cout << "Enter "<< i+1 << " number into buffer";
        std::cin >> tmp;
        write (i,tmp);
    }


}