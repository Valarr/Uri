#include <iostream>
#include <iomanip>
using namespace std;


int main() {
  int tempo;
  float vm;
  float qtdCombustivel;

  cin >> tempo;

  cin >> vm;

  float km = tempo * vm;

  qtdCombustivel = km / 12;
  
cout << fixed << setprecision(3);
  cout << qtdCombustivel<<"\n";
}