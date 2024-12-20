#include<iostream>
using namespace std;
int min(int a, int b)
{
    if(a>=b)
    {
        return b;
    }
    else
    {
      return a;
    }
}
int main()
{
    int T;
    cin>>T;
   for (int j = 0; j<T; j++)
    {
        int n;
        cin>>T;
        int a[n];
        int scoreone=0;
        int scorezero=0;
        for (int i = 0; i<n; i++)
        {
           cin>>a[i];
           if (a[i]==1)
           {
            ++scoreone;
           }
           else
           {
            ++scorezero;
           }
        }
        cout<<min(scorezero, scoreone);        

    }
    
    
}