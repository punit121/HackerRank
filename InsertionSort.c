#include<stdio.h>

void insertionsort(int a[],int n){
int i,j,key;
for(j=1;j<n;j++){
    key=a[j];
    i=j-1;
    while(i>=0&&key < a[i]){
            a[i+1]=a[i];
            i--;
    }
    a[i+1]=key;
}



}
void printlist(int a[],int n){
int i;
for(i=0;i<n;i++){
    printf("%d  ",a[i]);
}
}
int main()
{
int n,a[1000],i,j;
printf("Enter total no. of no.s to keep in array ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
insertionsort(a,n);

printlist(a,n);


}
