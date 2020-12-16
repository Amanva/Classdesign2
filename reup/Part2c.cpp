#include <iostream>
#include "part2c.h"
using namespace std;

 void printmetadata(){

 
	ostream& operator<<(ostream & os, metadata& all);
 }

 ostream& operator<<(ostream& os, metadata& all)
 {
	 os << "File Name: " << all.getFile() << endl;
	 os << "Type: " << all.getType() << endl;
	 os << all.getDate() << endl;
	 os << "Size: " << all.getSize() << endl;
	 os << "Author Name: " << all.getName() << endl;
	 os << "Dimension: " << all.getDimension() << endl;
	 os << all.getApe() << endl;
	 os << all.getExo() << endl;
	 os << "ISO Value: " << all.getIso() << endl;
	 os << "Flash(1 yes, 2 no): " << all.getFlash() << endl;
	 return os;
 }

 int main()
 {
	 metadata os;
	 cout << os;
 }


