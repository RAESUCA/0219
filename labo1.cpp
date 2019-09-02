#include <iostream>
using namespace std;



int main (){
  int num, n=0;
  float prom, total;
  int Mat[9];
  while (n<=9){
    cin >> num;
    Mat[n]=num;
    total+=Mat[n];
    n++
  }
  prom = total/10;
  cout << "Total: " << total << endl;
  cout << "Promedio: " << prom <<endl;
  return 0;
}
