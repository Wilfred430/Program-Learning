#include<iostream>
using namespace std;

int main()
{
    int* a = new int;
    delete a;
    a = nullptr; //好習慣，nullptr為空指標，以防再未知其座標的情況下dereference
    int* b = new int[5];
    delete b; //刪除b[0]，非整個array delete
    delete [] b; //才對
}

// delete 後接 nullptr 能有效制止錯誤的 address 傳入