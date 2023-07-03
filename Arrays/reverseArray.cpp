#include <bits/stdc++.h>
using namespace std;

void rev_arr(int arr[],int size){
int start=0;
int end=size-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;}
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

    cout<<endl;
cout<<"Reverse of Array:";
rev_arr(arr,n);
    print_array(arr,n);
    return 0;
}
