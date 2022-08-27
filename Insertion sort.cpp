#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

    /*
        Here we will discus the Insertion sort

        How it works? >> you will assume that the first element is correctly placed
        then you will start the outer loop from 1, then you compare the second element with the first one
        if (2nd > 1st) it means it's correctly placed too, else? you will swap them 
        and so on as you iterate in the array you will hold an element and compare it to the element before it
        untill it's in the right place!

        Time Complexity:
        - Best Case : O(n) the array sorted initially
        - average case : O(n^2)
        - Worst case : O(n^2) reversly sorted

    */

// Define the function of Insertion sort.
void InsertionSort(int arr[], int size) 
{
    for (int counter = 1; counter < size; counter++)  
    {
        int ncounter = counter - 1; // counter for inner loop 4

        // let's define the inner loop with condition
        while (ncounter >= 0 && arr[ncounter] > arr[ncounter + 1])
        {
            swap(arr[ncounter], arr[ncounter + 1]);
            ncounter--;
        }
    }
}


// Driver Function
int main()
{
    fastread();

    int arr[7] = { -4,2,5,1,2,7,2 };
    InsertionSort(arr, 7);

    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";

    return 0;
}
