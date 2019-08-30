#include <bits/stdc++.h>
#define iteraciones 100
#define tope 10e-20
using namespace std;

long double x = 0.5,fx = 0, dy = 0; //cambiar x para evaluar en otro numero
vector< pair<long double,long double>> Polinomio;
vector< pair<long double,long double>> Derivada;
vector<long double> Numeros;

void Derivar_Polinomio()
{
    pair<long double, long double> parDerivado;
    for (int i = 0; i < Polinomio.size(); i++)
    {
        parDerivado.first = Polinomio[i].first*Polinomio[i].second;
        parDerivado.second = Polinomio[i].second - 1;
        if(parDerivado.second<0) parDerivado.second = 0;
        if(parDerivado.first== -0) parDerivado.first = 0; //Solucion de bug -0
        Derivada.push_back(parDerivado);
    }
}

void Evaluar_Funcion()
{
    long double num = x,sumf = 0, sumd = 0;
    for (int i = 0; i < Polinomio.size(); i++)
    {
        sumf = sumf + Polinomio[i].first*pow(num,Polinomio[i].second);
        sumd = sumd + Derivada[i].first*pow(num,Derivada[i].second);
    }
    fx = sumf;
    dy = sumd;
}

void Newton_raphson()
{
    long double x1 = 0,error = 0;
    int cont = 0;
    Derivar_Polinomio();
    Evaluar_Funcion();
    if(dy == 0)
    {
        cout<<"La evaluacion de la derivada en: "<<x<<" da como resultado 0"<<endl;
    }
    else
    {
        while(cont < iteraciones)
        {
            x1 = x - fx/dy;
            error = x1 - x;
            abs(error);
            x = x1;
            Derivar_Polinomio();
            Evaluar_Funcion();
            cont+=1;
        }
        if(error<= 0.005)
        {
            //Si la raiz es muy cercana a 0, se intercambia por 0
            if(x>0 && x<tope)
            {
                x = 0;
            }
            cout<<"Una de las raices del polinomio es: "<<x<<endl;
        }
        else
        {
            cout<<"Despues de realizar 100 iteraciones"<<endl;
            cout<< "no se encontro una raiz con porcentaje de error menor a 0.5%"<<endl;
            cout<<"El valor de x despues de 100 iteraciones es: "<<x<<endl;
        }   
    }
}

int main(int argc, char **argv)
{
    long double aux = 0;
    string pol = "",temp = "";
    pair<long double, long double> par;

    // Bugfix - si no se ingresa un argumento, se reemplaza por 0.
    if (!argv[1])
    {
        pol = "0", temp = "";
    }
    else
    {
        pol = argv[1], temp = "";
    }

    if(pol == "" || pol == " " || pol == "-" || pol == "+")
    {
        pol = "0";
    }

    /*El siguiente for transforma los datos del string en numeros long double
    y los añade a un vector*/
    for (int i = 0; i < pol.length(); i++)
    {
        if(i==0 && pol[i] == '+')
        {
            temp = temp + pol[i];
        }
        else if(i==0 && pol[i] == '-')
        {
            temp = temp + pol[i];
        }
        else
        {
           if (pol[i] != ' ' && pol[i] != '*')
            {
                if (pol[i] == 'X' || pol[i] =='x')
                {
                    if(temp == "" || temp == "-" || temp == "+")
                    {
                        temp = temp + "1";
                        aux = stold(temp);
                        Numeros.push_back(aux);
                        temp = "";
                    }
                    else
                    {
                        aux = stold(temp);
                        Numeros.push_back(aux);
                        temp = "";
                    }
                }
                else if(pol[i] == '+' || pol[i] == '-')
                {
                    if(temp == "")
                    {
                        temp = temp + "1";
                        aux = stold(temp);
                        Numeros.push_back(aux);
                        temp = "";
                        temp = temp + pol[i];
                    }
                    else
                    {
                        aux = stold(temp);
                        Numeros.push_back(aux);
                        temp = "";
                        temp = temp + pol[i];
                    }
                }
                else
                {
                    temp = temp + pol[i];
                }
            } 
        }
        
    }
    if(pol.length()>1)
    {
    aux = stold(temp);
    Numeros.push_back(aux);
    }

    //Añade los numeros del vector antes creado a un vector de pares.
    for (int i = 0; i < Numeros.size(); i+=2)
    {
       if((i+1)<Numeros.size())
       {
           par.first = Numeros[i];
           par.second = Numeros[i+1];
           Polinomio.push_back(par);
       }
       else
       {
           par.first = Numeros[i];
           par.second = 0;
           if(pol[pol.length()-1] == 'x' || pol[pol.length()-1] == 'X')
           {
               par.second = 1;
           }
           Polinomio.push_back(par);
       }
    }
    
    Newton_raphson();    
    return 0;
}