#include<stdio.h>
#include<math.h>


void findroot(float start,float stop)
{
    float funct;
    //printf("%f   %f\n",start ,stop);
    if(start==stop||((stop-start)<.000001))
    {
        printf("The root is close to %f\n",stop);
    }
    else
    {
        funct=(exp(-start)-sin(start))*(exp(-stop)-sin(stop));
        if(funct>0)
	{
	    printf("Unable to find the root");
	}
	else
	{
	    float x=(start+stop)/2;
	    if(((exp(-start)-sin(start))*(exp(-x)-sin(x)))<0)
	    {
	        findroot(start,x);
	    }
	    else findroot(x,stop);
	}
    }
}
main()
{
    float start,stop;
    printf("Press enter to find the root of 'exp(x)=sin(x) '");
    while(getchar()!='\n')
    {}
    printf("Enter the lower limit to consider for solving the equation:");
    scanf("%f",&start);
    printf("Enter the upper limit to consider for solving the equation:");
    scanf("%f",&stop);
    findroot(start,stop);
}