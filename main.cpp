#include <iostream>

using namespace std;

int countPositiveFrom(int *arr, int size, int pos){
    int count = 0;
    for(int i = pos; i < size; i++){
        if(arr[i] > 0){
            count++;
        }else{
            return count;
        }
    }
    return count;
}

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }

    int maxcount = 0;
    int count;

    for(int i = 0; i < n; i++){
        count = countPositiveFrom(arr, n, i);
        if (count > maxcount){
            cout << i << ":" << count << "\n";
            maxcount = count;
        }
    }
    cout << maxcount;
}
