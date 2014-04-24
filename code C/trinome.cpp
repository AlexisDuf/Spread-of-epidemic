#include "trinome.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <complex.h>

using namespace std;


trinome::trinome(){
    cout<<"trinome()"<<endl;
    this->a = 1;
    this->b = 1;
    this->c = 1;            
}

trinome::trinome(double long a, double long b, double long c){
    cout<<"trinome(a,b,c)"<<endl;
    this->a = a;
    this->b = b;
    this->c = c; 
    if((this->determinant=calculateDeterminant()) == 0 ){
        this->racine1=this->racine2=calculateRacine1();
    }else{
        this->racine1=calculateRacine1();
        this->racine2=calculateRacine2();
    }
    
}

double long trinome::calculateDeterminant(){
    return pow(b,2)-4*(c)*(a);
}

double long trinome::calculateRacine1(){
    return (2*c)/((-b)-(sqrt(determinant)));
}

double long trinome::calculateRacine2(){
    return ((-b)-sqrt(this->determinant))/(2*this->a);
}

void trinome::printResult(){
    cout<<"Determinant:" << getDeterminant() << "; Racine1:"<< getRacine1() << "; Racine2:"<< getRacine2() <<endl;
}



