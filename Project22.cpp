#include <iostream>
using namespace std;

int main() {
 int var = 5;
 // işaretçi (pointer) degisken tanimla
 int* pointVar;
 // var isimli degiskenin adresini sakla 
 
 
 
 
 
 pointVar = &var;
 // var degiskeninin degerini yazdir
 cout << "var = " << var << endl;
 // var degiskenin adresini yazdir
 cout << "var degiskeninin adresi (&var) = " << &var << endl << endl;
 // işaretçi pointVar degerini yazdir
 cout << "pointVar = " << pointVar << endl;
 // pointVar'ın isaret ettigi adresin icerigini yazdır
 cout << "pointVar'in isaret ettigi adresin icerigi (*pointVar) = "
 << *pointVar << endl;
 
 
 system("pause");
 //cikti : var = 5 , var degiskeninin adresi = 0x61ff08 , pointVar = 0x61ff08 , pointVar'in isaret ettigi adresin icerigi (*pointVar) = 5
 return 0;
}



	
	
	/*int* pointVar;
int var = 5;
// var'ın adresini pointVar işaretçisine atayın
pointVar = &var;
	//int var a 5 degeri atanir , var'in adresi ise pointVar = &var ile pointVar işaretçisine atanır
}

string* mystring; // Tercih Edilen
string *mystring;
string * mystring;
adresler böyle istedigimiz gibi secilebilir*/
