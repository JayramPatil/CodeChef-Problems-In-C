//Contest Code:PRACTICE Problem Code:INTEST

#include<stdio.h>

int main()
{
    int i=0,j=0,k=0,l=0;
    
    scanf("%d%d",&i,&j);
    
    while(i > 0)
    {
        scanf("%d",&k);
        
        if(k % j == 0)
        {
            l++;
        }
        i--;
    }
    
    printf("%d",l);
    return 0;
}

