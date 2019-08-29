#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
    vector<string> allArgs(argv + 1, argv + argc);
    for (int i = 0; i < argc; i++)
    {
        cout<<allArgs[i]<<endl;
    }
    
    return 0;
}