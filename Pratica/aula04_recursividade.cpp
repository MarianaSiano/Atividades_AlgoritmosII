#include <iostream>
#include <cmath>

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

//Atividade 7
float soma(float x, int n)
{
    if(n == 1)
        return x; //Termo inicial: x ^ 1 / 1
    else
        return pow(-1, n - 1) * pow(x, n) / n + soma(x, n - 1);
}

int main ()
{
    int opcao;

    do {
            cout << "\n============== MENU DE ATIVIDADES ==============" << endl;
            cout << "1. Calcular Fatorial" << endl;
            cout << "2. Imprimir Intervalo" << endl;
            cout << "3. Imprimir Decrescente" << endl;
            cout << "4. Verificar se eh Primo" << endl;
            cout << "5. Calcular Modulo (x mod y)" << endl;
            cout << "6. Calcular Numero Harmonico" << endl;
            cout << "7. Calcular Somatorio com x e n" << endl;
            cout << "0. Sair" << endl;
            cout << "Escolha uma opcao => ";
            cin >> opcao;
            cout << endl;

            switch (opcao){
            case 1: {
                int numero;
                cout << "Digite um numero INTEIRO => ";
                cin >> numero;
                cout << "Fatorial de " << numero << " = " << fatorial(numero) << endl;
                break;
            }

            case 2: {
                int inicio, final, incremento;
                cout << "Digite o inicio do intervalo => ";
                cin >> inicio;
                cout << "Digite o funal do intervalo => ";
                cin >> final;
                cout << "Digite o incremento => ";
                cin >> incremento;
                imprimeIntervalo(inicio, final, incremento);
                cout << endl;
                break;
            }

            case 3: {
                int valor;
                cout << "Digite um numero INTEIRO => ";
                cin >> valor;
                cout << "Decrescente => ";
                imprimeDecrescente(valor);
                cout << endl;
                break;
            }

            case 4: {
                int num;
                cout << "Digite um numero INTEIRO => ";
                cin >> num;

                if(ehPrimo(num))
                    cout << num << " eh primo!!" << endl;
                else
                    cout << num << " nao eh primo!!" << endl;

                break;
            }

            case 5: {
                int x, y;
                cout << "Digite o valor de x => ";
                cin >> x;
                cout << "Digite o valor de y => ";
                cin >> y;
                cout << x << " modulo " << y << " = " << modulo(x, y) << endl;
                break;
            }

            case 6: {
                int n;
                cout << "Digite um numero INTEIRO => ";
                cin >> n;
                cout << "H(" << n << ") = " << harmonico(n) << endl;
                break;
            }

            case 7: {
                float x;
                int n;
                cout << "Digite um numero COM CASA DECIMAL => ";
                cin >> x;
                cout << "Digite um numero INTEIRO => ";
                cin >> n;
                cout << "Soma (" << x << ", " << n << ") = " << soma(x, n) << endl;
                break;
            }

            case 0: {
                cout << "Encerrando o programa..." << endl;
                break;
            }
            
            default:
                cout << "Opcao invalida! Tente novamente." << endl;
        }

        cout << "\n-----------------------------------------------\n";
    } while(opcao != 0);

    return 0;
}