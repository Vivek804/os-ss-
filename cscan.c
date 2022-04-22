#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,head,seek_no=0,i,j,size,temp=0,disk,flag;
    printf("enter the number of request");
    scanf("%d",&n);
    printf("enter disk size");
    scanf("%d",&disk);
    printf("enter head ");
    scanf("%d",&head);
    int a[n];
    printf("enter the resource request");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    flag=0;
    for(i=0;i<n&&flag==0;i++)
    {
        if(a[i]>head)
        {
        j=i;
        flag=1;
        }
    }
    while(i<n)
    {
        seek_no+=abs(head-a[i]);
        head=a[i];
        i++;
    }
    seek_no+=abs(head-(disk-1));
    head=disk-1;
    seek_no+=abs(head-0);
    head=0;
    i=0;
    while(i!=j)
    {
        seek_no+=abs(head-a[i]);
        head=a[i];
        i++;
    }
    printf("total seek time=%d",seek_no);
    return 0;
}

    