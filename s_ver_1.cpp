/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int s_ver_1(int n){
    if (n == 1) {
        return 1;
    } else if (n == 0){
        return 0;
    }
    return (s_ver_1(n-1) + s_ver_1(n-2));
}


int main()
{
    cout << "n" << "    " << "S(n)" << endl;
    for (int i = 0; i < 15; i++){
        cout << i << "    " << s_ver_1(i) << endl;
    }

    return 0;
}
