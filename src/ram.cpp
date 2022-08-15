#include "ram.h"
#include <iostream>


int buffer [8];



void write (int i,int tmp){
    buffer[i] = tmp;
}

int read (int i){
   return buffer [i];
}