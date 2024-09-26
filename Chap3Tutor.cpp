#include <iostream>
#include <random>
#include <iomanip>
#include <ctime>
using namespace std;

int main() { 
  srand(time(NULL));
  int num1 = rand()%999;
  int num2 = rand()%999;
  int correctAns = num1 + num2;
  cout << setw(4) << num1 << endl  <<"+" << setw(3) << num2 
    << endl << "----";
  cin.get();
  cout << correctAns << endl ;
  
}
