#include <bits/stdc++.h>

using namespace std;

class Money{
    public:
        Money(int dollars, int cents){
                allCents = dollars * 100 + cents;
        };
        
        friend bool operator < (const Money& lhs, const Money& rhs);
        friend bool operator <= (const Money& lhs,const Money& rhs);
        friend bool operator > (const Money& lhs, const Money& rhs);
        friend bool operator >= (const Money& lhs, const Money& rhs);
        
        Money precent(int precentFigure) const;
        
        float getMoney(){
            return float(allCents)/100;
        };

    private:
        long allCents;
};
