#include <bits/stdc++.h>
using namespace std;

int get_min(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini=min(mini,arr[i]);
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}
int get_max(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
         maxi=max(maxi,arr[i]);
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
void input_array(int arr2[], int size2)
{
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
}

void print_array(int arr1[], int size)
{
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
    input_array(arr, n);

    cout << "The elements you entered are:";
    print_array(arr, n);
    cout << endl;

    cout << "Maximum elements from the array:";
    cout << get_max(arr, n);
    cout << endl;

    cout << "Minimum elements from the array:";
    cout << get_min(arr, n);

    return 0;
}
