#include <iostream>
using namespace std;
const float iRatio = 1.0/48;
const double cs = 1.5*iRatio;
const double cb = 1.0*iRatio;
const double cf = 2.75*iRatio;
int main() { 
cout << "how many cookies do you want yo?";
double cookies;
cin >> cookies;
double usedCS, usedCB, usedCF;
usedCS = cookies * cs;
usedCB = cookies * cb;
usedCF = cookies * cf;
cout << "you need " << usedCS << " cups of sugar, " << usedCB << " cups of butter, and " << usedCF << " cups of flour.";
}
