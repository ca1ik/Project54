#include <iostream>
using namespace std;

int main() {
 int var = 5;
 // i�aret�i (pointer) degisken tanimla
 int* pointVar;
 // var isimli degiskenin adresini sakla 
 
 
 
 
 
 pointVar = &var;
 // var degiskeninin degerini yazdir
 cout << "var = " << var << endl;
 // var degiskenin adresini yazdir
 cout << "var degiskeninin adresi (&var) = " << &var << endl << endl;
 // i�aret�i pointVar degerini yazdir
 cout << "pointVar = " << pointVar << endl;
 // pointVar'�n isaret ettigi adresin icerigini yazd�r
 cout << "pointVar'in isaret ettigi adresin icerigi (*pointVar) = "
 << *pointVar << endl;
 
 
 system("pause");
 //cikti : var = 5 , var degiskeninin adresi = 0x61ff08 , pointVar = 0x61ff08 , pointVar'in isaret ettigi adresin icerigi (*pointVar) = 5
 return 0;
}



	
	
	/*int* pointVar;
int var = 5;
// var'�n adresini pointVar i�aret�isine atay�n
pointVar = &var;
	//int var a 5 degeri atanir , var'in adresi ise pointVar = &var ile pointVar i�aret�isine atan�r
}

string* mystring; // Tercih Edilen
string *mystring;
string * mystring;
adresler b�yle istedigimiz gibi secilebilir*/
