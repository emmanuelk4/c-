#include "C:\Users\Admin\Desktop\c++\CreditCard.h"

using namespace std;
         //Constructor
CreditCard::CreditCard(const string& no, const string& nm, int lim, double bal) {
   number = no;
   name = nm;
   balance = bal;//wrote bl, supposed to bal
   limit = lim;
}              
         //Charge card
bool CreditCard::chargeIt(double price) {
   if(price + balance > double(limit)) {
   return false;} //Check if over credit limit
   balance += price;
   return true; //Charge accepted
}
         //Make a payment
void CreditCard:: makePayment(double payment) { 
   balance -= payment;
}
ostream& operator<<(ostream& out, const CreditCard& c) {
   out << "Number = " << c.getNumber() << "\n" // note no semicolons at end
       << "Name = " << c.getName() << "\n"
       << "Balance = " << c.getBalance() << "\n"
       << "Limit = " << c.getLimit() << "\n";  
      return out;
         }
