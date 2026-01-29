// Binary Searching!
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x;
    cout << "SIZE OF ARRAY : ";
    cin >> x;
    cout << "Enter the elements : ";
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + x);
    int n;
    cout << "Which element to search : ";
    cin >> n;
    int left = 0;
    int right = x - 1;
    int temp=0;
    while (right >= left)
    {
        int mid = (left + (right-left)) / 2;
        if (arr[mid] == n)
        {
            temp=1;
            break;
        }
        else if (arr[mid] < n)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }
    if(temp==1){
        cout<<"ELEMENT PRESENT!";
    }
    else{
        cout<<"ELEMENT NOT PRESENT!";
    }
}