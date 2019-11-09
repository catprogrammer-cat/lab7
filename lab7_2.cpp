// Input real matrix with 6 rows and 4 columns. Create vector of matrix column
// with the smallest sum of elements
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fill_randomly_array2d(int array[][4]){
    srand ( time(0) );
    for (int i=0; i<6; i++){
        for (int j=0; j<4; j++){
            array[i][j] = rand() % 10 + 1; 
        }
    }
}

void print_array2d(int array[][4]){
    for(int i = 0; i<6; i++){
        cout << i << " : "; 
        for(int j = 0; j<4; j++){
            cout << array[i][j] << " ";
        }
        cout << ";" << endl;
    }
}

int* calculate_column_put_in_array1d(int array2d[][4], int array1d[]){
    int sum;
    for (int j=0; j<4; j++){ // i=0; i<6; i++
         sum = 0;
         for (int i=0; i<6; i++){ // j=0; j<4; j++
             sum = sum + array2d[i][j]; 
         }
         array1d[j] = sum;
     }
     return array1d;
}


int main()
{
    int array2d[6][4];
    int array1d[4];
    int vector[6];
    //
    // fill array2d randomly
    fill_randomly_array2d(array2d);
    // print array2d
    print_array2d(array2d);
    // calculatecolumn and put in array1d
    calculate_column_put_in_array1d(array2d,array1d);
    // declare array1d_after 
    int* array1d_after = calculate_column_put_in_array1d(array2d,array1d); 
    // print array1d_after (array1d)
    for(int i = 0; i<4; i++){
        cout << "[" << array1d_after[i] << "]";
    }
    // find min of column
    int min = array1d_after[0];
    // find min element of array1d_after (array1d)
    for (int i=0; i<4; i++){
        if(array1d_after[i] < min){
            min = array1d_after[i];
        }
    }
    //find index of smallest column
	int index = 0;
	while (index < 4)
	{
		if (array1d_after[index] == min) {
			break;
		}
		index++;
	}
	// print some varibles
    cout << "\nmin is " << min << endl;
    cout << "index is " << index << endl;
    // print column of min element array1d_after (array1d)
    for(int i = 0; i<6; i++){
        vector[i] = array2d[i][index];
    }
    // print vector 
    for(int i = 0; i<6; i++){
        cout << "<" << vector[i] << ">";
    }
    return 0;
}


// 0 : 4 2 8 9 ;                                                                         
// 1 : 4 9 1 6 ;                                                                         
// 2 : 8 8 6 8 ;                                                                         
// 3 : 9 1 7 4 ;                                                                         
// 4 : 1 7 10 7 ;                                                                        
// 5 : 7 10 8 2 ;                                                                        
// [33][37][40][36]                                                                      
// min is 33                                                                             
// index is 0                                                                            
// <4><4><8><9><1><7>
