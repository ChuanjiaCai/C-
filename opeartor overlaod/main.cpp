//
//  main.cpp
//  opeartor overlaod
//
//  Created by jack on 16/6/15.
//  Copyright © 2016年 jack. All rights reserved.
//use different ways to cout Sequential arrays

#include <iostream>
#include<vector>
#include<algorithm>
//#include<lambda> //haven't exist this type header file
using namespace std;

//method 1: begin
bool mycmp(int i, int j)
{
    return i>j;
}
// method 1:end
//method 2: begin
class cmp
{
public:
    bool operator()(int i, int j)
    {
        return i<j;
    }
};

//method 2: end
int main(int argc, const char * argv[]) {
    // insert code here...
    int array[10]={5,2,3,8,1,67,22,66,88,11};
    vector<int>vi(array,array+8);
    cout<<"-----------------------"<<endl;
    sort(vi.begin(),vi.end(),mycmp);//use this for method 1
    for(int i=0;i<vi.size();i++)
    {   //cout<<"Method 1:"<<endl;
        cout<<vi[i]<<endl;
    }
    
    cout<<"-----------------------"<<endl;
    sort(vi.begin(),vi.end(),cmp());//use this for method 2
    for(int i=0;i<vi.size();i++)
    {   //cout<<"Method 2:"<<endl;
        cout<<vi[i]<<endl;
    }
    cout<<"-----------------------"<<endl;
//    sort(vi.begin(),vi.end(),[=](int i,int j)(return i>j;))//use this for method 3 lambda
//    for(int i=0;i<vi.size();i++)
//    {   //cout<<"Method 1:"<<endl;
//        cout<<vi[i]<<endl;
//    }
//    
//    cout<<"-----------------------"<<endl;
    cout<<"Hello World! life is the gift of God,everyday is funny! please enjoy it!"<<endl;
    return 0;
}
