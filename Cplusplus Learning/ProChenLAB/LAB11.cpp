#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

void displayProducts(const int* productIDs, const int* quantities);

void displayHighestQuantity(const int* productIDs, const int* quantities);

void updateQuantity(const int* productIDs, int* quantities,int ID, int newQuantity);

void sortByQuantity(int* productIDs, int* quantities);

void sortByID(int* productIDs, int* quantities);

int main()
{
	ifstream inStream;
	string s;
	int productIDs[5],quantities[5],ID,newQuantity;
	int i;
	
	inStream.open("Lab11_tue_demo.txt");
	
	if(inStream.fail())
	{
		cout << "No! the file doesn't read.";
		exit(1);
	}
	for(i=0;i<5;i++)
	{
		inStream >> productIDs[i];
	}
	for(i=0;i<5;i++)
	{
		inStream >> quantities[i];
	}
	while(!inStream.eof())
	{
		inStream >> s;
		if(s == "display")
		{
			displayProducts(productIDs,quantities);
		}else if(s == "displayhq")
		{
			displayHighestQuantity(productIDs,quantities);
		}else if(s == "update")
		{
			inStream >> ID >> newQuantity;
			updateQuantity(productIDs,quantities,ID,newQuantity);
		}else if(s == "sq")
		{
			sortByQuantity(productIDs,quantities);
		}else if(s == "sid")
		{
			sortByID(productIDs,quantities);
		}else
		{
			cout << "Has a error message" << endl;
			cout << "-------------------------------------------------" << endl;
		}
	}
	
	inStream.close();
	return 0;
}

void displayProducts(const int* productIDs, const int* quantities)
{
	int i;
	cout << "Current command: display" << endl;
	cout << "ProductIDs:";
	for(i=0;i<5;i++)
	{
		cout << setw(6) << productIDs[i];
	}
	cout << endl;
	cout << "Quantities:";
	for(i=0;i<5;i++)
	{
		cout << setw(6) << quantities[i];
	}
	cout << endl;
	cout << "-------------------------------------------------" << endl;
	return;
}

void displayHighestQuantity(const int* productIDs,const int* quantities)
{
	int i,tmp,ID;
	tmp = quantities[0];
	for(i=1;i<5;i++)
	{
		if(quantities[i] > tmp)
		{
			tmp = quantities[i];
			ID = productIDs[i];
		}
	}
	cout << "Current command: displayhq" << endl;
	cout << "Max productID:" << setw(6) << ID << endl;
	cout << "Max Quantity:" << setw(7) << tmp << endl;
	cout << "-------------------------------------------------" << endl;
	return;
}

void updateQuantity(const int* productIDs, int* quantities,int ID, int newQuantity)
{
	int i,tmp;
	bool Exit=false;
	cout << "Current command: update" << endl;
	for(i=0;i<5;i++)
	{
		if(productIDs[i] == ID)
		{
			Exit = true;
			tmp = i;
		}
	}
	if(Exit == false)
	{
		cout << "Error: product ID " << ID << " not found!" << endl;
		cout << "-------------------------------------------------" << endl;
	}else if(Exit == true)
	{
		cout << "productID " << ID << ":" << setw(6) << quantities[tmp] << " -> " << newQuantity << endl;
		quantities[tmp] = newQuantity;
		cout << "-------------------------------------------------" << endl;
	}
}

void sortByQuantity(int* productIDs, int* quantities)
{
	int i,j,tmp,value;
	cout << "Current command: sq" << endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(quantities[j] > quantities[j+1])
			{
				tmp = quantities[j];
				quantities[j] = quantities[j+1];
				quantities[j+1] = tmp;
				value = productIDs[j];
				productIDs[j] = productIDs[j+1];
				productIDs[j+1] = value;
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
}

void sortByID(int* productIDs, int* quantities)
{
	int i,j,tmp,value;
	cout << "Current command: sid" << endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(productIDs[j] > productIDs[j+1])
			{
				tmp = productIDs[j];
				productIDs[j] = productIDs[j+1];
				productIDs[j+1] = tmp;
				value = quantities[j];
				quantities[j] = quantities[j+1];
				quantities[j+1] = value;
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
}