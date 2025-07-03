//Operator Overloading:
// '+' is an operator that performs differently based on operands.
#include <iostream>

using namespace std;
class Fraction{
public:
    int numerator;
    int denumerator;
    Fraction(int num,int denum){
        numerator=num;
        denumerator=denum;
    }
    void display(){
        cout<<numerator<<"/"<<denumerator<<endl;
    }//The return type for addition of fractions would be fraction.
//     Fraction add(Fraction f){
// int NewNum=numerator*f.denumerator +f.numerator*denumerator;
// int NewDenum=f.denumerator*denumerator;
// Fraction ans(NewNum,NewDenum);
// return ans;
//     }
void simplify() {
        int gcd = findGCD(numerator, denumerator);
        numerator /= gcd;
        denumerator /= gcd;
    }
    Fraction operator+(Fraction f){
int NewNum=numerator*f.denumerator +f.numerator*denumerator;
int NewDenum=f.denumerator*denumerator;
Fraction ans(NewNum,NewDenum);
ans.simplify();
return ans;
    }
       Fraction operator-(Fraction f){
int NewNum=numerator*f.denumerator -f.numerator*denumerator;
int NewDenum=f.denumerator*denumerator;
Fraction ans(NewNum,NewDenum);
ans.simplify();
return ans;
    }
       Fraction operator*(Fraction f){
int NewNum=numerator*f.numerator;
int NewDenum=f.denumerator*denumerator;
Fraction ans(NewNum,NewDenum);
ans.simplify();
return ans;
    }
Fraction operator/(Fraction f) {
        int NewNum = numerator * f.denumerator;
        int NewDenum = denumerator * f.numerator;
        Fraction ans(NewNum, NewDenum);
        ans.simplify();
        return ans;
    }
    private:
    int findGCD(int a, int b) {
        if (b == 0)
            return a;
        else
            return findGCD(b, a % b);
    }
};
int main()
{
Fraction f1(1,2);
Fraction f2(1,3);
f1.display();
f2.display();
// Fraction f3=f1.add(f2);
Fraction f3=f1+f2; //Both will give same answer.
f3.display();
Fraction f4=f1-f2; 
f4.display();
  return 0;
  return 0;
}