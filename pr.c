#include<stdio.h>

int main()
{
    int n,at[20],wt[20],tat[20],bt[20],i,j,ct=0;
    int temp,pr[20];
    printf("enter the number of proccess");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        at[i]=0;
        bt[i]=0;
        tat[i]=0;
        wt[i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("enter the arrival time");
        scanf("%d",&at[i]);
        printf("enter the burst time for process %d",i+1);
        scanf("%d",&bt[i]);
        printf("enter priority");
        scanf("%d",&pr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(bt[j+1]<bt[j])
            {
                temp=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;
                temp=pr[j];
                pr[j]=pr[j+1];
                pr[j+1]=temp;
            }

        }
    }
    for(i=0;i<n;i++)

    {
    ct+=bt[i];
    tat[i]=ct-at[i];
    wt[i]=tat[i]-bt[i];
    }

    printf("process\t\tbt\t\twt\t\ttat\t\tpriority\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i],pr[i]);
    }

    }