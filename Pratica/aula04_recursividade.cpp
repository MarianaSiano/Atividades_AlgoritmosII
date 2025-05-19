#include <iostream>

using namespace std;

unsigned long long fatorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1); //Chamada recursiva
}

void imprimeIntervalo(int a, int b, int inc)
{
    if((inc > 0 && a > b) || (inc < 0 && a < b))
        return; //Condição de parada
    cout << a << " ";
    imprimeIntervalo(a + inc, b, inc); //Chamada recursiva
}

int main ()
{
    // cout << "================== Atividade 1 ==================" << endl;
    // cout << endl;

    // int numero;
    // cout << "Digite um numero INTEIRO => ";
    // cin >> numero;

    // cout << "Calculando o faltorial de " << numero << endl;
    // unsigned long long resultadoFatorial = 1;
    // resultadoFatorial = fatorial(numero);
    // cout << endl;
    // cout << "Resultado do calculo desse fatorial => " << resultadoFatorial << endl;
    cout << endl;

    cout << "================== Atividade 2 ==================" << endl;
    cout << endl;

    int inicio, final, incremento;
    cout << "Digite um numero INTEIRO de inicio => ";
    cin >> inicio;
    cout << "Digite um numero INTEIRO para o final => ";
    cin >> final;
    cout << "Digite o incremente desejado (NUMERO INTEIRO) => ";
    cin >> incremento;
    cout << endl;

    imprimeIntervalo(inicio, final, incremento);
    cout << endl;

    return 0;
}