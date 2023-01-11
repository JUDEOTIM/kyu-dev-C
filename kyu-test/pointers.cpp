#include <iostream>
using namespace std;

int main ()
{
int *ptr , a = 5 , c ;
ptr = &a ;
*ptr += 1 ;
c = a % 4 ;
cout <<"*ptr = " <<*ptr <<endl <<"a = " <<a <<endl <<"c = " <<c <<endl;

return 0;

}
