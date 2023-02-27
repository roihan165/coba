#include <iostream>

using namespace std;
//int main(){
//	int x =3;
//	char a = 'B';
//	string hari = "Senin";
//	const float phi = 3.14;
//	
//	cout << "nilai x = : " << x << endl;
//	cout << "Hasil Karakter = : " << a <<endl;
//	cout << "Phi = : " << phi << endl;
//	cout << "Hari ini ialah Hari " << hari << endl;
//	
//	return 0;
//}

int main(){
	int a;
	int b;
	int tambah, kurang, kali, bagi, mod;
	
	cout << "Masukkan Nilai A : ";
	cin >> a;
	
	cout << "Masukkan Nilai B : ";
	cin >> b;
	
	tambah = a + b;
	kurang = a - b;
	kali = a * b;
	bagi = a / b;
	mod = a % b;
	
	cout << "a + b = : " << tambah << endl;
	cout << "a / b = : " << bagi << endl;
	cout << "a % b = : " << mod << endl;
	cout << "a * b = : " << kali << endl;
	cout << "a - b = : " << kurang << endl;
	
//	operator logika
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	cout << (a =! b) << endl;
	
//	operator perbandingan
	bool hasil;
	
	hasil = a < b;
	cout << "a < b = : " << hasil << endl;
	hasil = a > b;
	cout << "a > b = : " << hasil << endl;

}
