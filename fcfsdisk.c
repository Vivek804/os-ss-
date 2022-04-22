#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,head,seek_no=0,i;
    printf("enter the number of request");
    scanf("%d",&n);
    printf("enter head ");
    scanf("%d",&head);
    int a[n];
    printf("enter the resource request");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        seek_no=seek_no+abs(head-a[i]);
        head=a[i];
    }
    printf("total seek time=%d",seek_no);
    return 0;
}