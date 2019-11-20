#include <iostream>
#include <stdlib.h>     
#include <time.h>

using namespace std;

int main(){ 
    int arr[10];
    //fill
    srand(time(0));
    for(int i = 0; i<10;i++){
        arr[i] = rand() % 10;
    }
    //output
    for(int i = 0; i<10;i++){
        cout << "[" << arr[i] << "]";
    }
    cout << endl;
    // delete dublicate elements of array
    for (int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i == j){

            }else if(arr[i] == arr[j]){
                arr[j] = 0;
            }
        }
    }
    //output
    for(int i = 0; i<10;i++){
        cout << "[" << arr[i] << "]";
    }
    cout << endl;
    //move zeros to right
    int i;
    for (int q=i=0; q<10; q++){
        if (arr[q]){
            arr[i++] = arr[q];
        }
    }
    for (; i<10; i++){
        arr[i] = 0;
    }
        
    //output
    for(int i = 0; i<10;i++){
        cout << "[" << arr[i] << "]";
    }
    cout << endl;

    system("pause");
    return 0;
}
