#include <iostream>
#include <iomanip>
using namespace std;
/* Autor: Abimael Uanderson */

int main() {
  char conta;
  float a, b;
  cout <<  "Informe a operacao, +, /, -, *: " << endl;
  cin >> conta;
  
  cout << "Informe o primeiro termo: " << endl;
  cin >> a;
  
  cout << "Informe o segundo termo: " << endl;
  cin >> b;
  
  if(conta == '+') {
       cout << a + b << endl;

  }else if(conta == '/') { 
       cout << fixed << setprecision(1) << a / b << endl;

  }else if(conta == '-') {
       cout << a - b << endl;

  }else if(conta == '*') {
       cout << a * b << endl;

  }


  return 0;
}
