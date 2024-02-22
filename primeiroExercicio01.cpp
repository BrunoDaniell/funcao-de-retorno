
#include <iostream>

using namespace std;

int menorValor(int a, int b) {
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

int main()
{
    int a, b;
    cout << "Digite um valor\n";
    cin >> a;
    cout << "Digite outro valor\n";
    cin >> b;

    int menor = menorValor(a, b);

    cout << "O menor numero: " << menor;

    return 0;

}

