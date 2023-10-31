#include <iostream>
using namespace std;
int main()
{ 
 double A[8], sum = 0;
 cout << "Введіть 8 чисел" << endl;
 for (int i=0; i<8; i++)
 { cin >> A[i]; 
 sum += A[i];
 }
 cout << "Сума елементів масиву дорівнює "
<< sum << endl;
 return 0;
}
