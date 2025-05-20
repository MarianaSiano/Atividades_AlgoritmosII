#include <iostream>

using namespace std;

void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void divisao(int num, int div, int *q, int *r)
{
    *q = num / div; //Armazena o quociente no endereco apontado por 'q'
    *r = num % div; //Armazena o resto no endereco apontado por 'r'
}

bool func(int tam, int vet[], int *par, int *impar, int *negativos)
{
    for(int i = 0; i < tam; i++) {
        if(vet[i] % 2 == 0) {
            *(par) += 1;
        }

        else if(vet[i] % 2 != 0) {
            *(impar) += 1;
        }

        if(vet[i] < 0) {
            *(negativos) += 1;
            return true; //Tem numeros negativos
        }
    }

    return false; //Nao possui nenhum numero negativo
}

void inverte(int vet[], int n) 
{
    for(int i = 0; i < n / 2; i++)
        troca(&vet[i], &vet[n - 1 - i]); //Troca elementos simétricos
}

int main()
{
    int opcao;

    do {
        cout << "\n========================== MENU DE ATIVIDADES ==========================" << endl;
        cout << "1. Ponteiro Simples" << endl;
        cout << "2. Manipulacao de Ponteiros" << endl;
        cout << "3. Soma com Ponteiros" << endl;
        cout << "4. Troca de Vetores" << endl;
        cout << "5. Divisao com Ponteiros" << endl;
        cout << "6. Contar Pares, Impares e Negativos" << endl;
        cout << "7. Inverter Vetor" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao)
        {
            case 1: {
                int *pt = nullptr;
                cout << "Endereco do ponteiro eh => " << pt << endl;

                int x;
                cout << "Digite um valor INTEIRO => ";
                cin >> x;

                pt = &x;
                cout << "O conteudo do ponteiro eh => " << *pt << endl;
                cout << "O endereco do ponteiro => " << pt << endl;
                cout << "O endereco da variavel eh => " << &x << endl;

                *(pt) *= 10;
                cout << "O conteudo apontado pelo ponteiro => " << *pt << endl;

                *(pt) += 10;
                cout << "O conteudo novamente do ponteiro => " << *pt << endl;
                break;
            }

            case 2: {
                int a = 10, b = 20, c = 30, v[3], *pti, *pti1 = &a, *pti2 = &b;

                cout << "Endereco do ponteiro pti1 => " << *pti1 << endl;
                cout << "Valor do ponteiro pti2 => " << *pti2 << endl;

                pti1 = pti2 = &c;

                pti = v;
                *(pti) = 1;
                *(pti + 1) = 2;
                *(pti + 2) = 3;

                for(int i = 0; i < 3; i++)
                    cout << v[i] << " ";
                cout << endl;

                *pti += 99;

                v[0] = *pti1 + *pti2;
                v[1] = *pti2;
                v[2] = *pti;

                *(pti2) += 1;
                *(pti) = v[1];
                *(pti) -= 1;

                cout << "a => " << a << ", b => " << b << ", c => " << c << endl;
                cout << "Vetor final => ";
                for(int i = 0; i < 3; i++)
                    cout << v[i] << " ";
                cout << endl;
                break;
            }

            case 3: {
                int x = 23;
                float y = 9.7;

                int *ponteiro = &x;
                float *pt2 = &y;

                cout << "Valor do primeiro ponteiro =>  " << *ponteiro << endl;
                *(ponteiro) += 1;
                cout << "Novo valor do ponteiro =>  " << *ponteiro << endl;

                cout << "Valor do segundo ponteiro => " << *pt2 << endl;

                float soma = *ponteiro + *pt2;
                cout << "Soma dos ponteiros => " << soma << endl;

                cout << "Endereco x => " << ponteiro << ", x + 16 bytes => " << ponteiro + 16 << endl;

                float *pt3 = &y;
                pt3 += 1;
                cout << "Novo endereco pt3 => " << pt3 << endl;
                pt3 = pt2;
                cout << "Endereco resetado pt3 => " << pt3 << endl;
                break;
            }

            case 4: {
                int numero1, numero2;
                cout << "Digite dois numeros INTEIROS => ";
                cin >> numero1 >> numero2;

                cout << "Antes da troca => " << numero1 << " " << numero2 << endl;
                troca(&numero1, &numero2);
                cout << "Depois da troca => " << numero1 << " " << numero2 << endl;
                break;
            }
        }
    } while(opcao != 0);

    return 0;
}