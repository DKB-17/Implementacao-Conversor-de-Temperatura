#include <iostream>
#include <conio.h>


using namespace std;

const int tempFusaoKelvin = 373;
const int tempCondKelvin = 273;
const int tempFusaoCelsius = 100;
const int tempCondCelsius = 0;
const int tempFusaoFahrenheit = 212;
const int tempCondFahrenheit = 32;

float celsiusParaKelvin(){
    float entrada;

    cout << "\nDigite a temperatura em Celsius: ";
    cin >> entrada;
    return entrada + tempCondKelvin;
}
float celsiusParaFahrenheit(){
    float entrada;

    cout << "\nDigite a temperatura em Celsius: ";
    cin >> entrada;
    return (1.8 * entrada) + tempCondFahrenheit;
}
float kelvinParaCelsius(){
    float entrada;

    cout << "\nDigite a temperatura em Kelvin: ";
    cin >> entrada;
    return entrada - tempCondKelvin;
}
float kelvinParaFahrenheit(){
    float entrada;

    cout << "\nDigite a temperatura em Kelvin: ";
    cin >> entrada;
    return 1.8 * (entrada - tempCondKelvin) + tempCondFahrenheit;
}
float fahrenheitParaCelsius(){
    float entrada;

    cout << "\nDigite a temperatura em Fahrenheit: ";
    cin >> entrada;
    return (entrada - tempCondFahrenheit)/(1.8);
}
float fahrenheitParaKelvin(){
    float entrada;

    cout << "\nDigite a temperatura em Fahrenheit: ";
    cin >> entrada;
    return (5 * (entrada - tempCondFahrenheit) + tempCondKelvin)/9;
}


float menu(){
    system("cls");
    int result;
    int op;
    cout << "\nMenu de conversao de temperatura";
    cout << "\n0 - Sair";
    cout << "\n1 - Converter Celsius para Kelvin";
    cout << "\n2 - Converter Celsius para Fahrenheit";
    cout << "\n3 - Converter Kelvin para Celsius";
    cout << "\n4 - Converter Kelvin para Fahrenheit";
    cout << "\n5 - Converter Fahrenheit para Celsius";
    cout << "\n6 - Converter Fahrenheit para Kelvin";
    cout << "\n\nEscolha uma opcao para comecarmos:";
    cin >> op;
    switch (op){
        case 0:
            return -274;
        case 1:
            result = celsiusParaKelvin();
            cout << "\nKelvin: " << result << "º";
            return result;
        case 2:
            result = celsiusParaFahrenheit();
            cout << "\nFahrenheit: " << result << "º";
            return result;
        case 3:
            result = kelvinParaCelsius();
            cout << "\nCelsius: " << result << "º";
            return result;
        case 4:
            result = kelvinParaFahrenheit();
            cout << "\nFahrenheit: " << result << "º";
            return result;
        case 5:
            result = fahrenheitParaCelsius();
            cout << "\nCelsius: " << result << "º";
            return result;
        case 6:
            result = fahrenheitParaKelvin();
            cout << "\nKelvin: " << result << "º";
            return result;
        default:
            return 0;
    }
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    int sair;
    do{
        sair = menu();
        getch();
    }while(sair > -273);

    return 0;
}
