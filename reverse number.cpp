#include <iostream>
using namespace std;

int main()
{
   int A, reverse = 0, rem;
   cin>>A;
   while(A!=0){
       rem = A%10;
       reverse = reverse*10 + rem;
       A = A/10;
   }
   cout<<"reverse is: "<< reverse;
   return 0;
}
