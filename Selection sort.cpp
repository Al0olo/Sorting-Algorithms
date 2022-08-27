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
        Let's start with simplist one of them the 'Selection Sort algorithm'

        this algorithm is so easy and there is no thinking
        You just decide you need it to be sorted ASC? or DESC?
        let it to be ASC, So you find the min element and place it in the first index
        and so on untill you finish it!.

        Time Complexity:
        - Average Case : O(n^2).
        - Worst Case : O(n^2).

        Space Complexity: O(1). This can be considered as advantage.
    */

// Define the function of selection sort.
void SelectionSort(int arr[], int size) 
{
    for (int counter = 0; counter < size-1; counter++)
    {
        int MiIndex = counter;
        for (int ncounter = counter+1; ncounter < size; ncounter++)
            if (arr[MiIndex] > arr[ncounter])
                MiIndex = ncounter;

            swap(arr[MiIndex], arr[counter]);
    }
}


// Driver Function
int main()
{
    fastread();

    int arr[7] = { -4,2,5,1,2,7,2 };
    SelectionSort(arr, 7);

    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";

    return 0;
}
