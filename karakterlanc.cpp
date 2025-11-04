#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

void spaceTorles(){
    char s[100]="  kicsi    kutya   tarka  ",sz[100],*p;
    while(s[0]==' '){
        for(int i=0;s[i]!='\0';i++){
            s[i]=s[i+1];
        }
    }
    int i, h=0;
    i=0;
    while(s[h]!='\0'){
      h++; //hany karakteres a lanc
    }
    while(i<h){
        if(s[i]==' ' && s[i+1]==' '){
            for(int j=i;s[j]!='\0';j++){
                s[j]=s[j+1];
            }
            h--;
        }
        else i++;
    }
    cout<<s<<"F";
}

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
