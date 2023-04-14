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
    for (i -= 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinearSearch() {
    char ch;
    int comprasions; // Number of comprasions
    {
        // Accept teh number be searched
        cout << "\nEnter the element you want to search: ";
        int item;
        cin >> item;

        comprasions = 0;
        for (i = 0; i < n; i++) {// Langkah 2,3 dan 4

            comprasions++;
            if (arr[i] == item) {// langkah 5A found 
                cout << "\n" << item << "found at position" << (i + 1) << endl;
                break;

            }
        }
        if (i == n) // lamgkah 4
            cout << "\n" << item << "not found in the array\n";
        cout << "\n NUmber of comprasions :" << comprasions << endl;

        cout << "\n Continue search (y/n): ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));

}
int main()
{
    input();
    LinearSearch();
}