#include <iostream>
#include <string>


using namespace std;

/*
	Kullanýcýdan isim soy isim alacaðýz.
	Yaþýný Öðreneceðiz. 
	Ýþlem yapabilmesi için iki tane sayý alacaðýz.
	

	En son örnek bir çýktý üreteceðiz.

	Ben

	Bora
	Coban
	17 Yasindayim
	Toplam = X+Y
	Carpma = X*Y
	Cikarma = X-Y
	Bolme = X/Y
*/

int main() {

	string isim;
	string soyisim;

	int yas;
	int num1;
	int num2;
	int toplam;
	int carpma;
	int cikarma;
	float bolme;

	

	cout << "Isminizi girin: ";
	getline(cin, isim);
	

	cout << "Soyisminizi girin: ";
	getline(cin, soyisim);


	cout << "Yasinizi girin: ";
	cin >> yas;

	cout << "birinci sayiyi girin: ";
	cin >> num1;

	cout << "ikinci sayiyi girin: ";
	cin >> num2;

	toplam = num1 + num2;
	carpma = num1 * num2;
	cikarma = num2 - num1;
	bolme = (float)num2 / (float)num1;



	cout << "Ben" << endl;
	cout << endl;

	cout << isim << endl;
	cout << soyisim << endl;
	cout << yas << " Yasindayim" << endl;
	cout << "toplam =" << toplam << endl;
	cout << "carpma =" << carpma << endl;
	cout << "cikarma =" << cikarma << endl;
	cout << "bolme =" << bolme << endl;
	
	








	return 0;
}