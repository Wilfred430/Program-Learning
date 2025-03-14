#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class BasicTicket
{
  public:
    int N; 
    vector<string> Name;
    vector<string> DepCity;
    vector<string> ArrCity;
    vector<int> FlNum;
    vector<double> TicPrice;
    vector<int> Seat;
    BasicTicket();
    vector<double> getPrice();
};

BasicTicket::BasicTicket(){}

vector<double> BasicTicket::getPrice()
{
   return TicPrice; 
}

class PremiumTicket: public BasicTicket
{
  private:
    vector<int> SeatNum;
  public:
    PremiumTicket();
    void getPrice();
    int Sum();
};

PremiumTicket::PremiumTicket()
{
  string n;
  int k;
  double t;
  cout << "number of passenger" << endl;
  cin >> k;
  this-> N = k;
  for(int i=0;i<N;i++)
  {
    cout << "information" << endl;
    cin >> n;
    Name.push_back(n);
    cin >> n;
    DepCity.push_back(n);
    cin >> n;
    ArrCity.push_back(n);
    cin >> k;
    FlNum.push_back(k);
    cin >> t;
    TicPrice.push_back(t);
    cin >> k;
    SeatNum.push_back(k);
  }
}

void PremiumTicket::getPrice()
{  
  for(int i=0;i<this->N;i++)
  {
    if(this->SeatNum[i] == 0)
    {
      cout << TicPrice[i] << endl;
    }else
    {
      this->TicPrice[i] = TicPrice[i]*(1.1);
      cout << static_cast<int>(TicPrice[i]) << endl;
    }
  }
}

int PremiumTicket::Sum()
{
  int sum=0;
  for(int i=0;i<this->N;i++)
  {
    sum+=TicPrice[i];
  }
  
  return sum;
}

int main()
{
  BasicTicket b;
  PremiumTicket a;
  cout << "Price of both tickets :" << endl;
  a.getPrice();
  cout << "Total cost of all tickets: " << a.Sum() << endl;
  
  return 0;
}


