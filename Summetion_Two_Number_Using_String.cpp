#include <bits/stdc++.h>
using namespace std;
string sumofnumbr(string &str, string str1)
{
    int n1 = str.size();
    int n2 = str1.size();
    int mx = max(n1, n2);
    int carry = 0;
    string result;
    for (int i = 0; i < mx; ++i)
    {
        int dt1, dt2;
        if (i < n1)
        {
            dt1 = str[i] - '0';
        }
        if (i < n2)
        {
            dt2 = str1[i] - '0';
        }
        else
        {
            dt1 = 0;
            dt2 = 0;
        }
        int sum = dt1 + dt2 + carry;
        carry = sum / 10;
        result.push_back(sum % 10 + '0');
    }
    if (carry)
    {
        result.push_back(carry + '0');
    }
    reverse(result.begin(), result.end());
    return result;
}
string sumofTwostring(string &st1, string &st2)
{

    string rev_st1 = string(st1.rbegin(), st1.rend());
    string rev_st2 = string(st2.rbegin(), st2.rend());
    string result;

    result = sumofnumbr(rev_st1, rev_st2);

    return result;
}
int main()
{
    while (true)
    {

        cout << "Enter Two Numbers : ";
        string s1, s2;
        cin >> s1 >> s2;
        string sum;
        sum = sumofTwostring(s1, s2);
        cout << sum << endl;
    }

    return 0;
}