//P Paul Jonathan
//TO RUN THIS CODE:
//*Open a browser
//*go to onlinegdb.com
//*paste this code on the editor after clearing it
//*select language to c++
//*make the output to fullscreen
//*run the code:)
#include<bits/stdc++.h>
using namespace std;
#define gotoxy(x,y) printf("\033[u\033[%dB\033[%dC`",y,x)
int randomNoGenerator(int limit) {random_device rd;mt19937 gen(rd());uniform_int_distribution<>dis(1, limit); return dis(gen);} 
int main(){
    int x1=50,y1=2,x2=0,y2=26,x3=100,y3=26,i=0,x0=x1,y0=x2,k;
    cout<<"\033[2J\033[u";
    while(i!=5000){
        k=randomNoGenerator(3);
        if(k==1)
        {x0=(abs(x1+x0)/2);y0=(abs(y1+y0)/2);}
        else if(k==2)
        {x0=(abs(x2+x0)/2);y0=(abs(y2+y0)/2);}
        else
        {x0=(abs(x3+x0)/2);y0=(abs(y3+y0)/2);}
        gotoxy(x0,y0);
        i++;}
    gotoxy(x1,y1);gotoxy(x2,y2);gotoxy(x3,y3);
    return 0;}
