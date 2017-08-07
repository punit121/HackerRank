#include <iostream>

using namespace std;
void swap(int* a,int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[],int l,int h)
{
    int pivot = a[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(a[j]<=pivot)
        {
                i++;
                swap(&a[i],&a[j]);
        }

    }
    swap(&a[i+1],&a[h]);
    return i+1;
}
void quicksort(int a[],int l,int h)
{
    if(h>l)
    {
        int pi = partition(a,l,h);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,h);

    }
}
int main()
{
    //cout << "Hello world!" << endl;
    int a[1000];
    int i,j,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
