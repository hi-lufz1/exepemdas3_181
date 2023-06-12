#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar { 
public :
	int x;
	int p;
	 Lingkaran() {
		cout << "lingkaran dibuat \n";
	}
	void input(int a){
		cout << "Masukkan jejari : \n";
		cin >> p;
	}
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = p;
	}

	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}

	float Luas(int a) {
		
		
		a = 3.14 * x * x;
		cout << "Luas Lingkaran =" << a << endl;
		return 0;
	}

	float Keliling(int a) {
		
		a =2*3.14*x; 
		cout << "Keliling Lingkaran =" << a << endl;
			return 0;
	}
	 };

class Bujursangkar :public bidangDatar {
public:
	int x;
	int q;
	Bujursangkar() {
		cout << "Bujursanglar dibuat \n";
	}
	void input(int a) {
		cout << "Masukkan sisi : \n";
		cin >> q;
	}
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = q;
	}

	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
	float Luas(int a) {
		a = x * x;
		cout << "Luas bujursangkar =" << a << endl;
		return 0;
	}
	float Keliling(int a) {
		a = 4 * x;
		cout << "keliling bujursangkar = " << a << endl;
		return 0;
	}
};




int main() {
	bidangDatar* bd;
	Lingkaran ling;
	


	
	bd = &ling;
	ling.input(0);
	ling.setX(0);
	ling.getX();
	ling.Luas(0);
	ling.Keliling(0);

	Bujursangkar buju;
	bd = &buju;

	buju.input(0);
	buju.setX(0);
	buju.getX();
	buju.Luas(0);
	buju.Keliling(0);


	

	




	return 0;
}