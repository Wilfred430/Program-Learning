#include<iostream>
#include<vector>
#include"organism.h"
using namespace std;

Organism::Organism(int _x, int _y):x(_x),y(_y){}

int Organism::getX()
{
  return this->x;
}

int Organism::getY()
{
  return this->y;
}


//Ant

Ant::Ant(int _x, int _y): Organism(_x,_y) { this->isAlive = true;}

bool Ant::GetLive()
{
  return this->isAlive;
}

void Ant::setCoordinate(int _x, int _y)
{
  this->x = _x;
  this->y = _y;
}

void Ant::SetLive(bool a)
{
  if(a)
  {
    this->isAlive = false;
  }
}

bool Ant::FindPosition(int _x,int _y)
{
  if((this->x == _x) && (this->y == _y))
  {
    return true;
  }
  return false;
}

void Ant::move(char** map)
{
  if((this->y < 4) && (map[this->x][this->y+1] != 'x') && (map[this->x][this->y+1] != 'o') )
  {
      map[this->x][this->y +1] = 'o';
      map[this->x][this->y] = '-';
      this->y++;
  }else if((this->x < 4) && (map[this->x+1][this->y] != 'x') && (map[this->x+1][this->y] != 'o'))
  {
      map[this->x +1][this->y] = 'o';
      map[this->x][this->y] = '-';
      this->x++;
  }else if((this->y > 0) && (map[this->x][this->y-1] != 'x') && (map[this->x][this->y-1] != 'o'))
  {
      map[this->x][this->y -1] = 'o';
      map[this->x][this->y] = '-';
      this->y--;
  }else if((this->x > 0) && (map[this->x-1][this->y] != 'x') && (map[this->x-1][this->y] != 'o'))
  {
      map[this->x -1][this->y] = 'o';
      map[this->x][this->y] = '-';
      this->x--;
  }
}

//Doodlebug

Doodlebug::Doodlebug(int _x, int _y): Organism(_x,_y)  {}

void Doodlebug::move(vector<Ant> ant,char** map)
{
  if(this->y+1 < 5 && map[this->x][this->y +1] == 'o')
  {
    for(int i=0;i<3;i++)
    {
      if(ant[i].FindPosition(this->x,this->y+1))
      {
        ant[i].SetLive(ant[i].FindPosition(this->x,this->y+1));
        map[this->x][this->y +1] = 'x';
        map[this->x][this->y] = '-';
        this->y++;
        break;
      }
    }
  }else if(this->x+1 < 5 && map[this->x+1][this->y] == 'o')
  {
    for(int i=0;i<3;i++)
    {
      if(ant[i].FindPosition(this->x +1,this->y))
      {
        ant[i].SetLive(ant[i].FindPosition(this->x +1,this->y));
        map[this->x +1][this->y] = 'x';
        map[this->x][this->y] = '-';
        this->x++;
        break;
      }
    }
  }else if(this->y-1 >= 0 && map[this->x][this->y -1] == 'o')
  {
    for(int i=0;i<3;i++)
    {
      if(ant[i].FindPosition(this->x,this->y-1))
      {
        ant[i].SetLive(ant[i].FindPosition(this->x,this->y-1));
        map[this->x][this->y-1] = 'x';
        map[this->x][this->y] = '-';
        this->y--;
        break;
      }
    }
  }else if(this->x-1 >= 0 && map[this->x-1][this->y] == 'o')
  {
    for(int i=0;i<3;i++)
    {
      if(ant[i].FindPosition(this->x -1,this->y))
      {
        ant[i].SetLive(ant[i].FindPosition(this->x -1,this->y));
        map[this->x -1][this->y] = 'x';
        map[this->x][this->y] = '-';
        this->x--;
        break;
      }
    }
  }else if(this->y < 4)
  {
      map[this->x][this->y +1] = 'x';
      map[this->x][this->y] = '-';
      this->y++;
  }else if(this->x < 4)
  {
      map[this->x +1][this->y] = 'x';
      map[this->x][this->y] = '-';
      this->x++;
  }else if(this->y > 0)
  {
      map[this->x][this->y -1] = 'x';
      map[this->x][this->y] = '-';
      this->y--;
  }else if(this->x > 0)
  {
      map[this->x -1][this->y] = 'x';
      map[this->x][this->y] = '-';
      this->x--;
  }
}