/*
	Input
		The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
		The first and only line of each test case contains two space-separated integers A and B.
	Output
		For each test case, print a single line containing one integer — the number of matches needed to write the result (A+B).
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// your code goes here

	int t = 0;
	scanf("%d",&t);
	while(t--)
	{
	long long int Num1 = 0 , Num2 = 0 , Sum = 0 , MS = 0;

	scanf("%lld%lld",&Num1,&Num2);
	Sum = Num2+Num1;

	if(Sum == 0)
	{
	    MS = 6;
	}

	while(Sum > 0)
	{
	    switch(Sum%10)
	    {
	       case 0:
	           MS += 6;
	           break;
	       case 1:
	           MS += 2;
	           break;
	       case 2:
	           MS += 5;
	           break;
	       case 3:
	           MS += 5;
	           break;
	       case 4:
	           MS += 4;
	           break;
	       case 5:
	           MS += 5;
	           break;
	       case 6:
	           MS += 6;
	           break;
	       case 7:
	           MS += 3;
	           break;
	       case 8:
	           MS += 7;
	           break;
	       case 9:
	           MS += 6;
	           break;
	    }
	    Sum = Sum / 10;
	}
	printf("%lld\n",MS);
	}

	return 0;
}
