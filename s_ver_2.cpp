/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int s_ver_2(int n){
    if (n == 0){
        return 0;
    }
    int sum = 0;
    int f = 0;
    int s = 1;
    sum = f + s;
    n = n -1;
    for (int i = 0; i < n; i++){
        s = sum - s;
        sum = sum + s;
    }
    return sum;
}


int main()
{
    cout << "n" << "    " << "S(n)" << endl;
    for (int i = 0; i < 15; i++){
        cout << i << "    " << s_ver_2(i) << endl;
    }

    return 0;
}
