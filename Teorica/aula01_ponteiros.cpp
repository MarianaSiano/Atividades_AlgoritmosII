#include <iostream>
using namespace std;

void func1()
{
    int mat[] = {1, 10, 100};

    for(int j = 0; j < 3; j++)
        cout << *(mat + j) << endl;
}

void func2()
{
    int mat[] = {1, 10, 100};

    for(int j; j < 3; j++)
        cout << (mat + j) << endl;
}

void func3()
{
    int mat[] = {1, 10, 100};
    int *p = mat;

    for(int j = 0; j < 3; j++)
        cout << (*p)++ << endl;
}

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Passo a Passo de Ponteiros" << endl;
        cout << "2. Saber o que Cada Funcao Faz" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                //Parte 1: Declaração
                int val;
                int *ptr = nullptr;
                int *ptr2 = nullptr;

                //Parte 2: Atribuição e valor inicial
                cout << "Digite um valor INTEIRO => ";
                while (!(cin >> val)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Valor invalido! Digite um INTEIRO => ";
                }
                cout << "Variavel 'val' declarada com o valor => " << val << endl;

                //Parte 3: ptr aponta para val
                ptr = &val;
                cout << "'ptr' agora aponta para 'val'" << endl;

                //Parte 4: Imprimir valor e endereço de val
                cout << "Valor da variavel 'val' => " << val << endl;
                cout << "Endereco da variavel 'val' => " << &val << endl;

                //Parte 5: Imprimir ptr e conteúdo apontado
                cout << "Endereco armazenado em ptr => " << ptr << endl;
                cout << "Valor apontado por ptr => " << *ptr << endl;

                //Parte 6: Modificar val via ptr
                cout << "Digite o novo valor para a variavel 'val' (via ptr) => ";
                while (!(cin >> *ptr)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Valor invalido! Digite novamente => ";
                }
                cout << "Valor de 'val' modificado para => " << val << endl;

                //Parte 7: ptr2 recebe o mesmo endereço de ptr
                ptr2 = ptr;
                cout << "ptr2 agora aponta para o mesmo endereco que ptr." << endl;

                //Parte 8: Imprimir ptr2 e valor apontado
                cout << "Endereco armazenado em ptr2 => " << ptr2 << endl;
                cout << "Valor apontado por ptr2 => " << *ptr2 << endl;

                //Parte 9: Modificar valor apontado por ptr2
                cout << "Digite novo valor para modificar o conteudo apontado por 'ptr2' => ";
                while (!(cin >> *ptr2)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Valor invalido! Digite novamente => ";
                }
                cout << "Valor apontado por 'ptr2' modificado!" << endl;

                //Parte 10: Imprimir valor final de val
                cout << "Valor final da variavel 'val' => " << val << endl;
                break;
            }

            case 2: {
                cout << "Programa 1 - Imprimindo valores de array" << endl;
                func1();

                cout << "Programa 2 - Imprimindo enderecos do array" << endl;
                func2();

                cout << "Programa 3 - Imprimindo e incrementando valores" << endl;
                func3();
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