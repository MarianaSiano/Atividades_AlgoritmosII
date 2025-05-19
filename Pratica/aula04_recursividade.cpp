#include <iostream>

using namespace std;

unsigned long long fatorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1); //Chamada recursiva
}

int main ()
{
    cout << "================== Atividade 1 ==================" << endl;
    cout << endl;

    int numero;
    cout << "Digite um numero INTEIRO => ";
    cin >> numero;

    cout << "Calculando o faltorial de " << numero << endl;
    unsigned long long resultadoFatorial = 1;
    resultadoFatorial = fatorial(numero);
    cout << endl;
    cout << "Resultado do calculo desse fatorial => " << resultadoFatorial << endl;
    cout << endl;

    return 0;
}