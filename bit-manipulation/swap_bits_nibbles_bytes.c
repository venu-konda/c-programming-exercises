#include<stdio.h>
int main()
{
    
    /////////bit swap /////////////
    
     int d,p1,p2;
        scanf("%d %d %d",&d,&p1,&p2);
        d=((d&~((1<<p1)|(1<<p2))))|
                ((d>>p1&1)<<p2)|
                ((d>>p2&1)<<p1);
        printf("%d",d);
        
        
    /////////nibble swap/////
        int d=0x12345678;
        int p1,p2;
        scanf("%d %d",&p1,&p2);
        d=(d&~((15<<(p1*4))|(15<<(p2*4))))
                |((d>>(p1*4)&15)<<(p2*4))
                |((d>>(p2*4)&15)<<(p1*4));
        printf("%x",d);
        
        ////byte swap   ///////////
                int d=0x12345678;
        int p1,p2;
        scanf("%d %d",&p1,&p2);
        d=(d&~((255<<(p1*8))|(255<<(p2*8))))
                |((d>>(p1*8)&255)<<(p2*8))
                |((d>>(p2*8)&255)<<(p1*8));
        printf("%x",d);
        
        ///////2 byte swap ////////////////
        
        unsigned long long int d=0x12345678abcd;
        int p1,p2;
        scanf("%d %d",&p1,&p2);
        printf("%llx\n",d);
        d=(d&~((65535<<(p1*16))|(65535<<(p2*16))))|
                ((d>>(p1*16)&65535)<<(p2*16))|
                ((d>>(p2*16)&65535)<<(p1*16));
        printf("%llx",d);
}