#include <vector.h> //Don't know why I neet add h at the end
#include <C:\Users\Admin\Desktop\c++\CreditCard.h>

using namespace std;

void testCard() {
   vector<CreditCard*>wallet(10);// vetcor of 10 credit card pointers //Notice  rounde brackets, not square bracket
   wallet[0] = new CreditCard("5391 0375 9387 5309", "Jane Tho'", 2500);
   wallet[1] = new CreditCard("5391 0375 9387 5309", "Murage Doe", 5000);
   wallet[2] = new CreditCard("5391 0375 9387 5309", "Murage Kibicho", 25000);
   
   for (int j =1; j <= 16; j++) { //make some charges
   wallet[0]->chargeIt(double(j));//explicit cast to double
   wallet[1]->chargeIt(2 * j); //implicit cast to double
   wallet[2]->chargeIt(double(3 * j));
   } 
   cout << "Card payments: \n";
   for (int i = 0; i < 3; i++){
      cout<< *wallet[i];
      while (wallet[i]->getBalance() > 100.0) {
         wallet[i]->makePayment(100.0);
         cout << "New balance = " << wallet[i]->getBalance() << "\n";
      }
      cout << "\n";
      delete wallet[i];
   }
  }
  int main() {
  testCard();
  return EXIT_SUCCESS;
  }