/*
    Input:
        The first line of the input consists of an integer T, the number of test cases.
        The first and only line of each test case contains four space-separated integers - N, K, X and Y, denoting the number of cities, the size of jumps, Covid's current city, and the city that you live in, respectively.
    Output:
        For each test case, in a new line, print YES if Covid shall reach your city after a finite number of days, else print NO.
*/

#include <stdio.h>

int main(void) {
	// your code goes here

	int TC = 0;
	scanf("%d",&TC);

	while(TC--)
	{
        int NOC = 0, SOJ = 0, CC = 0, LC = 0;

        scanf("%d%d%d%d",&NOC,&SOJ,&CC,&LC);

        int SC = CC;
        if(CC == LC)
        {
            printf("YES");
        }
        else
        {
            CC+=SOJ;
            while(1)
            {
                if(CC == SC || CC == LC)
                {
                    break;
                }
                CC += SOJ;
                if(CC > NOC)
                {
                    int i = 0;
                    i =  CC - NOC;
                    CC = i;
                }
            }
            if(CC == LC)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
	}
	return 0;
}

