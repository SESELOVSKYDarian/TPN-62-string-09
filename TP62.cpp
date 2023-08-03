#include <iostream>
#include <string>
using namespace std;
string ConvertirCesar(string f);
int main()
{
    string frase;
    cout<<"Ingresa la frase en mayuscula: ";
    getline(cin, frase);
    cout<<"En cesar es: "<< ConvertirCesar(frase);
    return 0;
}

string ConvertirCesar(string f)
{
    for (int i=0; i<f.size(); i++)
    {
        if (f[i]>='A' && f[i]<='Z')
        {
            f[i]=((f[i]-'A' + 1) % 26) + 'A';
        }
    }
    return f;
}