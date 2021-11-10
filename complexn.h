#include<iostream>
#include<math.h>
using namespace std;
class complex {
	int reel;
	int img;
public:
	complex();
		complex(int, int);
		complex(const complex&);
		void afficher();
		float module();
		
};