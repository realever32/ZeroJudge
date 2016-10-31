#include<iostream>  
#include<cstring>  
using namespace std;  
int main()  
{  
    char a[1000],k=0,c=1;  
    cin>>a;  
      
    k=strlen(a);  
      
      
    for(int i=0;i<k;i++)  
     {  
     if(a[i]!=a[k-c])  
     {  
     cout<<"no";  
     return 0;  
     }  
     c++;  
     }  
     cout<<"yes";  
       
    }  