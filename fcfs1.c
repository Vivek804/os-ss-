#include<stdio.h>

int main()
{
    int n,ct=0,i=0;
    printf("enter the number of processes");
    scanf("%d",&n);
    int at[n],bt[n],tat[n],wt[n];
    for(i=0;i<n;i++)
    {
        printf("enter the arrrival time for %d",i+1);
        scanf("%d",&at[i]);
        printf("enter the burst time for %d",i+1);
        scanf("%d",&bt[i]);
        ct+=bt[i];
        tat[i]=ct-at[i];
        wt[i]=tat[i]-bt[i];
    }
    printf("process\t\ttat\t\twt\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\n",i+1,tat[i],wt[i]);
    }

    
}