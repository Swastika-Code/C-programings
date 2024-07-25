//BINARY SEARCH
#include <stdio.h>
int main() {
    int a[20],n,i,m,l,r,mid,flag=0, c=1;
    printf("enter a array size:");
    scanf("%d",&n);
    // inserting array elemnts
    for(i=0;i<n;i++)
    {
        printf("enter a array element :");
        scanf("%d",&a[i]);
    }
    printf("enter a number to search:");
    scanf("%d",&m);
    
    l=0;
    r=n-1;
    //Binary Search
    while(l<=r){
        mid=(l+r)/2;
        //when found
        if(a[mid]==m){
            flag=1;
            break;
        }
        //when  m is larger than mid
        if(m>a[mid])
        {
            l=mid+1;
        }
        //when m is smaller than mid
        if(m<a[mid])
        {
            r=mid-1;
        }
        
        ++c;
    }
    if(flag==1)
    printf("found");
    else
    printf("not found");
    
        printf("number of iterations =%d",c);
}
