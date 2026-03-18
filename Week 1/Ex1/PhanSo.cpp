#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo() {
	tu = 0;
	mau = 1;
}

void PhanSo::Input_Tu() {
	cin >> tu;
}

void PhanSo::Input_Mau() {
	cin >> mau;
}

bool PhanSo::Positive() {
	return (tu * mau > 0);
}
