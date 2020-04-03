/*
* Name: Murage Kibicho
* File: CreditCard.h
* Description: Header file defining structure of credit card class
*/

#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H //keep header file from being expanded twice
#include <string>
#include <iostream>

class CreditCard {
public: //constructor
   CreditCard(const std:: string& no,
               const std::string& nm, int lim, double bal = 0);
   // Getter
   std::string getNumber() const  {return number; }
   std::string getName() const    {return name; }
   double      getBalance() const {return balance; }
   int         getLimit() const   {return limit;}
   
   bool chargeIt(double price); //Charge card
   void makePayment(double Payment); //pay
   private:
   std::string number; //card number
   std::string name;   //name on card
   int         limit;  //card limit
   double      balance;//card balance
};
   //Print card info
   std::ostream& operator<<(std::ostream& out, const CreditCard& c);
#endif   