#include <iostream>
using namespace std;

int *AddElementPosition(int x,int arg[],int position,int lenghtArr){

    int i;
    
    
    for ( i = lenghtArr; position <= i; i--)
    {
        arg[i]=arg[i-1];
    }
    arg[position-1]=x;

    return arg;
    
}

int main(){

    int arr[100]={0};
    int i ,x,pos,n=10;
    for (int i = 0; i <n; i++)
    {
        arr[i]=i+1;
    };
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;

    }
    x=50;
    pos=3;


    AddElementPosition(x,arr,pos,n);
    
    for (i = 0; i < n+1; i++)
    {
        cout<<arr[i]<<endl;

    }


    system("pause");
    return 0;
}