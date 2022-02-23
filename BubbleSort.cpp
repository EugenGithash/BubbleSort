
#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j <= n-1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }  
}

int main()
{
    int arr[] = { 23, 19, 45, 44, 44, 0, 1 ,3 ,59 };
    int n;
    cout << "Introduceti numarul de elemente din vector: "; cin >> n; cout << endl;
    cout << "Introduceti elementele vectorului:";
    for (int j = 1; j <= n; j++) {
        cout << "Element:"; cin >> arr[j];
    }
    bubbleSort(arr, n);
    cout << "Vector sortat: \n";
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
       
    return 0;
}