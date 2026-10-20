class Solution {
public:
    string addBinary(string a, string b) {
        while (a.size() < b.size()) a = "0" + a;
        while (b.size() < a.size()) b = "0" + b;

        string output;
        int carry = 0;

        for (int i = a.size() - 1; i >= 0; i--) {
            string result;
            int next_carry = 0;
            if (a[i] == '1') {
                if (b[i] == '1') {
                    result = "0";
                    next_carry = 1;
                } else {
                    result = "1";
                }
            } else {
                if (b[i] == '1') {
                    result = "1";
                } else {
                    result = "0";
                }
            }
            if (carry > 0) {
                if (result == "1") {
                    result = "0";
                    next_carry = 1;
                } else {
                    result = "1";
                }
            }

            carry = next_carry;
            result.append(output);
            output = result;
        }

        if (carry > 0) {
            string temp = "1";
            temp.append(output);
            output = temp;
        }
        return output;
    }
};