#include <iostream>
using namespace std;


int calcularArea() {
    float base, altura, area;
    cout << "Ingrese su altura: ";
    cin >> altura;
    cout << "Ingrese su base: ";
    cin >> base;
    area = (altura * base ) / 2;
    cout << "EL valor del area es: " << area << endl;
}

int Personas() {
    string nombre_id, apellido_id;
    int edad, fecha;
    cout << "Primer Nombre: ";
    cin >> nombre_id;
    cout << "Primer Apellido: ";
    cin >> apellido_id;
    cout << "Año de nacimiento: ";
    cin >> fecha;
    edad = 2024 - fecha;
    cout << "Nombre: " << nombre_id << " Apellido: " << apellido_id << " Edad: " << edad;
}

int tablaMultiplicar () {
    int numero_multiplicar;
    cout << "Cual es el numero a multiplicar: ";
    cin >> numero_multiplicar;

    for (int i = 0; i <= 10; i++) {
        int multiplicacion = 0;
        multiplicacion = i * numero_multiplicar;
        cout << multiplicacion << endl;
    }
}


int meses() {
    int meses;

    cout << "Indique un numero para saber su mes: ";
    cin >> meses;

    switch (meses) {
        case 1:
            cout << "Enero";
            break;
        case 2:
            cout << "Febrero";
            break;
        case 3:
            cout << "Marzo";
            break;
        case 4:
            cout << "Abril";
            break;
        case 5:
            cout << "Mayo";
            break;
        case 6:
            cout << "Junio";
            break;
        case 7:
            cout << "Julio";
            break;
        case 8:
            cout << "Agosto";
            break;
        case 9:
            cout << "Septiembre";
            break;
        case 10:
            cout << "Octubre";
            break;
        case 11:
            cout << "Noviembre";
            break;
        case 12:
            cout << "Diciembre";
            break;
        default:
            cout  << "No existe";
            break;
    }
}


int main() {
    int opciones;
    cout << "Menu de opciones: " << endl;
    cout << "1. Metodo de Calcular Area." << endl;
    cout << "2. Metodo de Personal." << endl;
    cout << "3. Metodo de tabla de multiplicar." << endl;
    cout << "4. Metodo de los meses. " << endl;
    cin >> opciones;
    switch (opciones) {
        case 1:
            calcularArea();
            break;
        case 2:
            Personas();
            break;
        case 3:
            tablaMultiplicar();
            break;
        case 4:
            meses();
            break;
        default:
            cout << "LEA";
            break;
        }
    return 0;
}

