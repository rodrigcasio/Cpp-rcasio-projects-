class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int len = strlen(fizzBuzz)+ 1; 
        string answer[len];
        result[0] = 1;
        for(int i = 1; i < n; i++){ 
            if(result[i] % 3 == 0 && result[i] % 5 == 0){
                fizzBuzz[i] = "Fizz";
            }
            else if(result[i] % 5 == 0){
                result[i] = "Buzz";
            }
            else if(result[i] % 3 == 0){
                fizzBuzz[i] = "FizzBuzz";
            }
            else if(result[i] % 3 != 0 || result[i] % 5 != 0){
                fizzBuzz[i]= to_string(result[i]);
            }

            return fizzBuzz[i];
        }
    }
};