#include <stdio.h>
int main() {
    int a[20],n,i,m,j,t;
    printf("enter a array size:");
    scanf("%d",&n);
    // inserting array elemnts
    for(i=0;i<n;i++)
    {
        printf("enter a array element :");
        scanf("%d",&a[i]);
    }
    
    //Bubble Sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(a[j]>a[j+1])
            {
                 t=a[j];
                 a[j]=a[j+1];
                 a[j+1]=t;
            }
        }
    }
    
    for(i=0;i<n;i++)
     {
        printf("%d,",a[i]);
    }
}
