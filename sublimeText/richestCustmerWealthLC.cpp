#include <iostream>
#include <math.h>

class solution {
public: 
	int maximumWealth(vector<vector<int>>& accounts){
		int maxWealth;
		for(int i = 0; i < accounts.size(); i++){
			int sums = 0;// resets to 0, after 2nd for loop finishes and
                         // calculates max(x,y);
			for(int j = 0; j < accounts[i].size(); j++){
				sums += accounts[i][j];
			}

			maxWealth = max(maxWealth, sums);
		}
		return maxWealth; 
	}
};

/*
	time complexity: O(m x n);
	-	m: traverse over n customers
	-	n: traverse over n banks 

	space complexity: O(1);
	
	Syntax

	accounts = [[1,2,3],[3,2,1]];
    accounts.size() = [[],[],[]] = 3 accounts
    accounts[i].size() = [[n, n, n], [], []]: 3 items in account 1.

    accounts[i][j]; 
    
    max(x,y): compares 2 values and returns the max value;
    
    (int sum = 0;) after the 2nd loop is done checking each item, and the function max(x,y) 
                    it resets to 0 to sum the next items.

    (int maxWealth;) this value of maxWealthchanges if the max() function finds that 
                    sum is > maxWealth, and then the value of sum is assigned to maxWealth.

*/