#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int v;
int u;
int a;
int s;

cout << "Enter initial velocity(u)";
cin >> u;
cout << "Enter acceleration";
cin >> a;
cout << "Enter displacement";
cin >> s;
v = (u*u)+ 2*a*s*s;
cout<<sqrt (v);
return 0;
}
