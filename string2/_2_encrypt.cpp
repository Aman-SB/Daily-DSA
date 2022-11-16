// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to convert Decimal to Hex
string convertToHex(int num)
{

	string temp = "";
	while (num != 0) {
		int rem = num % 16;
		char c;
		if (rem < 10) {
			c = rem + 48;
		}
		else {
			c = rem + 87;
		}
		temp += c;
		num = num / 16;
	}

	return temp;
}

// Function to encrypt the string
string encryptString(string S, int N)
{

	string ans = "";

	// Iterate the characters
	// of the string
	for (int i = 0; i < N; i++) {

		char ch = S[i];
		int count = 0;
		string hex;

		// Iterate until S[i] is equal to ch
		while (i < N && S[i] == ch) {

			// Update count and i
			count++;
			i++;
		}

		// Decrement i by 1
		i--;

		// Convert count to hexadecimal
		// representation
		hex = convertToHex(count);

		// Append the character
		ans += ch;

		// Append the characters frequency
		// in hexadecimal representation
		ans += hex;
	}

	// Reverse the obtained answer
	reverse(ans.begin(), ans.end());

	// Return required answer
	return ans;
}

// Driver Code
int main()
{

	// Given Input
	string S ;
    getline(cin,S);
	int N = S.size();

	// Function Call
	cout << encryptString(S, N);

	return 0;
}
