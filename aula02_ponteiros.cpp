#include <iostream>

using namespace std;

int main()
{
    cout << "Atividade 1" << endl;
    cout << endl;

    int *pt = nullptr;
    cout << "Endereco do ponteiro eh: " << pt <<endl;

    int x;
    cout << "Digite um valor INTEIRO: ";
    cin >> x;

    pt = &x;
    cout << "O conteudo do ponteiro eh: " << *pt << endl;
    cout << "O endereco do ponteiro: " << pt << endl;
    cout << "O endereco da variavel eh: " << &x << endl;

    *(pt) *= 10;
    cout << "O conteudo apontado pelo ponteiro: " << *pt << endl;

    *(pt) += 10;
    cout << "O conteudo novamente do ponteiro: " << *pt << endl;

    return 0;
}