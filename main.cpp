#include <iostream>

using namespace std;

string s = "";

string dec_to_bin_mod(int liczba) {

  //funkcja zamienia "nadwyzke" na binarny a nastepnie 0 na 5 i 1 na 6

  int i = 0, tab[31];

  string s = "";

  while (liczba) {

    tab[i++] = liczba % 2;

    liczba /= 2;

  }

  for (int j = i - 1; j >= 0; j--) {

    if (tab[j] == 1) {

      s += '6';

    } else {

      s += '5';

    }

  }

  return s;

}

int main() {

  //deklaracja zmiennych

  long long k, p = 1, suma = 0;

  int ile_cyfr = 1;

  string wynik = "";

  //podanie zmienej

  cin >> k;

  //wyliczenie ile cyfr będzie miala liczba

  for (int i = 1; i < 31; i++) {

    p *= 2;

    suma += p;

    if (suma > k || suma == k) {

      ile_cyfr = i;

      break;

    }

  }

  //nadwyzka

  int r = k - 1 - (suma - p);

  int x = ile_cyfr - (dec_to_bin_mod(r).length());

  //gdzie nie ma z przodu dodać piatke

  for (int i = 0; i < x; i++) {

    wynik += "5";

  }

  //dodanie wyniku funcji do koncowej zmiennej

  wynik += dec_to_bin_mod(r);

  cout << wynik;

}
