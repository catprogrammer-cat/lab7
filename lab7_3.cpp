//Calculate the average of the smallest 
//and the biggest matrix elements
//Integer
//4×5
#include <iostream>

using namespace std;
void output_average_min_max(int x,int y){
    int i,j;
    int a[x][y];
    int max;
    max=a[0][0];
    cout << "Input matrix 4x5:"<<endl;
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
    
    for( int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
    
            }
    
        }
    
    }
    
    int min;
    min=a[0][0];
    
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            if(min>a[i][j])
            {
                min=a[i][j];
            }
        }
    }
    
    cout << "average of min and max is " << (min+max)/2 << endl;
}

int main()
{
     output_average_min_max(4, 5);
}
