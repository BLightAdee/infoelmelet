#include <iostream>
#include <cstring>

using namespace std;

int fakt(int n){
    if(n<=1)
        return 1;
    else
        return n*fakt(n-1);
}

int ossz=0;

int szjossz(int n){
    if(n<=0)
        return 0;
    else
        return ossz+n%10+szjossz(n/10);
}

int szjsz=0;

int pszjsz(int n){
    if(n<=0)
        return 0;
    else
        if(n%2==0)
            return 1+pszjsz(n/10);
        else
            return pszjsz(n/10);
}

int main() {
    int n;
    cin>>n;
    cout<<pszjsz(n);
}
