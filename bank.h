#ifndef BANK_H
#define BANK_H

/*---------- Inclusions ---------*/
#include <iostream>
#include <string>


/*----------- Macros ------------*/


/*--------- Declartions ---------*/
using namespace std;


/*---------- User-defined -------*/
class Bank {
 
private:
    string name;
    string accType; /* current, checking, saving */
    int accNumber;
    int currentBalance ;
    int depositAmount ;

public:
    
    Bank();
    Bank(string, string, int, int);
    void setvalue();
    void showdata();
    void deposit();
    void showbal();
    void withdrawl();
};


/*------- Prototypes -------*/


#endif
