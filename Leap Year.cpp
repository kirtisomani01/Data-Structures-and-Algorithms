#include <iostream>
using namespace std;

int main()
{
 int leapyear;
 cin>>leapyear;
 if(leapyear%400 == 0)
 cout<<leapyear<< " is a leap year ";
 else if (leapyear % 4 == 0 && leapyear % 100 != 0)
 cout<< leapyear << " is a leap year ";
 else
 cout<< leapyear << "is not a leap year ";
 return 0;
 
}
