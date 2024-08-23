class Solution {
public:
    string fractionAddition(string expr) {
        
        int nume = 0;
        int deno = 1;

        int i=0;
        int n = expr.length();
        while(i<n){
            int curnume = 0;
            int curdeno = 0;

            bool isNeg = (expr[i]=='-');

            if(expr[i]=='+' ||expr[i]=='-'){
                i++;
            }

            while(i<n && isdigit(expr[i])){
                int val = expr[i]-'0';
                curnume = (curnume*10)+val;
                i++;
            }
            i++;  // to skip divisor sign
            if(isNeg==true){
                curnume *= -1;
            }

            while(i<n && isdigit(expr[i])){
                int val = expr[i]-'0';
                curdeno = (curdeno*10)+val;
                i++;
            }

            nume = nume*curdeno + curnume*deno;
            deno = deno*curdeno;
        } 
        int GCD = abs(__gcd(nume,deno));
        nume/=GCD;
        deno/=GCD;
        return to_string(nume) + "/" + to_string(deno);

    }
};