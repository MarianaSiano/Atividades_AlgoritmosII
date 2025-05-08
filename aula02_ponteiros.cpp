#include <iostream>

using namespace std;

//Atividade 4
void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

//Atividade 5
void divisao(int num, int div, int *q, int *r)
{
    *q = num / div; //Armazena o quociente no endereco apontado por 'q'
    *r = num % div; //Armazena o resto no endereco apontado por 'r'
}

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
    cout << endl;

    cout << "Atividade 2" << endl;
    cout << endl;

    int a, b, c, v[3], *pti, *pti1, *pti2;
    a = 10;
    b = 20;
    c = 30;
    pti1 = &a;
    pti2 = &b;

    cout << "Endereco do ponteiro pti1: " << *pti1 << endl;
    cout << "Endereco de a: " << &a << endl;
    cout << "Valor do ponteiro pti1: " << pti1 << endl;
    cout << "Valor de a: " << a << endl;
    cout << endl;
    cout << "Endereco do ponteiro pti2: " << *pti2 << endl;
    cout << "Endereco de b: " << &b << endl;
    cout << "Valor do ponteiro pti2: " << pti2 << endl;
    cout << "Valor de b: " << b << endl;
    cout << endl;

    pti1 = pti2 = &c;
    cout << "Valor de c: " << c << endl;
    cout << "Valor do ponteiro pti1: " << pti1 << endl;
    cout << "Valor do ponteiro pti2: " << pti2 << endl;
    cout << endl;
    cout << "Endereco de c: " << &c << endl;
    cout << "Endereco do ponteiro pti1: " << *pti1 << endl;
    cout << "Endereco do ponteiro pti2: " << *pti2 << endl;
    cout << endl;

    pti = v; //Apenas pti para o inicio do vetor v
    *(pti) = 1;
    *(pti + 1) = 2;
    *(pti + 2) = 3;

    for(int i = 0; i < 3; i++)
        cout << v[i] <<" ";
    cout << endl;

    cout << endl;
    pti = &a;
    cout << "Endereco do ponteiro pti: " << *pti << endl;
    cout << "Endereco da variavel a: " << &a << endl;
    cout << endl;
    cout << "Valor do ponteiro pti: " << pti << endl;
    cout << "Valor da variavel a: " << a << endl;
    cout << endl;

    *pti += 99;
    cout << "Valor do ponteiro pti apos o acrescimo: " << pti << endl;
    cout << "Valor da variavel 'a' apos o acrescimo: " << a << endl;
    cout << endl;

    
    cout << "Valor do ponteiro pti1: " << *pti1 << endl;
    cout << "Valor do ponteiro pti2: " << *pti2 << endl;

    for(int i = 0; i < 3; i++)
        cout << v[i] <<" ";
    cout << endl;

    v[0] = *pti1 + *pti2;
    cout << "Vetor apos a troca de valor da primeira posicao" << endl;
    for(int i = 0; i < 3; i++)
        cout << v[i] <<" ";
    cout << endl;
    cout << endl;

    cout << "Valor do ponteiro pti2: " << *pti2 << endl;
    v[1] = *pti2;
    for(int i = 0; i < 3; i++)
        cout << v[i] <<" ";
    cout << endl;

    cout << endl;
    cout << "Valor do ponteiro pti: " << *pti << endl;
    v[2] = *pti;
    cout << "Vetor apos a troca de valor da segunda posicao" << endl;
    for(int i = 0; i < 3; i++)
        cout << v[i] <<" ";
    cout << endl;

    cout << endl;
    pti2 = &b;
    cout << "Valor do ponteiro pti2: " << *pti2 << endl;
    cout << "Valor da variavel 'b': " << b << endl;

    *(pti2) += 1;
    *(pti) = v[1];
    cout << "Valor do ponteiro pti que esta apontando para a segunda posicao do vetor: " << *pti << endl;
    *(pti) -=1;
    cout << "Novo valor do ponteiro pti2 apos o acrescimo: " << *pti2 << endl;
    cout << "Novo valor do ponteiro pti apos o decrescimo: " << *pti << endl;

    cout << endl;

    cout << "Valor da variavel 'a': " << a << endl;
    cout << "Valor da variavel 'b': " << b << endl;
    cout << "Valor da variavel 'c': " << c << endl;
    cout << endl;

    cout << "Valor das posicoes do vetor:" << endl;
    for(int i = 0; i < 3; i++)
        cout << v[i] << " ";
    cout << endl;

    cout << endl;
    cout << "Atividade 3" << endl;
    cout << endl;

    int x;
    float y;

    x = 23;
    y = 9.7;

    int *ponteiro = nullptr;
    ponteiro = &x;
    cout << "Valor do primeiro ponteiro: " << *ponteiro << endl;
    *(ponteiro) += 1;
    cout << "Novo valor do ponteiro apos o incremento: " << *ponteiro << endl;
    cout << endl;

    float *pt2 = nullptr;
    pt2 = &y;
    cout << "Valor do segundo ponteiro: " << *pt2 << endl;
    cout << endl;

    float soma = *ponteiro + *pt2;
    cout << "O resultado da soma dos ponteiro foi de: " << soma << endl;
    cout << endl;

    cout << "Endereco de 'x': " << ponteiro << endl;
    cout << "Endereco de 'x' somando-se 16 bytes: " << ponteiro + 16 << endl;
    cout << endl;

    float *pt3 = nullptr;
    pt3 = &y;
    cout << "Valor do endereco de memoria do terceiro ponteiro: " << pt3 << endl;
    pt3 += 1;
    cout << "Novo endereco de memoria de pt3: " << pt3 << endl;
    cout << endl;

    cout << "Endereco do terceiro ponteiro: " << pt3 << endl;
    pt3 = pt2;
    cout << "Endereco do segundo ponteiro: " << pt3 << endl;
    cout << endl;

    cout << "Atividade 4" << endl;
    cout << endl;

    int numero1, numero2;
    cout << "Digite um numero INTEIRO: ";
    cin >> numero1;
    cout << "Digite outro numero INTEIRO: ";
    cin >> numero2;

    cout << "Valor do primeiro numero: " << numero1 << endl;
    cout << "Valor do segundo numero: " << numero2 << endl;
    cout << endl;

    cout << "Fazendo a troca dos valores" << endl;
    troca(&numero1, &numero2);

    cout << "Novo valor do primeiro numero: " << numero1 << endl;
    cout << "Novo valor do segundo numero: " << numero2 << endl;
    cout << endl;
    
    cout << "Atividade 5" << endl;
    cout << endl;

    int num, div, quociente, resto;

    quociente = resto = 0;
    cout << "Digite o numerador: ";
    cin >> num;
    cout << "Digite o divisor: ";
    cin >> div;

    cout << "Calculando a divisao" << endl;
    divisao(num, div, &quociente, &resto);
    cout << endl;

    cout << "Resultado do quociente: " << quociente << endl;
    cout << "Resultado do resto: " << resto << endl;

    return 0;
}