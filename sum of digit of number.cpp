#include <iostream>
using namespace std;

int main()
{
    int A, sum;
    cin>>A;
    while(A!=0){
      sum += A % 10;
      A = A / 10;
    }
    cout<<"sum of digits: "<<sum;
    return 0;
}
