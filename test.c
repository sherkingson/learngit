#include<gmp.h>
#include<stdio.h>
void main()
{
        mpz_t s,n;
        int i;


        mpz_init(s);//init s,the value is 0
        mpz_init(n);


        for(i=1;i<1111111111;i++)
        {
                mpz_add_ui(n,n,1);//set n to n+1
                mpz_addmul(s,n,n);//add n*n to s
        }


        gmp_printf("the sum is %Zd\n",s);


        mpz_clear(s);
}
