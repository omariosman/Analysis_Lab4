/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void matrix_multiplication(int **product, int **matrix1, int **matrix2, int n){

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        product[i][j] = 0;
        for (int k = 0; k < 2; k++) {
            product[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
}
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix1[i][j] = product[i][j];
        }
    }
    

if (n == 0){
    product[0][1] = 0;
}
n = n - 1;
if (n > 1){
        
    

    matrix_multiplication(product, matrix1, matrix2, n);

    }
}

void house_keeping(int **matrix1, int **matrix2){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix1[i][j] = 1;
        }
    }
    matrix1[1][1] = 0;
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix2[i][j] = 1;
        }
    }
    matrix2[1][1] = 0;
}

int main()
{
    
    int **product = new int*[2];
    for (int i = 0; i < 2; i++){
        product[i] = new int[2];
    }
    
    int **matrix1 = new int*[2];
    for (int i = 0; i < 2; i++){
        matrix1[i] = new int[2];
    }

    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix1[i][j] = 1;
        }
    }
    matrix1[1][1] = 0;
    
    
    int **matrix2 = new int*[2];
    for (int i = 0; i < 2; i++){
        matrix2[i] = new int[2];
    }

    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix2[i][j] = 1;
        }
    }
    matrix2[1][1] = 0;
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            product[i][j] = 0;
        }
        
    }
    
    cout << "n" << "    " << "S(n)" << endl;
    for (int i = 0; i < 15; i++){
        matrix_multiplication(product, matrix1, matrix2, i);
        cout << i << "    " << product[0][1];
        cout << endl;
        house_keeping(matrix1, matrix2);
    }


}