#include <iostream>
#include <cmath>
using namespace std;
double s(const double x);
int main() {
    double rp, rk, z;
    int n;

    cout << "rp = "; cin >> rp;
    cout << "rk = "; cin >> rk;
    cout<<"n =";cin>>n;

    double dr = (rk-rp)/n;
    double r = rp;

    while (r <= rk)
    {
z = s (sqrt(r) + 1) - pow(s(sqrt(r) - 1),2);

cout<< r <<" "<< z <<endl;

r += dr;
}
return 0; }
double s(const double x)
{
if (abs(x) >= 1)
return ((1 + pow(x,2) + sqrt(abs(sin(x))))/(sin(2*x*x)*sin(2*x*x)) + 1);
else
{
    double s = 0;
    for(int i =0 ; i <=5;i++)
    {
        int f = 1;
        for(int ii = 1;ii<=i;ii++)
            f*=ii;
        s+=pow(x,i) / f;
    }
    for(int k =1;k <=6;k++)
    {
        int f = 1;
        for(int kk =1;kk<=k;kk++)
            f*=kk;
        s+=pow(x,k) / f;
    }
return s;
}
}
