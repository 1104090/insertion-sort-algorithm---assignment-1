#include <iostream>

using namespace std;

void insertionSort(int arr[]) {
    for (int j=1; j < 5; j++) {
        int key = arr[j];
        int i = j -1;
        while (i > -1 && arr[i] > key) {
            arr[i+1] = arr[i];
            i = i -1;
        }
        arr[i+1] = key;
    }
}

int main()
{
    int nums[] = {2, 1, 3, 5, 4};
    return 0;
}
