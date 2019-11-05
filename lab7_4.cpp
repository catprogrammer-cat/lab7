//Calculate the sum of positive odd elements and change the
//elements in the corners of matrix with this sum
//3×5
//Integer
#include <iostream>

using namespace std;

void output_quantity_odd_and_replace_corner_of_quantity_odd(int x, int y){
        int i,j;
        int a[x][y];
       
        
        
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
        int quantity_odd = 0;
        for( int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                if(a[i][j] % 2 != 0)
                {
                    quantity_odd++;
                }
            }
        }
        cout << "quantity_odd is " << quantity_odd << endl;
        
        //replace corner of (quantity_odd)
        
         a[0][0] = quantity_odd;
         a[0][y-1] = quantity_odd;
         a[x-1][0] = quantity_odd;
         a[x-1][y-1] = quantity_odd;
        
         // output array (a)
         for(int i = 0; i<x; i++){
            cout << i << " : "; 
            for(int j = 0; j<y; j++){
                cout << a[i][j] << " ";
            }
            cout << ";" << endl;
        }
    }
    
int main()
{
    
    output_quantity_odd_and_replace_corner_of_quantity_odd(4,5);

    return 0;
}
// 0 : 3 4 34 5 4 ;                                                                                                                                                          
// 1 : 5 6 5 4 3 ;                                                                                                                                                           
// 2 : 4 5 4 32 1 ;                                                                                                                                                          
// 3 : 5 4 3 2 5 ;                                                                                                                                                           
// quantity_odd is 10                                                                                                                                                        
// 0 : 10 4 34 5 10 ;                                                                                                                                                        
// 1 : 5 6 5 4 3 ;                                                                                                                                                           
// 2 : 4 5 4 32 1 ;
// 2 : 4 5 4 32 1 ;                                                                                                                                                          
// 3 : 10 4 3 2 10 ;
