class Solution {
public:
    int myAtoi(string s) {
        int pos = 0;
        bool negative = false;
        unsigned long long int current = 0;
        while(s[pos]==' ')
            pos++;
        if(s[pos] == '-'){
            negative = true;
            pos++;
        }
        else if(s[pos] == '+'){
            negative = false;
            pos++;
        }
        while(isdigit(s[pos]) && current < INT_MAX){
            current *= 10;
            current += (s[pos]-'0');
            pos++;
        }
        if(current > INT_MAX){
            return negative?INT_MIN:INT_MAX;
        }
        return negative ? -current:current;
    }
};