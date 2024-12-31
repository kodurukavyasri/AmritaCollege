#include<iostream>

using namespace std;

int main(){
    int size;

    cout << "Enter the size of the array : " << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i <= size; i++){
        cout << "Enter the element : " << endl;
        cin >>arr[i];
    }

    //int max_element;
    int biggest_element = arr[0];

    for (int i = 1; i < size; i++) {
        if(biggest_element < arr[i]){
            biggest_element = arr[i];
        }
    }

    cout << biggest_element;
    

}