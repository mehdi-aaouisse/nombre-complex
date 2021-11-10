#include<iostream>
#include "complexn.h"
using namespace std;

void complex::afficher() {
	cout << endl << reel << " +i " << img;
};
float complex::module() {
	return sqrt(pow(reel, 2) + pow(img, 2));
};






