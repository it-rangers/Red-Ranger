#include <iostream>

using namespace std;

int main()
{

    float a,x,b,c;

    cout << "Obliczanie rownania liniowego ktore ma postac: a*x+b = c " << endl;
    cout << "Podaj wartosci a, b, c" << endl;
    cin >> a >> b >> c ;

    if (a==0)
        if (b-c==0)
        cout << "NWR" <<endl;
        else
        cout << "BR" <<endl;
    else
    {
         x = ((c-b)/a);
         cout << x;
    }


    return 0;
}
