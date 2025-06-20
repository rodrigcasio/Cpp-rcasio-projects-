class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i = 1; i <= n; i++){
            bool divisibleBy3 = i % 3 == 0;
            bool divisibleBy5 = i % 5 == 0;

            if(divisibleBy3 && divisibleBy5){
                result.push_back("FizzBuzz");
            }
            else if(divisibleBy3){
                result.push_back("Fizz");
            }
            else if(divisibleBy5){
                result.push_back("Buzz");
            }
            else{
                result.push_back(to_string(i));
            }
        }
        return result; 
    }
};