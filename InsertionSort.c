#include<stdio.h>

void insertion_sort(int a[],int n){
    int i,j,k;
    for(j=1;j<n;j++){
        k=a[j];
        i=j-1;
        while(i>=0 && a[i]>k){
            a[i+1]=a[i];
            i--;

        }
        a[i+1]=k;

    }

}

int main()
{
    //printf("Hello, World!\n Enter N : ");
    int a[100],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    insertion_sort(a,n);

    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }


    return 0;
}

