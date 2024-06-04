class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
         int carry = 1;
        int j = 0;
        string ans = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i]-'0' != 0) // to get the first index after leading 0
            {
                j = i;
                break;
            }
            if(i == s.size()-1) // to return 1 if complete string is 0 for example 0000
            {
                return "1";
            }
        }
 
        for(int i = s.size()-1; i>=j; i--) // iterating from right to do bit addition
        {
            int a = s[i] - '0';
            int sum = a + carry;
            //cout << sum << endl;
            if(sum >= 2) // means both bit are 1 hence setiing sum at that pos as 0 and carrying 1 forward
            {
                carry = 1;
                sum = 0;
            }
            else // no carry just add 1 at that position
            {
                carry = 0;
            }
            ans += to_string(sum); // append bit at that pos in string 
        }
        if(carry) // if carry is left after complete iteration than append that also
            ans += to_string(carry);
        reverse(ans.begin(), ans.end()); // reverse the string and return
        return ans;
    }
};
