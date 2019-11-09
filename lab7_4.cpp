//Calculate the sum of positive odd elements and change the
//elements in the corners of matrix with this sum
//3×5
//Integer
#include <iostream>
#include <cstdlib>
#include <ctime>

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
    
    //3×5
    void fill_randomly_array2d(int array2d[][5]){
        srand ( time(0) );
        for (int i=0; i<3; i++){
            for (int j=0; j<5; j++){
                array2d[i][j] = rand() % 100 + 1; 
            }
        }
    }

    void print_array2d(int array2d[][5]) {
        for(int i = 0; i<3; i++){
            cout << i << " : "; 
            for(int j = 0; j<5; j++){
                cout << array2d[i][j] << " ";
            }
            cout << ";" << endl;
        }
    }
    
    int sum_odd_element_array2d(int array2d[][5]){
        int sum = 0;
        for( int i=0; i<3; i++)
        {
            for(int j=0; j<5; j++)
            {
                if(array2d[i][j] % 2 != 0 && array2d[i][j] > 0)
                {
                    sum += array2d[i][j];
                }
            }
        }
        return sum;
    }
        
    
    
int main()
{
    //3×5
    int array2d[3][5];
    fill_randomly_array2d(array2d);
    print_array2d(array2d);

    cout << "Sum of odd element is " << sum_odd_element_array2d(array2d) << endl;
    
    array2d[0][0] = sum_odd_element_array2d(array2d);
    array2d[0][4] = sum_odd_element_array2d(array2d);
    array2d[2][0] = sum_odd_element_array2d(array2d);
    array2d[2][4] = sum_odd_element_array2d(array2d);
    
    print_array2d(array2d);
    
    return 0;
}
// 0 : 84 61 96 45 8 ;                                                                                               
// 1 : 20 48 17 92 77 ;                                                                                              
// 2 : 96 43 55 2 2 ;                                                                                                
// Sum of odd element is 298                                                                                         
// 0 : 298 61 96 45 298 ;                                                                                            
// 1 : 20 48 17 92 77 ;                                                                                              
// 2 : 298 43 55 2 298 ; 
