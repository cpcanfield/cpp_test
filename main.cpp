//Caroline Canfield main.cpp
//CSCE 306; Spring 2022
// main driver file for lab_10

#include <string>
#include <iostream>
using namespace std;
#include "bird.h"




int main() {
    cout << "Hello world!!!!" << endl;
    bird robin("Robin");
    cout << robin.get_seeds() << endl;

    return 0;
}