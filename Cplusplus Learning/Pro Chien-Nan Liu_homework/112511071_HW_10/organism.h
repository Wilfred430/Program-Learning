#include<iostream>
using namespace std;

class Organism
{
  protected:
    int x;
    int y;
  public:
    Organism():x(0),y(0){}
    Organism(int _x,int _y); 
    virtual void move() {}
    int getX();
    int getY();
};


class Ant: public Organism
{
  private:
    bool isAlive;
  public:
    Ant(int _x, int _y);
    void setCoordinate(int _x,int _y);
    bool FindPosition(int _x,int _y);
    void SetLive(bool a);
    bool GetLive();
    void move(char** map);
};

class Doodlebug: public Organism
{
  public:
    Doodlebug(int _x, int _y); 
    void move(vector<Ant> ant,char** map);
};