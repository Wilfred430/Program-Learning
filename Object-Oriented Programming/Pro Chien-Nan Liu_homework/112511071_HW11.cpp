#include <iostream>
#include <fstream>
using namespace std;

////////////////////////////////////////////////////
////// Finish deleteRepeats template function///////
//////        Write your code below          ///////
template<typename A>
void deleteRepeats(A& str, int& length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(str[i] == str[j])
            {
                for(int z=j;z<length-1;z++)
                {
                    str[z] = str[z+1];
                }
                j--;
                length--;
            }
        }
    }
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////

int main(int argc, char **argv){
  ifstream input;
  input.open(argv[1]);
  
  if(!input){
		cerr << "Fail to open input";
		exit(1);		
	}

  char str[100];
  int arr[100];
  int num_ch, num_int;

  input >> num_ch;
  for(int i=0; i<num_ch; i++){
    input >> str[i];
  }
  input >> num_int;
  for(int i=0; i<num_int; i++){
    input >> arr[i];
  }

  //template function
  deleteRepeats(str, num_ch);
  deleteRepeats(arr, num_int); 

  //cout
  for(int i=0; i<num_ch; i++){
    cout<<str[i]<<" ";
  }
  cout<<num_ch;
  cout<<endl;
  
  for(int i=0; i<num_int; i++){
    cout<<arr[i]<<" ";
  }
  cout<<num_int;
  cout<<endl;
	
  return 0;
}



