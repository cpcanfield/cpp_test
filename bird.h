//Caroline Canfield main.cpp
//CSCE 306; Spring 2022
//bird header file bird.h


#ifndef LAB_10_BIRD_H
#define LAB_10_BIRD_H
using namespace std;
#include<string>


class bird {


public:
    bird(std::string);
    int get_seeds();

private:
    int seeds = 10;
    int nuts = 2;
    std::string bird_type;


};


#endif //LAB_10_BIRD_H
