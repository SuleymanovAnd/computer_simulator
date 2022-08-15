#include <iostream>
#include "cpu.h"
#include "disk.h"
#include "kbd.h"
#include "gpu.h"
using namespace std;

int main() {
    string command;

    while (command != "exit") {
        cout << ": ";
        cin >> command;
        if (command == "sum") {
            //вычисление суммы
            sum ();
        }
        if (command == "save") {
            //сохранить в файл
            save ();
        }
        if (command == "load") {
            //загрузить из файла
            load ();
        }
        if (command == "input") {
            //ввести с клавиатуры
            input();
        }
        if (command == "display") {
            //вывести на экран
            display();
        }
    }
}
