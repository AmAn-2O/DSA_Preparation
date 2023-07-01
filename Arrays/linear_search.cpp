#include <bits/stdc++.h>
using namespace std;

int lin_ser(int arr[],int size,int element){
for(int i=0;i<size;i++){
    if(arr[i]==element){
        return i;
    }
}

}

void input_array(int arr2[],int size2){
for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
}

void print_array(int arr1[],int size){
for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
}

int main()
{
    int n,element;
    cout << "Enter the no. of elements:";
    cin >> n;
    int arr[100];
    cout << "Enter the elements:";
    input_array(arr,n);
    cout<<"Enter the element to found:";
    cin>>element;
    cout << "The elements you entered are:";
    print_array(arr,n);
cout<<"Index of element is found:";
cout<<lin_ser(arr,n,element);
    return 0;
}