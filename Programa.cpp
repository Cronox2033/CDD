#include <bits/stdc++.h>
using namespace std;

vector< pair<long double,long double>> Polinomio;
vector<long double> Numeros;

int main(int argc, char **argv)
{
    long double aux = 0;
    string pol = argv[1], temp = "";
    pair<long double, long double> par;

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
                    aux = stold(temp);
                    Numeros.push_back(aux);
                    temp = "";
                }
                else if(pol[i] == '+' || pol[i] == '-')
                {
                    aux = stold(temp);
                    Numeros.push_back(aux);
                    temp = "";
                    temp = temp + pol[i];
                }
                else
                {
                    temp = temp + pol[i];
                }
            } 
        }
        
    }
    aux = stold(temp);
    Numeros.push_back(aux);

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
           Polinomio.push_back(par);
       }
    }
    
    for (int i = 0; i < Polinomio.size(); i++)
    {
        cout<<Polinomio[i].first<< " "<<Polinomio[i].second<<endl;
    }
    

    
    return 0;
}