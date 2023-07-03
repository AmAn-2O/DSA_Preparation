#include <bits/stdc++.h>
using namespace std;

void alternate_swap(int arr[], int size){
    int k=0;
    for(int i=0;i<size;i+=2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
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
    int n;
    cout << "Enter the no. of elements:";
    cin >> n;
    int arr[100];
    cout << "Enter the elements:";
    input_array(arr,n);
    alternate_swap(arr,n);
    cout << "The elements you entered are:";
    print_array(arr,n);

    return 0;
}