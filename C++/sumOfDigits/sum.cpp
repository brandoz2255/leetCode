#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
	public:
		int getLucky(string s, int k) {
			string converted = "";


			// converts string into positions 

			for (char c : s) {
				char lower_c = tolower(c);

				if(lower_c >='a' && lower_c <= 'z') {
					// calculates position 1- 26 
					int position = lower_c - 'a' + 1;
					converted += to_string(position);
				}
			}

			int result = 0;

			for (char c : converted) {
				result += (c-'0');

			}

			// performs k transformation 

			for (int i = 0; i < k -1; i++) {
				int temp = 0;
				while (result > 0){
					temp += result % 10;
					result /= 10;

				}
				result = temp; 
				
			}

 


			return result;

		}
};

int main(){
	Solution sol;
	string s ="leetcode";
	int k = 2; 

	int result = sol.getLucky(s, k);
	cout << "Result: " << result << endl;

	return 0;
	
}
