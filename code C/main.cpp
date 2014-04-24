/* 
 * File:   main.cpp
 * Author: isen
 *
 * Created on 21 octobre 2013, 09:32
 */

#include <cstdlib>
#include <math.h>

#include "trinome.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    trinome* t = new trinome(2,pow(10,-9),-2);
    t->printResult();
    
}

