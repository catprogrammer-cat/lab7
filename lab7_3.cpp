//Calculate the average of the smallest 
//and the biggest matrix elements
//Integer
//4×5
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fill_randomly_array2d(int array2d[][5]){
    srand ( time(0) );
    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            array2d[i][j] = rand() % 100 + 1; 
        }
    }
}

void print_array2d(int array2d[][5]) {
    for(int i = 0; i<4; i++){
        cout << i << " : "; 
        for(int j = 0; j<5; j++){
            cout << array2d[i][j] << " ";
        }
        cout << ";" << endl;
    }
}

int return_max_array2d(int array2d[][5]) {
    int max = array2d[0][0];
    for( int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(max < array2d[i][j])
            {
                max = array2d[i][j];
    
            }
    
        }
    
    }
    return max;
}

int return_min_array2d(int array2d[][5]) {
    int min = array2d[0][0];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(min > array2d[i][j])
            {
                min = array2d[i][j];
    
            }
    
        }
    
    }
    return min;
}

int main()
{
    // declare array2d and int max 
    int array2d[4][5];
    int max;
    max = array2d[0][0];
    // fill randomly array2d
    fill_randomly_array2d(array2d);
    // print randomly array2d
    print_array2d(array2d);
    
    cout << "Max is " << return_max_array2d(array2d);
    cout << "\nMin is " << return_min_array2d(array2d);
    cout << "\naverage is " << (return_max_array2d(array2d)+return_min_array2d(array2d))/2;
}

// 0 : 78 58 89 48 58 ;                                                                                              
// 1 : 9 78 29 89 84 ;                                                                                               
// 2 : 25 95 6 84 64 ;                                                                                               
// 3 : 47 27 3 12 5 ;                                                                                                
// Max is 95                                                                                                         
// Min is 3                                                                                                          
// average is 49

