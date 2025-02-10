#include<iostream>
#include<string>
using namespace std;

int main()
{
    string m;
    while(1)
    {
        cout << "Paper-rock-scissor :";
        getline(cin,m);
        if(m == ("P r")||m==("p r")||m==("P R")||m==("p R")||m==("R S")||m==("r s")||m==("R s")||m==("r S")||m==("S P")||m==("s p")||m==("S p")||m==("s P"))
        {
            cout << "User 1 wins !" << endl;
        }else if(m == ("R P")||m == ("r p")||m==("R p")||m==("r P")||m==("S R")||m==("s r")||m==("S r")||m==("s R")||m==("P S")||m==("p s")||m==("P s")||m==("p S"))
        {
            cout << "User 2 wins !" << endl;
        }else if(m == ("R r")||m==("R R")||m==("r r")||m==("r R")||m==("P P")||m==("p p")||m==("P p")||m==("p P")||m==("S S")||m==("s s")||m==("S s")||m==("s S"))
        {
            cout << "Tie !" << endl;
        }else if(m == "done")
        {
            break;
        }
    }
    return 0;
}
