#include <iostream>
using namespace std;
int main() 
{
    int n, i, b, p;
    double voto, media;
    string nome;
    do {
        cout << "inserisci il numero degli studenti" << endl;
        cin >> n;
    } while (n < 0);
    i = 1;
    b = 0;
    p = 0;
    media = 0;
    while (i <= n) {
        cout << "inserisci il nome" << endl;
        cin >> nome;
        cout << "inserisci il voto in informatica" << endl;
        cin >> voto;
        media = media + voto;
        if (voto < 6) {
            cout << "sei stato bocciato" << endl;
            b = b + 1;
        } else {
            cout << "sei stato promosso" << endl;
            p = p + 1;
        }
        i = i + 1;
    }
    cout << "gli studenti promossi sono " << p << " e gli studenti bocciati sono " << b << endl;
    cout << "la media totale è " << media / n << endl;
}
//LEGGERE LE ISTRUZIONI NEL FILE README.md
