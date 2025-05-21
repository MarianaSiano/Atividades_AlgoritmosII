#include <iostream>
#include <string>

using namespace std;

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Passo a Passo de Ponteiros" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                //Parte 1
                int val;
                int *ptr = nullptr;
                int *ptr2 = nullptr;

                //Parte 2
                cout << "Digite um valor INTEIRO => ";
                cin >> val;
                cout << "Variavel 'val' declarada com o valor => " << val << endl;

                //Parte 3
                ptr = &val;
                cout << "'ptr' agora aponta para 'val'" << endl;

                //Parte 4
                cout << "Valor da variavel 'val' => " << val << endl;
                cout << "Endereco da variavel 'val' => " << &val << endl;

                //Parte 5
                cout << "Endereço armazenado em ptr: " << ptr << endl;
                cout << "Valor apontado por ptr: " << *ptr << endl;

                //Parte 6
                cout << "Digite o novo valor para variavel 'val' (via ptr) => ";
                cin >> *ptr;
                cout << "Valor da variavel 'val' modificado para => " << val << endl;

                //Parte 7
                cout << "Digite novo valor para o endereco apontado por 'ptr2' => ";
                cin >> *ptr2;
                cout << "Valor apontado por 'ptr2' modificado" << endl;

                //Parte 8
                cout << "Valor final de 'val' => " << val << endl;

                break;
            }
        }

    } while(opcao != 0);

    return 0;
}