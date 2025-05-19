#include <iostream>

using namespace std;

//Atividade 1
unsigned long long fatorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1); //Chamada recursiva
}

//Atividade 2
void imprimeIntervalo(int a, int b, int inc)
{
    if((inc > 0 && a > b) || (inc < 0 && a < b))
        return; //Condição de parada
    cout << a << " ";
    imprimeIntervalo(a + inc, b, inc); //Chamada recursiva
}

//Atividade 3
void imprimeDecrescente(int n)
{
    if(n < 0)
        return; //Condição de parada
    cout << n << " ";
    imprimeDecrescente(n - 1); //Chamada recursiva com n - 1
}

//Atividade 4
bool verificaPrimo(int n, int divisor)
{
    if(divisor == 1)
        return true; //Caso base: nenhum divisor encontrado
    if(n % divisor == 0)
        return false; //Encontrou um dividor -> não é primo
    return verificaPrimo(n, divisor - 1); //Chamada recursiva
}

bool ehPrimo(int n)
{
    if(n <= 1)
        return true; //0 e 1 não são primos
    return verificaPrimo(n, n - 1); //Começa testando a partir de n - 1
}

//Atividade 5
int modulo(int x, int y)
{
    if(x == y)
        return 0;
    else if(x < y)
        return x;
    else
        return modulo(x - y, y);
}

//Atividade 6
float harmonico(int n)
{
    if(n == 1)
        return 1.0;
    else
        return 1.0 / n + harmonico(n - 1);
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

    cout << "Impriminto em intervalos" << endl;
    imprimeIntervalo(inicio, final, incremento);
    cout << endl;

    cout << "================== Atividade 3 ==================" << endl;
    cout << endl;

    int valor;

    cout << "Digite um numero INTEIRO => ";
    cin >> valor;
    cout << endl;

    cout << "Imprimindo em decrescente" << endl;
    imprimeDecrescente(valor);
    cout << endl;

    cout << "================== Atividade 4 ==================" << endl;
    cout << endl;

    int num;
    cout << "Digite um numero INTEIRO => ";
    cin >> num;

    cout << "Vendo se eh primo" << endl;
    if(ehPrimo(num))
        cout << num << " eh primo!" << endl;
    else
        cout << num << " nao eh primo!" << endl;
    
    cout << endl;

    cout << "================== Atividade 5 ==================" << endl;
    cout << endl;

    int x, y;
    cout << "Digite o numero de x => ";
    cin >> x;
    cout << "Digite o numero de y => ";
    cin >> y;

    cout << "Calculando o modulo dos valores de " << x << " e " << y << "!" << endl;
    int resultadoModulo;
    resultadoModulo = modulo(x, y);

    cout << "Resultado do Modulo => " << resultadoModulo << endl;
    cout << endl;

    cout << "================== Atividade 6 ==================" << endl;
    cout << endl;

    int valores;
    cout << "Digite um numero INTEIRO => ";
    cin >> valores;

    cout << "Fazendo o harmonico" << endl;
    float resultadoHarmonico;
    resultadoHarmonico = harmonico(valores);

    cout << "H(" << valores << ") = " << harmonico(valores);
    cout << endl;

    return 0;
}