#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float calculaMedia(int n)
{
    int soma;
    float media;

    soma = 0;
    media = 0.0;

    float vetor[n];

    for(int i = 0; i < n; i++) {
        cout << "Digite o valor: " << endl;
        cin >> vetor[i];
    }

    cout << "Numeros digitados: ";
    for(int i = 0; i < n; i++)
        cout << " " <<vetor[i] << " ";
    cout << endl;

    for(int i = 0; i < n; i++)
        soma += vetor[i];

    cout << "Soma: " << soma << endl;
    media = soma / n;

    return media;
}

float vetorCalculaMedia(int n, float vetor[])
{
    int soma;
    float media;

    soma = 0;
    media = 0.0;

    for(int i = 0; i < n; i++)
        soma += vetor[i];

    cout << "Soma: " << soma << endl;
    media = soma / n;

    return media;
}

int procuraChar(string str, char ch)
{
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ch) {
            return i;
        }
        i++;
    }
    return -1; //Retorna -1 se o caractere não for encontrado
}

bool ehPrimo(int n)
{
    if(n < 2) 
        return false; //Números menores que 2 não são primos

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) 
            return false; //Se n for divisível por i, não é primo
    }

    return true; //Se não encontrou divisores, é primo
}

unsigned long long fatorial(int n)
{
    if(n <= 1) 
        return 1; //Fatorial de 1 é 1

    return n * fatorial(n - 1); //Chamada recursiva
}

float maiorValorPar(int n, float vetor[])
{
    float maior = 0.0;

    for(int i = 0; i < n; i++) {
        if(vetor[i] > maior && (int)vetor[i] % 2 == 0)
            maior = vetor[i];
    }

    return maior;
}

void lerNegativos(int n, float vet[])
{
    int i;
    float valor;

    i = 0;

    while(i < n) {
        cout << "Digite um valor negativo => ";
        cin >> valor;

        if(valor < 0) {
            vet[i] = valor;
            i++;
        }
        else
            cout << "Valor nao inserido. Apenas numeros negativos sao permitidos!" << endl;
    }
}

void operacoesLogicas()
{
    bool X, Y, Z;
    char entrada;
    
    cout << "Digite o valor logico de X (V/v para verdadeiro, F/f para falso): ";
    cin >> entrada;
    X = (toupper(entrada) == 'V');
    
    cout << "Digite o valor logico de Y (V/v para verdadeiro, F/f para falso): ";
    cin >> entrada;
    Y = (toupper(entrada) == 'V');
    
    cout << "Digite o valor logico de Z (V/v para verdadeiro, F/f para falso): ";
    cin >> entrada;
    Z = (toupper(entrada) == 'V');
    
    //Calcula as operações lógicas
    bool resultado1 = (X && Y) || (X && !Z);
    bool resultado2 = (X || Y) && (!X && Z);
    
    cout << "\nResultados:" << endl;
    cout << "1. (X && Y) || (X && !Z) = " << (resultado1 ? "Verdadeiro" : "Falso") << endl;
    cout << "2. (X || Y) && (!X && Z) = " << (resultado2 ? "Verdadeiro" : "Falso") << endl;
    
    //Adicionando explicação para ajudar no entendimento
    cout << "\nValores inseridos:" << endl;
    cout << "X: " << (X ? "Verdadeiro" : "Falso") << endl;
    cout << "Y: " << (Y ? "Verdadeiro" : "Falso") << endl;
    cout << "Z: " << (Z ? "Verdadeiro" : "Falso") << endl;
}

double calculaSoma(int n, double x)
{
    double S;
    S = 0.0;

    for(int i = 0; i <= n; i++)
        S+= pow(x, i);
    return S;
}

void calcularSomaSerie()
{
    int n;
    double x;

    cout << "Digite um numero INTEIRO => ";
    cin >> n;
    cout << "Digite um numero REAL => ";
    cin >> x;

    double resultado = calculaSoma(n, x);
    cout << "\nResultado da soma S (de i = 0 até " << n << ") de x ^ i" << endl;
    cout << "S = " << resultado << endl;
}

double calculaPiLeibniz (int n)
{
    double pi = 0.0;
    int sinal = 1;

    for(int i = 0; i < n; i++) {
        double termo = 1.0 / (2 * i + 1);
        pi += sinal * termo;
        sinal *= -1; //Atualiza o sinal para o proximo termo
    }
    return 4 * pi;
}

void calcularAproximacaoPi()
{
    int n;

    cout << "Digite o numero de termos para calcular pi (n > 0) => ";
    cin >> n;

    if(n <= 0) {
        cout << "Numero de termos deve ser positico!" << endl;
        return;
    }

    double pi_aproximado = calculaPiLeibniz(n);

    cout << "\nAproximacao de pi com " << n << " termos" << endl;
    cout << "Valor calculado => " << pi_aproximado << endl;
    cout << "Valor real de pi => " << M_PI << endl;
    cout << "Diferenca => " << abs(M_PI - pi_aproximado) << endl;
}

int main()
{
    int opcao;

    do {
        cout << "\n================ MENU ================" << endl;
        cout << "1. Calcular Media Sem Vetor" << endl;
        cout << "2. Calcular Media Com Vetor" << endl;
        cout << "3. Procurar Caractere na String" << endl;
        cout << "4. Verificar se o Numero eh Primo" << endl;
        cout << "5. Calcular Fatorial" << endl;
        cout << "6. Encontrar Maior Valor Par" << endl;
        cout << "7. Ler Valores Negativos" << endl;
        cout << "8. Operacoes Logicas com X, Y, Z" << endl;
        cout << "9. Calcular Soma" << endl;
        cout << "10. Calcular Aproximacao de Pi" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao => ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                int tamanho;
                cout << "Digite a quantidade de numeros => ";
                cin >> tamanho;
                float media = calculaMedia(tamanho);
                cout << "Media => " << media << endl;
                break;
            }

            case 2: {
                int tam;
                cout << "Digite a quantidade de numeros => ";
                cin >> tam;
                float vetor[tam];

                for(int i = 0; i < tam; i++) {
                    cout << "Digite o valor => ";
                    cin >> vetor[i];
                }
                float media = vetorCalculaMedia(tam, vetor);
                cout << "Media => " << media << endl;
                break;
            }

            case 3: {
                string str;
                char ch;
                cout << "Digite uma String => ";
                cin.ignore();
                getline(cin, str);
                cout << "Digite o caractere => ";
                cin >> ch;
                int pos = procuraChar(str, ch);

                if(pos != -1)
                    cout << "Caractere encontrado na posicao => " << pos << endl;
                else
                    cout << "Caractere NAO encontrado!" << endl;
                break;
            }

            case 4: {
                int numero;
                cout << "Digite um numero => ";
                cin >> numero;

                if(ehPrimo(numero))
                    cout << numero << " eh primo!" << endl;
                else
                    cout << numero << " NAO eh primo!" << endl;
                break;
            }

            case 5: {
                int numero;
                cout << "Digite um numero para calcular o fatorial => ";
                cin >> numero;

                unsigned long long fat = fatorial(numero);
                cout << "Fatorial de " << numero << " eh => " << fat << endl;
                break;
            }

            case 6: {
                int n;
                cout << "Digite a quantidade de numeros => ";
                cin >> n;
                float vetor[n];

                for(int i = 0; i < n; i++) {
                    cout << "Digite o valor => ";
                    cin >> vetor[i];
                }
                float maior = maiorValorPar(n, vetor);
                cout << "Maior valor par => " << maior << endl;
                break;
            }

            case 7: {
                int n;
                cout << "Digite a quantidade de numeros => ";
                cin >> n;
                float vetor[n];
                lerNegativos(n, vetor);

                cout << "Vetor preenchido com valores negativos => ";
                for(int i = 0; i < n; i++)
                    cout << vetor[i] << " ";
                cout << endl;
                break;
            }

            case 8: {
                operacoesLogicas();
                break;
            }

            case 9: {
                calcularSomaSerie();
                break;
            }

            case 10: {
                calcularAproximacaoPi();
                break;
            }

            case 0:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 0);    

    return 0;
}