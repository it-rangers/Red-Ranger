#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Program do obliczania rownania kwadratowego, ktore ma postac :" << endl;
    cout << "__________________a*x^2 + b*x + c = 0_________________________" <<endl <<endl;
    cout << "Podaj wartosci stalych a,b,c" <<endl;
    float a,b,c,x1,x2,delta;
    cin >> a >> b >> c ;
    delta =(b*b)-(4*a*c) ;
    cout << "Delta wynosi: " << delta <<endl;

    if (delta>0)
    {
        x1= (-b-sqrt(delta))/(2*a) ;
        x2= (-b+sqrt(delta))/(2*a) ;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta ==0)
    {
        x1= -b/(2*a);
        cout << "x1 = " << x1 << endl;
    }
    else if (delta<0)
        cout << "To rownanie nie ma rozwiazan " <<endl;

    else
        cout << "Zostala wpisana bledna wartosc" <<endl;

    return 0;
}
