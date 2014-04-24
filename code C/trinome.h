/* 
 * File:   trinome.h
 * Author: isen
 *
 * Created on 21 octobre 2013, 09:38
 */

#ifndef TRINOME_H
#define	TRINOME_H

class trinome{
private:
    double long  a, b ,c, determinant, racine1, racine2;
    
    
public:   
    
    trinome();
    trinome(double long a, double long b, double long c);
    double long calculateDeterminant();
    double long calculateRacine1();
    double long calculateRacine2();
    
    void SetA(double long a) {
        this->a = a;
    }

    void SetB(double long b) {
        this->b = b;
    }

    void SetC(double long c) {
        this->c = c;
    }

    double long GetA() const {
        return a;
    }

    double long GetB() const {
        return b;
    }

    double long GetC() const {
        return c;
    }

    double long getDeterminant() const {
        return determinant;
    }

    double long getRacine1() const {
        return racine1;
    }

    double long getRacine2() const {
        return racine2;
    }
    
    void printResult();

    
    
};

#endif	/* TRINOME_H */

