#include <iostream>
#include<stdio.h>

using namespace std;

int ev=0,od=0;
int even(int n);
int odd(int n);
int even_odd_chcek(int n);

int main()
{
           int n,t,a,ans;
           int max;

            while(scanf("%d",&n)==1){

            if(n==0)
            break;

            t=n;
            max=n; // because if n even then max would be the number n=32 then 32,16,8,4,2,1
                                // here max is 32 I mean n
            while(t!=1){

                    if(even_odd_chcek(t)==1){  //odd
                            t=odd(t);
                            a=t;
            if(a>max){
            max=a;
            }
            }

                    if(even_odd_chcek(t)==0){  //even
                        t=even(t);
                        a=t;

            if(a>max){
            max=a;
            }
            }

    } // end child loop

                printf("%d\n",max);

        } // end parent loop

 return 0;
}

int even(int n)
{
   int tmp=n/2;
  return tmp;
}

int odd(int n)
{
     int tmp=0;
 tmp=(n*3)+1;

     return tmp;
}

int even_odd_chcek(int n){

                        if(n%2==0){
                           ev=0;
                           return ev;
                        }
                        else{
                        od=1;
                        return od;
                        }
}