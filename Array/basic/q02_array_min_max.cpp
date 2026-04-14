#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Min = " << min << endl;
    cout << "Max = " << max;

    return 0;
}