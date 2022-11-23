#include <iostream>
using namespace std;

int main()
{
float v, u, a, t;
cout<<"Enter initial velocity\n";
cin>>u;
cout<<"Enter acceleration\n";
cin>>a;
cout<<"Enter time\n";
cin>>t;
v = u + a*t;
cout<<v;

return 0;
}
