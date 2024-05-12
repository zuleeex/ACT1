#include <iostream>
using namespace std;

void alfabeto(int n, int x, string elementos, string lengu, string ultima, int& contador) {
    if (lengu.length() <= x && lengu != ultima) { 
        cout << lengu << endl;
        ultima = lengu; 
        contador++; 
    }

    if (lengu.length() == x) {
        return;
    }

    for (char c : elementos) {
        string nuevoLenguaje = lengu + c;
        alfabeto(n, x, elementos, nuevoLenguaje, ultima, contador);
    }
}

int main() {
    int n, x;
    cout << "INGRESE LA CANTIDAD DE ELEMENTOS DEL ALFABETO: ";
    cin >> n;
    cout << "INGRESE LA LONGITUD MAXIMA: ";
    cin >> x;

    string elementos;
    cout << "INGRESE LOS ELEMENTOS: ";
    cin >> elementos;

    cout << "Los elementos del lenguaje son:" << endl;
    string ultima = ""; 
    int contador = 0;
    alfabeto(n, x, elementos, "", ultima, contador);

    cout << "La cantidad de elementos es: " << contador << endl;

    return 0;
}
