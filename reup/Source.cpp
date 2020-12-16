#include <iostream>
#include "Header.h"
using namespace std;

class store {
    



public:
   
    store(const string cookie, const string popcorn, const string cd, const long cookid, const long popid, const long cdid, const double cookprice, const double popprice, const double cdprice, const int amountc , const int amountpop , const int amountcd, const int orderc, const int orderpop, const int ordercd) {

        amountc2 = amountc;
        amountpop2 = amountpop;
        amountcd2 = amountcd;
        orderc2 = orderc;
        orderpop2 = orderpop;
        ordercd2 = ordercd;
        cookie2 = cookie;
        popcorn2 = popcorn;
        cd2 = cd;
        cookid2 = cookid;
        popid2 = popid;
        cdid2 = cdid;
        cookprice2 = cookprice;
        popprice2 = popprice;
        cdprice2 = cdprice;

    }

   
    void print() const {

        cout << cookie2 << ": \n" << "Id: " << cookid2 << "\n" << "amount: " << amountc2 << "\n" << "Price: " << cookprice2 << " each \n\n";
        cout << popcorn2 << ": \n" << "Id: " << popid2 << "\n" << "amount: " << amountpop2 << "\n" << "Price: " << popprice2 << " each \n\n";
        cout << cd2 << ": \n" << "Id: " << cdid2 << "\n" << "amount: " << amountcd2 << "\n" << "Price: " << cdprice2 << " each \n\n";
    }
    void processorder() const {

        int co = amountc2 - orderc2;
        int pop = amountpop2 - orderpop2;
        int cd = amountcd2 - ordercd2;
       
     
        
        cout << "Store now contains:"<< endl << "Cookies: " << co << endl << "Popcorn: " << pop << endl << "Cd's: " << cd;
   }
    friend ostream& operator<<(ostream& os, store& dt);

};

ostream& operator<<(ostream& os, store& dt)
{
  
    dt.print();
    dt.processorder();
     return os;
}

int main()
{
    store dt("cookie","popcorn", "cd", 100121, 100513, 100145, 1.26, 2.00, 3.00, 12,15,15, 3,4,5);
    cout << dt;
   
}