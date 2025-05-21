#include <iostream>
#include <string>

using namespace std;

int somatorioRecursivo(int n)
{
    //Caso base: quando n é 1, retorna 1
    if(n == 1)
        return 1;
    
    //Passo recursivo: soma n com o somatório de n - 1
    else
        return n + (somatorioRecursivo(n - 1));
}

int somaDigitos(int val)
{
    //Caso base: quando o numero tem apenas um digito
    if(val < 10)
        return val;
    
    //Passo recursivo: último digito + soma dos demais digitos
    else
        return (val % 10) + somaDigitos(val / 10);
}

string decimalParaBinario(int n)
{
    //Caso base para n = 0
    if(n == 0)
        return "0";

    //Caso base para n = 1
    else if(n == 1)
        return "1";

    //Passo recursivo: divide por 2 e concatena com o resto
    else
        return decimalParaBinario(n / 2) + (n % 2 ? "1" : "0");
}

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Somatorio" << endl;
        cout << "2. Soma de Digitos" << endl;
        cout << "3. Versao Binaria" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                int numero;
                cout << "Digite um numero inteiro positivo => ";
                cin >> numero;

                if(numero < 1) {
                    cout << "O numero deve ser positivo!" << endl;
                    return 1;
                }

                int resultado = somatorioRecursivo(numero);
                cout << "O somatprio de 1 ate " << numero << " eh => " << resultado << endl;
                break;
            }

            case 2: {
                int numero;
                cout << "Digite um numero inteiro POSITIVO => ";
                cin >> numero;

                if(numero < 0) {
                    cout << "O numero deve ser positivo!" << endl;
                    return 1;
                }

                int resultado = somaDigitos(numero);
                cout << "A soma dos digitos de " << numero << " eh => " << resultado << endl;
                break;
            }

            case 3: {
                int numero;
                cout << "Digite um numero inteiro positivo => ";
                cin >> numero;

                if(numero < 0) {
                    cout << "O numero deve ser positivo!" << endl;
                    return 1;
                }

                string binario = decimalParaBinario(numero);
                cout << "O numero " << numero << " em binario eh => " << binario << endl;
                break;
            }

            case 0:
                cout << "Encerrando o programa." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while(opcao != 0);

    return 0;
}