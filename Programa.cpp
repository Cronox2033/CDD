#include <bits/stdc++.h>
using namespace std;

//vector< pair<double,double>> Polinomio;

int main(int argc, char **argv)
{
    long double aux = 0;
    string pol = argv[1], temp = "";

    /*El siguiente for transforma los datos del string en numeros long double
    y los junta en pares, para añadirlo a un string*/
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
                    cout<<aux<<endl;
                    temp = "";
                }
                else if(pol[i] == '+' || pol[i] == '-')
                {
                    aux = stold(temp);
                    cout<<aux<<endl;
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
    cout<<aux<<endl;
    

    
    return 0;
}