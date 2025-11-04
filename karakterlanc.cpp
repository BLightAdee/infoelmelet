#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main(){
    char s[100]="kicsi kutya tarka",sz[100],*p;
    cin.getline(sz,100); //spaceel beolv
    cin>>sz; //space nelkuli beolv
    p=s;
    p=s+7 //ekkor cout<<p; ugyanaz mint cout<<s+7;    
    cout<<sz;
    int h=0;
    while(sz[h]!='\0'){
      h++; //hany karakteres a lanc
    }
//
    while(sz[h]!='\0'){
      if(s[0]>='a' && s[0]<='z'){
        s[0]=s[0]+'A'-'a';
      }
      for(int i=1;i<h;i++){  //csereld ki kisbetut szo elejen naggyal
        if(s[i-1]==' ' && s[i]>='a' && s[i]<='z'){
          s[i]=s[i]+'A'-'a';
        }
      }
      //
    cout<<s+7; //7 karakterrel arrebb
}
//keepen van illusztralt pelda
