#include <stdio.h>
int main() {
    int a[20],n,i,m,j,min=0,t;
    printf("enter a array size:");
    scanf("%d",&n);
    // inserting array elemnts
    for(i=0;i<n;i++)
    {
        printf("enter a array element :");
        scanf("%d",&a[i]);
    }
    
    //Selection Sort
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
 }
        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
}
