// Input real matrix with 6 rows and 4 columns. Create vector of matrix column
// with the smallest sum of elements
#include <iostream>

using namespace std;

int main()
{
    int a[6][4], x[4], i, j, sum;
    // input array(a)
    cout << "Input matrix 6x4:"<<endl;
    for (i=0; i<6; i++){
        for (j=0; j<4; j++){
            cin>>a[i][j];
        }
    }
        
    cout << "Vector:\n";
    // output array (a)
     for(int i = 0; i<6; i++){
        cout << i << " : "; 
        for(int j = 0; j<4; j++){
            cout << a[i][j] << " ";
        }
        cout << ";" << endl;
    }
    //calculate column
     for (j=0; j<4; j++){ // i=0; i<6; i++
        sum = 0;
        for (i=0; i<6; i++){ // j=0; j<4; j++
            sum = sum + a[i][j]; 
        }
        x[j] = sum;
    }
    
    for (i=0; i<4; i++){
        cout<< x[i]<<"\t";
    }
    int min = x[0];
    for (i=0; i<4; i++){
        if(x[i] < min){
            min = x[i];
        }
    }
    
    
    cout<< "min element is " << min << endl;
    return 0;
}
//0 : 3 4 4 4 ;                                                      
// 1 : 3 3 4 4 ;                                                      
// 2 : 5 5 4 4 ;                                                      
// 3 : 3 3 3 4 ;                                                      
// 4 : 4 4 3 3 ;                                                      
// 5 : 3 4 4 4 ;
// 21      23      22      23      min element is 21 
