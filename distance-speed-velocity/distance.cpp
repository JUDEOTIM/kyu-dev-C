#include <iostream>
using namespace std;
int main()
{
float s, u, t, a;
cout<<"Enter initial velocity:" ;
cin>>u;
cout<<"Enter time:" ;
cin>>t;
cout<<"Enter acceleration:" ;
cin>>a;
s = u*t+0.5*a*t*t;
cout<<"The displacement(s) is "<< s << endl;

return 0;

}
