// Input integer matrix with 3 rows and 5 columns. Replace all negative element
// with zero

#include <iostream>

using namespace std;

int main()
{
    //declare array 'a[3][5]'
    int a[3][5];
    //input entire array 'a[3][5]'
    for(int i = 0; i<=2; i++){
        for(int j = 0; j<=4; j++){
            cin >> a[i][j];
        } 
    }
    //output entire array 'a[3][5]' 
    for(int i = 0; i<=2; i++){
        cout << i << " : "; 
        for(int j = 0; j<=4; j++){
            cout << a[i][j] << " ";
        }
        cout << ";" << endl;
    }
    //change negative element to zero(0)
    for(int i = 0; i<=2; i++){
        for(int j = 0; j<=4; j++){
            if(a[i][j]  < 0){
                a[i][j] = 0;
            }
        }
    }
    cout << "after manipulation" << endl;
    //output entire array 'a[3][5]' 
    for(int i = 0; i<=2; i++){
        cout << i << " : "; 
        for(int j = 0; j<=4; j++){
            cout << a[i][j] << " ";
        }
        cout << ";" << endl;
    }
    return 0;
}
//result: 0 : 34 -23 34 54 23 ;                                                                                                           
//        1 : 65 -34 -54 34 23 ;                                                                                                          
//        2 : -67 12 32 24 -34 ;                                                                                                          
//        after manipulation                                                                                                              
//        0 : 34 0 34 54 23 ;                                                                                                             
//        1 : 65 0 0 34 23 ;                                                                                                              
//        2 : 0 12 32 24 0 ;
