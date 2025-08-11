#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;


/*

Kullanýcýya bir arayüz yapacaðýz.

Yapýlacak iþlemi seçiniz...

1.	Toplama
2.	Çýkarma
3.	Çarpma
4.	Bölme

(if else öðrenilecek.) (Yapabilirsen switch case öðrencen)

if secilen sayi = 4 ise bölme yapicak.

4 seçimini yaptiniz.

Birinci sayiyi giriniz.
ikinci sayiyi giriniz.

bolme = Sonuç

*/

int main() {

	double radyan = (double)60 * M_PI / 180.0;
	cout << sin(radyan) << endl;

	double sonuc;
	double num1;
	double num2;

	int secim;


	cout << "****************" << endl;

	cout << "Yapilacak islemi seciniz..." << endl;
	cout << "1.Toplama " << endl;
	cout << "2.Cikarma" << endl;
	cout << "3.Carpma" << endl;
	cout << "4.Bolme" << endl;

	cout << "****************" << endl;

	cin >> secim;

	cout << "birinci sayiyi girin: ";
	cin >> num1;

	cout << "ikinci sayiyi girin: ";
	cin >> num2;

	

	cout << "****************" << endl;

	if (secim == 1) {

		cout << secim << " secimini yaptiniz.(toplama)" << endl;

		sonuc = num1 + num2;

		cout << sonuc << endl;
	}

	else if (secim == 2) {

		cout << secim << " secimini yaptiniz.(cikarma)" << endl;

		sonuc = num1 - num2;

		cout << sonuc << endl;
	}

	else if (secim == 3) {

		cout << secim << " secimini yaptiniz.(carpma)" << endl;

		sonuc = num1 * num2;

		cout << sonuc << endl;
	}

	else if (secim == 4) {

		if (num2 != 0)
		{
			cout << secim << " secimini yaptiniz.(bolme)" << endl;

			sonuc = num1 / num2;

			cout << sonuc << endl;
		}


		else {
			cout << "hatali bir islem yaptiniz" << endl;
		}
		
	}
	else {
		cout << "hatali bir islem yaptiniz" << endl; 
	} 


	return 0;
}