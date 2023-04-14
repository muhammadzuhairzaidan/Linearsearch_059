#include <iostream>
using namespace std;

int arr[20]; // Array to be search 
int n; //Number of elements in the array
int i; //index of array element

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array:";
        cin >> n;
        if ((n < 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }

    //accept array elements
    cout << "\n-------------------\n";
    cout << "Enter array elements \n";
    cout << "---------------------\n";
    