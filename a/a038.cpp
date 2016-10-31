#include <iostream>      
using namespace std;    
    
int main()   
{    
    long long int a,t=0;  
    cin >> a;  
    while(a!=0)  
    {  
    t=10*(t+a%10),a=a/10;  
    }  
    t=t/10;  
    cout << t;  
}  