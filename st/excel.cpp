// C++ program to return title to result
// of excel sheet.
#include <bits/stdc++.h>

using namespace std;

// Returns resul when we pass title.
int titleToNumber(string s)
{
	// This process is similar to
	// binary-to-decimal conversion
	int result = 0;
	for (const auto& c : s)
	{
		result *= 26;
		result += c - 'A' + 1;
	}

	return result;
}

// Driver function
int main()
{
	cout << titleToNumber("ZZ") << endl;
	return 0;
}

  
 