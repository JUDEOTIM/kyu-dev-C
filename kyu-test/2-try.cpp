#include <iostream>
using namespace std;

int main ()
{
int f , n , b ,t ;
int *p ;
p = &f ;
cout <<"the value of n\n" ;
cin >> n ;
cout <<"the value of b\n" ;
cin >> b ;
cout <<"the value of t\n" ;
cin >> t ;
f = n + b + t ;
cout <<"the value of *p is = " <<f <<endl ;

return 0;

}
