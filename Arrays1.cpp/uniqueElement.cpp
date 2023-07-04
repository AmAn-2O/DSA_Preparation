#include <bits/stdc++.h>
using namespace std;

int uniquelement_optimal(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
void unique_element(int arr[], int size){
    for(int i=0;i<size;i++){
        bool unique=true;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j] && i!=j ){
                unique=false;
                break;
            }   
    }
    if(unique){
        cout<<arr[i]<<" ";
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
    cout << "unique elements are elements :";
    unique_element(arr,n);
    cout<<uniquelement_optimal(arr,n);
    


    return 0;
}