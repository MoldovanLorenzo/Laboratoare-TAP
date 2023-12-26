#pragma once
#include <iostream>
#include "Angajat.h"
using namespace std;

class Manager : public Angajat{
public: int nrSubordonati;
public:
    Manager();
    Manager(const Manager& other);
    ~Manager();
    double getSalar();

};

