#include "disk.h"
#include "ram.h"
#include <fstream>
#include <iostream>

void save (){
    std::ofstream file ("data.txt");
    if (!file.is_open()) {std::cout << "Save error. Cant open file!";}
    else {
        for (int i = 0; i <8;i++){
            file << read(i) << " ";
        }
    }

   file.close ();
}

void load(){
    std::ifstream file ("data.txt");
    if (!file.is_open()) {std::cout << "Load error. Cant open file!";}
    else {
        for(int i = 0;i<8;i++){
            int tmp;
            file >> tmp;
            write (i,tmp);
        }
    }
    file.close ();
}