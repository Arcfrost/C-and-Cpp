#include <bits/stdc++.h>
using namespace std;

float f(float x)
{
    float f = x*x*x - x - 1;
    return f;
}

void secant(float x1, float x2, float E)
{
    float n = 0, xm, x0, c;
    if (f(x1) * f(x2) < 0) {
        do {
            x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
            c = f(x1) * f(x0);
            x1 = x2;
            x2 = x0;
            n++;
            if (c == 0)
                break;
            xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
            cout<<x0<<"\n";
        } while (fabs(xm - x0) >= E);
        cout << "Root of the given equation=" << x0 << endl;
        cout << "No. of iterations = " << n << endl;
    } else
        cout << "Can not find a root in the given interval";
}

int main()
{
    cout<<"***********SECANT METHOD***********";
    float x1 , x2, E = 0.0001;
    cout<<"\nEnter the value 0f x1 and x2: \n";
    cin>>x1>>x2;
    cout<<"\n";
    secant(x1, x2, E);
    return 0;
}
