//Create vector of sums of positive
//elements of matrix rows
//4×3
//Double
#include <iostream>


using namespace std;

    void fill_randomly_array2d(double array2d[][3]){
        srand ( time(0) );
        for (int i=0; i<4; i++){
            for (int j=0; j<3; j++){
                array2d[i][j] = rand() % 100 + 1; 
            }
        }
    }

    void print_array2d(double array2d[][3]) {
        for(int i = 0; i<4; i++){
            cout << i << " : "; 
            for(int j = 0; j<3; j++){
                cout << array2d[i][j] << " ";
            }
            cout << ";" << endl;
        }
    }
    
    double* return_vector(double array2d[][3],double vector[]){
        double sum;
        for (int i=0; i<4; i++){ // i=0; i<6; i++
            sum = 0;
            for (int j=0; j<3; j++){ // j=0; j<4; j++
                if(array2d[i][j] > 0){
                    sum += array2d[i][j]; 
                }
            }
            vector[i] = sum;
            sum = 0;
        }

        return vector;
        
    }

int main()
{
    //4×3//4×3//4×3//4×3//4×3
    // declare
    int i,j;
    double array_2d[4][3];
    double vector[4];
    //double sum;
    
    // fill randomly array2d
    fill_randomly_array2d(array_2d);
    // print array2d
    print_array2d(array_2d);
    // returned vector, now - vector_after    
    double* vector_after = return_vector(array_2d,vector);
    // print vector_after(vector)
    for(int i=0; i<4; i++){
        cout << "[" << vector_after[i] << "]";
    }
    
    return 0;
}
// 0 : 44 43 30 ;                                                                                                                       
// 1 : 47 82 16 ;                                                                                                                       
// 2 : 27 79 22 ;                                                                                                                       
// 3 : 11 53 11 ;                                                                                                                       
// [117][145][128][75]
