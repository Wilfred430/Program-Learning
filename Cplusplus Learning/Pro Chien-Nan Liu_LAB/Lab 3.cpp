#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int Size = 5;

int main(int argc, char* argv[])
{
	int HP=100;
	int EXP=0;
	int i,j;
	int H,E,ID=0;
	int ** a = new int*[Size];
  ifstream in;
  in.open(argv[1],ios::in);
	for(i=0;i<Size;i++)
	{
		a[i] = new int[Size];
	}
	int ** h = new int*[Size];
	for(i=0;i<Size;i++)
	{
		h[i] = new int[Size];
	}
	int ** p = new int*[Size];
	for(i=0;i<Size;i++)
	{
		p[i] = new int[Size];
	}
	for(i=0;i<Size;i++)
	{
		for(j=0;j<Size;j++)
		{
			in >> a[i][j];
		}
	}
	int k;
	for(k=0;k<25;k++)
	{
		in >> H >> E;
		bool FIND = false;
		for(i=0;i<Size;i++)
		{
			for(j=0;j<Size;j++)
			{
				if(a[i][j] == ID)
				{
					h[i][j] = H;
					p[i][j] = E;
					ID++;
					FIND = true;
					break;
				}
			}
			if(FIND)
			{
				break;
			}
		}
	}
//	for(i=0;i<Size;i++)
//	{
//		for(j=0;j<Size;j++)
//		{
//			cout << a[i][j] << " " << h[i][j] << " " << p[i][j] << endl;
//		}
//	}		
	char C;
	int STEP = 1;
	int Lev = 1;
	int x=0,y=0;
	while(in >> C)
	{
		if(C=='U')
		{
			y--;
			HP = HP - h[y][x];
			EXP = EXP + p[y][x];
			if(HP <= 0)
			{
				cout << "DEAD"<<endl;
				break;
			}else if(EXP >= 100)
			{
				HP = 100;
				EXP = 0;
				Lev++;
			}
			cout << "step " << STEP << ":" << endl;
			cout << "level:" << Lev << " hp:" << HP << " exp:" << EXP << endl;
			STEP++;
		}else if(C == 'D')
		{
			y++;
			HP = HP - h[y][x];
			EXP = EXP + p[y][x];
			if(HP <= 0)
			{
				cout << "DEAD"<<endl;
				break;
			}else if(EXP >= 100)
			{
				HP = 100;
				EXP = 0;
				Lev++;
			}
			cout << "step " << STEP << ":" << endl;
			cout << "level:" << Lev << " hp:" << HP << " exp:" << EXP << endl;
			STEP++;
		}else if(C == 'L')
		{
			x--;
			HP = HP - h[y][x];
			EXP = EXP + p[y][x];
			if(HP <= 0)
			{
				cout << "DEAD"<<endl;
				break;
			}else if(EXP >= 100)
			{
				HP = 100;
				EXP = 0;
				Lev++;
			}
			cout << "step " << STEP << ":" << endl;
			cout << "level:" << Lev << " hp:" << HP << " exp:" << EXP << endl;
			STEP++;
		}else if(C == 'R')
		{
			x++;
			HP = HP - h[y][x];
			EXP = EXP + p[y][x];
			if(HP <= 0)
			{
				cout << "DEAD"<<endl;
				break;
			}else if(EXP >= 100)
			{
				HP = 100;
				EXP = 0;
				Lev++;
			}
			cout << "step " << STEP << ":" << endl;
			cout << "level:" << Lev << " hp:" << HP << " exp:" << EXP << endl;
			STEP++;
		}
	}
	
	for(i=0;i<Size;i++)
	{
		delete [] a[i];
	}
	delete [] a;
	for(i=0;i<Size;i++)
	{
		delete [] h[i];
	}
	delete [] h;
	for(i=0;i<Size;i++)
	{
		delete [] p[i];
	}
	delete [] p;
	
	return 0;
}