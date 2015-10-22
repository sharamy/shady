#include <iostream>
#include <string>

using namespace std ;

class bank{

private:
	double z,v ;
	string x,y ;
	string name ; 
    string account_number ;
	double Balance ; 

public :
	   double GetBalance()
	   { return Balance ; }

	  void Setname (string x)
	   {    name= x ; }

       void Setaccountnumber (string y )
	   {   account_number= y ; }	   
	   
	   void Deposite ( double z )
	   {  Balance = Balance + z; }

       void Withdraw ( double v )
	   {  Balance = Balance - v; }
};

int main() {

	int z=500 ;
	bank account1 ;
	    account1.Setname("shady");
		account1.Setaccountnumber("01111111111");
		account1.Deposite(z);
	    account1.GetBalance();
		return 0 ; 
}
