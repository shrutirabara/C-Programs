#include <iostream>
using namespace std;
int main(){
    int my_ints[4];
    
    int num;
    
    for(int i = 0; i <= 3; i++){
        cout << "Enter an integer:";
        cin >> num;
        my_ints[i] = num;
    }

    for(int i = 0; i <= 3; i++){
        cout << my_ints[i] << " ";
    }
    
    int *my_ptrs[4];
    
    for(int i = 0; i <= 3; i++){
        my_ptrs[i] = &my_ints[i];
    }
    
    
    for(int i = 0; i <= 3; i++){
        cout << my_ptrs[i] << " ";
    }
    
    cout << "sorted: " << endl;
    for(int i = 0; i <= 3; i++){
        for(int k = i + 1; k <= 3; k++){
            if(*my_ptrs[i] > *my_ptrs[k]){
                int t = *my_ptrs[i];
                *my_ptrs[i] = *my_ptrs[k];
                *my_ptrs[k] = t;
            }
        }
    }
    
    
    
    for(int i = 0; i <= 3; i++){
        cout << *my_ptrs[i] << " ";
    }
    
}