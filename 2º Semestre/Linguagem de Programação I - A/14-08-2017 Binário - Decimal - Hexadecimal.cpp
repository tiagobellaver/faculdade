#include <iostream>
#include <iomanip> /// para usar setw
/** Pesquise na internet C++ I/O flags **/

using namespace std;

int main() {
  cout << setw(6) << right << 123 <<endl;
  cout << dec << setw(6) << left << 123 << endl << endl;
  int valor;
  cout << "digite um valor: ";
  cin >> valor;
  cout << "Decimal...: " << dec << valor << endl;
  cout << "Hexa......: " << hex << valor << endl;
  cout << "Hexa Upp..: " << uppercase << hex << valor << endl;
  cout << "Octal.....: " << oct << valor << endl;
  return 0;
}
