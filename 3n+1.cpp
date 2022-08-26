#include <iostream>
using namespace std;

int main() 
{ 
    long int n;
    cout << "Every Positive Integer Ends Up At 1 With The Expression 3N+1"<<endl;
    cout<<"Enter Any Positive Integer: ";
    cin>>n;
    do
    {
        if(n%2 == 0)
        {   
            n = n/2;
            cout<<n<<endl;
        }
        else
        {
            n = 3*n+1;
            cout<<n<<endl;
        }

    }while(n != 1);
  
  return 0;
}