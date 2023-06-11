#include<iostream>
#include<unistd.h>
#include<stdlib.h>
using namespace std ;

class A{
    public :
    int s,m,h ;

    A(){
        s=0;
        m=0;
        h=0;
    }

    void display(){
        while(1){
            system("clear");
            cout<<h<<" : "<<m<<" : "<<s ;
            cout<<flush ;

            s++;
            if(s==60){
                m++ ;
                s=0 ;
            }

            if(m==60){
                h++ ;
                m=0 ;
            }

            if(h==12){
                h=0 ;
                m=0 ;
                s=0 ;
            }
            sleep(1);
        }
    }
};

int main(){
    A obj ;
    obj.display();
    return 0 ;
}