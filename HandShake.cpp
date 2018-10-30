#include<iostream>
using namespace std;
int main()
{
    int T,N,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>N;
        cout<<((N*(N-1))/2)<<endl;
    }
    return 0;
}
