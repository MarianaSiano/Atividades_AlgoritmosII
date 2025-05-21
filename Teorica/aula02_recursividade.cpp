#include <iostream>
#include <iomanip>  //Para usar fixed e setprecision

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

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Somatorio" << endl;
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

            case 0:
                cout << "Encerrando o programa." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while(opcao != 0);

    return 0;
}