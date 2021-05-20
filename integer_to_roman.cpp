#include<bits/stdc++.h>
using namespace std;


string intToRoman(int num) {
    string s="";

    while(num>0){

        if(num>=1000){
            int x=num/1000;
            num=num%1000;
            s+=string(x,'M');
        }else if(num>=900){
            int x=num/900;
            num=num%900;
            for(int i=0;i<x;i++){
                s+="CM";
            }
            //s+=string(x,'CM');
        }else if(num>=500){
            int x=num/500;
            num=num%500;
            s+=string(x,'D');
        }else if(num>=400){
            int x=num/400;
            num=num%400;
            for(int i=0;i<x;i++){
                s+="CD";
            }
            //s+=string(x,'CD');
        }else if(num>=100){
            int x=num/100;
            num=num%100;
            s+=string(x,'C');
        }else if(num>=90){
            int x=num/90;
            num=num%90;
            for(int i=0;i<x;i++){
                s+="XC";
            }
            //s+=string(x,'XC');
        }else if(num>=50){
            int x=num/50;
            num=num%50;
            s+=string(x,'L');
        }else if(num>=40){
            int x=num/40;
            num=num%40;
            for(int i=0;i<x;i++){
                s+="XL";
            }
            //s+=string(x,'XL');
        }else if(num>=10){
            int x=num/10;
            num=num%10;
            s+=string(x,'X');
        }else if(num>=9){
            int x=num/9;
            num=num%9;
            for(int i=0;i<x;i++){
                s+="IX";
            }
            //s+=string(x,'IX');
        }else if(num>=5){
            int x=num/5;
            num=num%5;
            s+=string(x,'V');
        }else if(num>=4){
            //cout<<4<<endl;
            int x=num/4;
            num=num%4;
            for(int i=0;i<x;i++){
                s+="IV";
            }
            //s+=string(x,'IV');
        }else{
            s+=string(num,'I');
            num=0;
        }
    }

    return s;
}

int main(){

    int num=3;
    cout<<intToRoman(num)<<endl;
    num=4;
    cout<<intToRoman(num)<<endl;
    num=9;
    cout<<intToRoman(num)<<endl;
    num=58;
    cout<<intToRoman(num)<<endl;
    num=1994;
    cout<<intToRoman(num)<<endl;
return 0;
}
