#include<iostream>
using namespace std;
int main(){
    int n=7;
    while (n>0)
    {
        n--;
        if (n==5)
            {
                continue;
            }
            cout<<n<<endl;
    }
    
    
    return 0;
}