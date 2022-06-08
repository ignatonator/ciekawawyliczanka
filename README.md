# ciekawawyliczanka
Rozwiązanie zadania z Ciekawa Wyliczanka z platformy SPOJ [The-Ultimate-Markdown-Cheat-Sheet (https://pl.spoj.com/problems/ETI06F2/)

### Na czym polega?
Zadanie polega na tym by po podaniu jakiejś liczby n, program wypisał n-tą (od najmniejszej) liczbe ciekawą, czyli taką która składa się tylko z cyfr **5** i **6**.
### Rozwiązanie 
1. Rozwiązanie polega na wyliczeni]u ile liczba ta będzie miała cyfr, robimy to na podstawie tego, że licz jednocyfrowych jest 2<sup>1</sup>, dwucyfrowych 2<sup>2</sup> i tak dalej.
2. Liczymy jaka jest "nadwyżka" podanej liczby nad sumę potęg dwójki poniżej tej, jaką mamy liczbę cyfr. Na przykład dla 12 będzie to 5 ponieważ 2<sup>1</sup> + 2<sup>2</sup> = 6 12-6=6 ale dla 7 itp nadwyżka wynosi 0 (pierwsza z liczb o tej ilości cyfr).
3. Następnie konwerujemy tę liczbę na system binarny, po czym zamieniamy wszystkie 0 na 5 i wszystkie 1 na 6
4. Na koniec jako ostateczny wynik dodajemy: 
- tyle piątek ile wynosi liczba cyfr odjąć liczba cyfr nadwyżki w systemie binarnym
- przekonwertowaną liczbę binarną (tą z piatkami i szóstkami)

### Przykłady
##### Przykład 1

Wejście:

1

Wyjście:

5

##### Przykład 2

Wejście:

10

Wyjście:

566

##### Przykład 3

Wejście:

12345

Wyjście:

6555555666565
