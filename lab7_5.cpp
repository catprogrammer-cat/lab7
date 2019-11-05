//Create vector of sums of positive
//elements of matrix rows
//4×3
//Double
#include <iostream>

using namespace std;

void output_vector(int x, int y){ // int x, int y
    int i,j;
    double a[4][3];
    double x_a[3];
    float sum;
       
        
        
    cout << "Input matrix "<< x << "x" << y << endl;
    for (i=0; i<x; i++){
        for (j=0; j<y; j++){
            cin>>a[i][j];
        }
    }
    // output array (a)
    for(int i = 0; i<x; i++){
        cout << i << " : "; 
        for(int j = 0; j<y; j++){
            cout << a[i][j] << " ";
        }
        cout << ";" << endl;
    }
    
    ///////////////////
    for (j=0; j<y; j++){ // i=0; i<6; i++
        sum = 0;
        for (i=0; i<x; i++){ // j=0; j<4; j++
            if(a[i][j] > 0){
                sum = sum + a[i][j]; 
            }
        }
        x_a[j] = sum;
    }
    //vector is 
    cout << "Vector is ";
    for (i=0; i<y; i++){
        cout<< x_a[i]<<"\t";
    }
    // int min = x[0];
    // for (i=0; i<4; i++){
    //     if(x[i] < min){
    //         min = x[i];
    //     }
    // }
}

int main()
{
    output_vector(4, 3);

    return 0;
}
// 0 : 3 4 5 ;                                                                                                                                                               
// 1 : 4 3 4 ;                                                                                                                                                               
// 2 : 5 4 3 ;                                                                                                                                                               
// 3 : 4 4 2 ;                                                                                                                                                               
Vector is 16    15      14
