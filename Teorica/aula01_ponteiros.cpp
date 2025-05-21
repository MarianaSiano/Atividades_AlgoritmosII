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

bool func4(int tam, int vet[], int *par, int *imp, int *neg)
{
    for(int i = 0; i < tam; i++) {
        //Conta negativos (incluindo zero, se for o caso)
        if(vet[i] < 0)
            (*neg)++;

        //Conta pares e impares(considera absoluto para numeros megativos)
        if(vet[i] % 2 == 0)
            (*par)++;
        else
            (*imp)++;
    }

    return false; //Nao possui nenhum numero negativo
}

void trocaMaior(int vet[], int n, int *m)
{
    if(n <= 0)
        return; //Verifica se o vetor é vazio

    //Inicializa o ponteiro para o maior elemento como o primeiro elemento
    int *ptrMaior = vet;
    *m = *vet; //Assume que o primeiro elemento é o maior inicialmente

    //Encontra o maior elemento usando aritmética de ponteiros
    for(int *ptr = vet + 1; ptr < vet + n; ptr++) {
        if(*ptr > *ptrMaior) {
            ptrMaior = ptr;
            *m = *ptr;
        }
    }

    //Realiza a troca usando aritmética de ponteiros
    if(ptrMaior != vet) {
        //Só troca se o maior não for o primeiro
        int temp = *vet;
        *vet = *ptrMaior;
        *ptrMaior = temp;
    }
}

int main()
{
    int opcao;

    do {
        cout << "\n================= MENU =================" << endl;
        cout << "1. Passo a Passo de Ponteiros" << endl;
        cout << "2. Saber o que Cada Funcao Faz" << endl;
        cout << "3. Contar Pares, Impares e Negativos" << endl;
        cout << "4. Trocar Maior" << endl;
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

                break;
            }

            case 3: {
                int tamanho;
                cout << "Digite o tamanho do vetor => ";
                cin >> tamanho;

                int vet[tamanho];
                for(int i = 0; i < tamanho; i++) {
                    cout << "Digite o elemento " << i + 1 << " => ";
                    cin >> vet[i];
                }

                int par, impar, negativos;
                par = impar = negativos = 0;
                bool temNeg = func4(tamanho, vet, &par, &impar, &negativos);
                cout << "Pares => " << par << ", Impares => " << impar << ", Negativos => " << negativos << endl;
                cout << "Existe numero negativo? " << (temNeg ? "Sim" : "Nao") << endl;
                break;
            }

            case 4: {
                int tam;
                cout << "Digite o tamanho do vetor em numero INTEIRO => ";
                cin >> tam;
                int vetor[tam];

                for(int i = 0; i < tam; i++) {
                    cout << "Preecha o vetor => ";
                    cin >> vetor[i];
                }
                cout << endl;

                int maior;
                maior = 0;

                cout << "Vetor original => ";
                for(int i = 0; i < tam; i++)
                    cout << vetor[i] << " ";
                cout << endl;

                trocaMaior(vetor, tam, &maior);

                cout << "Vetor modificado => ";
                for(int i = 0; i < tam; i++)
                    cout << vetor[i] << " ";
                cout << endl;

                cout << "Maior elemento => " << maior << endl;
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