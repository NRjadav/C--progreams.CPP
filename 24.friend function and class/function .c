#include<stdio.h>

int nil(int n){


           if(n>=18)
           {
           	printf("adult");
           	
		   }
            else
            {
            	printf("not adult");
			}
            
}

int main()
{
	int m;
    printf("enter eny numberr:");
    scanf("%d",&m);
    printf("your number is=",m);
    nil(m);
}
