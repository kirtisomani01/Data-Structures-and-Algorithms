
#include <iostream>
using namespace std;

int main()
{
  int Num1,Num2,Sum1,Sum2;
  cin>>Num1>>Num2;
  Sum1 = (Num1*(Num1+1))/2;
  Sum2 = (Num2*(Num2+1))/2;
  cout<<Sum2-Sum1;
  return 0;
  
}
