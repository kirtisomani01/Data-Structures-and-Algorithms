#include <iostream>
using namespace std;

int main()
{
    int n;
    bool a = true;
    cin>>n;
    if(n<2){
    cout<<n<< " is not a prime number ";
    return 0;
    }
    for(int i = 2; i<n; i++){
        if(n%i==0){
      
        cout<<n<<" is not a prime number";
        a = false;
        break;}
    }
    if(a==true)
    cout<<n<<" is prime number ";
    return 0;
    
  
}
