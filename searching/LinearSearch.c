#include <stdio.h>

int main()
{
    int arr[6]={5,9,12,3,36,28};
    printf("\nEnter the key to search : ");
    int num,x,found;
    scanf("%d",&num);
    for(x=0;x<6;x++)
    {
        if(num ==arr[x]  )
        {
            printf("\nkey has found in %d index",x);
	    found=1;
	    break;
        }
       else{continue;}

    }

    if(found!=1)
    {
        printf("Search not found!");
    }
    return 0;
}
