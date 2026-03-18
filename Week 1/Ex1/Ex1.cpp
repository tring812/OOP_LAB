#include <iostream>
#include "PhanSo.h"
using namespace std;

typedef PhanSo ps;

int main() {
	ps p;
	cout << "Nhap tu so: ";
	p.Input_Tu();
	do {
		cout << "Nhap mau so: ";
		p.Input_Mau();
	} while (p.mau == 0);
	
	if (p.tu == 0)	cout << "Bang khong";
	else {
		(p.Positive()) ? cout << "Phan so duong" : cout << "Phan so am";
	}
}