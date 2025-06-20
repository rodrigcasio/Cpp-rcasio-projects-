#include <iostream>
#include <vector>


void duplicateZeros(std::vector<int>& arr){
    int numOfZeros = 0;
    int n = arr.size();

    for(const int& num : arr){
        if(num == 0) numOfZeros++;
    }

    int newLength = numOfZeros + n;
    for(int i = n - 1, j = newLength - 1; i >= 0 && j >= 0; i--, j--){
        if(arr[i] == 0){
            // placing two zeros if within bounds
            if(j < n) arr[j] = 0;
            j--;
            if(j < n) arr[j] = 0;
        }else{
            // placing an element that isn't zero
            if(j < n) arr[j] = arr[i];
        }
    }
    
}


int main(){

    std::vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    duplicateZeros(arr);
    for(const int& num : arr){
         std::cout << "- " << num << std::endl;
    }

    
    return 0;
}


// Modify the arrray in-place (meaning no extra array)
// Fixed array length (no rezising)
// When 0 is found, duplicate it by inserting another 0 and shifting elements right 
// Ignore elements that exceed the arrays length after shifting.



// Two pass solution:

// 1. Count how many zeros are in the array.
//    Set up a new length

// 2. Fill the array from right to left, duplicating zeros
//    and shifting elements correclty.


/*      Tries with first aproaches:
===============================================
    
    1st try:

    for(const int& num : arr){
        if(num == 0){
            int len = arr.size() - 1;
            for(int i = len; i >= count; i--){
                arr[i + 1] = arr[i];
            }
            arr[count] = 0;
        }
    count++;
    }

=============================

    2nd try:

    works for 1 zero, but not for more zeros, needs to be fixed;


int main(){
 

    std::vector<int> arr = {1, 0, 2, 3};
    int value = 0;
    int len = arr.size() - 1;   
    std::vector<int> arr2;
    std::vector<int> arr3;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            value = arr[i];
            for(const int& num : arr){
                arr2.push_back(num);
            }

            for(int j = len; j >= i; j--){
                arr2[j + 1] = arr2[j];
            }
        }
    }
 

=============================

    3rd try:

    std::vector<int> arr = {1, 0, 2, 3, 0, 7, 3};
    int value = 0;
    int len = arr.size() - 1;   
    std::vector<int> arr2 = arr;
    std::vector<int> arr3 = arr2;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            value = arr[i];
  //          for(int j = 0; j < len; j++){
    //            arr2[j] = arr[j];
      //      }

            for(int j = len; j >= i; j--){
                arr2[j + 1] = arr2[j];
                
            }
        }
    }

=============================

    4rd try! it works! but in leetCode it is showing me a runtime error..

                        // [1, 0, 0, 2, 3, 0, 0, 4]        // expected output.
    std::vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    int length = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            int numElement = (arr.size() - 1);
            for(int j = numElement; j >= length; j--){
                arr[j + 1] = arr[j];
            }
        // assign the empty space value 0
        arr[i] = 0;
        // make sure we jump the initial 0 found and moved in the iteration.
        i++;
        }
    length++;
    }


    for(const int& num : arr){
         std::cout << "- " << num << std::endl;
    }

*/
