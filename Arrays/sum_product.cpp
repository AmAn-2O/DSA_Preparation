#include <bits/stdc++.h>
using namespace std;
int sum_array(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int product(int arr[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        product*=arr[i];
    }
    return product;
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
    cout << "The elements you entered are:";
    print_array(arr,n);
    cout<<endl;
cout<<"Sum of all elements of array:";
cout<<sum_array(arr, n);
cout<<endl;
cout<<"Product of all elements of array:";
cout<<product(arr, n);
    return 0;
}