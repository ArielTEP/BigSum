#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

//Time: O(n*m)
//Space: O(n+m)
//n: length of num1
//m: length of num2
string multiply(string num1, string num2) {

        if ((num1[0] == '0') || (num2[0] == '0') ) return "0";

        int m = num1.length();
        int n = num2.length();

        vector<int> tmp (n+m, 0);

        for (int i = m-1; i>=0; i--){
            for(int j = n-1; j>=0; j--){
                int s = (num1[i] - '0') * (num2[j] - '0') + tmp[i+j+1];
                tmp[i+j] += s / 10;
                tmp[i+j+1] =  s % 10;
            }
        }

        int i = 0;
        while ( i < n+m && tmp[i] == 0) i++;

        string result = "";
        for(; i < m+n; i++)
            result += tmp[i] + '0';
        return result;
}

//Time: O(n^2)
//Space: O(m)
//m: length of result (number of digits)
string power(string base, uintmax_t exp)
{
	string result(base);
	while( --exp > 0)
	{
		result = multiply(result, base);
	}
	return result;
}

//Time: O(n)
//Space: O(m)
//n: length of x (number of digits)
//m: lenght of ss.str() (number of digits)
string S(string x)
{

	std::uintmax_t sum = 0;
	for(char& c : x)
	{
		sum += ( c - '0' );
	}
	stringstream ss;
	ss << sum;
	return ss.str();
}

int main()
{
	string p = power("4444", 4444);
	string result = S(S(S(p)));
	cout << result << endl;	
	return 0;
}
