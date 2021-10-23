#include <iostream>
using namespace std;

int *BacwardArray(int arg[],int lenghtArray){
    int bacwardArr[]={0};
    if (lenghtArray<=2 )
    {
        cout<<"olmadi"<<endl;
        return 0;
    }
    else{
        int lenghtofArr=lenghtArray-1;
        int x=0;
        for (int i= lenghtofArr;i<=0;  i--)
        {
            bacwardArr[i]=arg[x];
            x++;
        }
        

    
    }
    return arg;
}

    
int main(){

    int arrayx[]={1,2,3,4,5,5,7,8,9};

    BacwardArray(arrayx,9);

    system("pause");
    return 0;
}