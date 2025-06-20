#include <iostream>
#include <math.h>

class Solution{
public:
	int maximumWealth(vector<vector<int>>& accounts){
		//creating a new vector to store each customer's total wealth
		vector<int> wealthSums;

		//Calculate sum for each customer and store it
		for(int = 0; i < accounts.size(); i++){
			int sum = 0;
			for(int j = 0; j < accounts[i].size; j++){
				sum += accounts[i][j];
			}
		
		wealthSums.push_back(sum); //ad the sum to the new vector

		}

		// finding the maximum value in wealthSums;
		int maxWealth = wealthSums[0]; //Start with first element
		for(int i = 1; i < wealthSums.size(); i++){ // start with comparing the item wealthSums[1];
			if(wealthSums[i] > maxWealth){
				maxWealth = wealthSums[i];
			}
		}

		return maxWealth;
	}

};