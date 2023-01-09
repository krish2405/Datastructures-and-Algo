#include<iostream>
#include<vector>
using namespace std;
int main()

{ 
//     vector <int>v;//vector declaration
//     v.assign(7,12);//fill the array with 12 ,7 times
//     for(int i=0;i<7;i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
//     v.push_back(23);//insert element at alst position
//     int s=v.size();
//      cout<<endl<<s;
//     cout<<"\nthe last element is "<<v[s-1];
     
//      cout<<"\nvector after pushing back element="<<endl;
//      for(int i=0;i<s;i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
//     v.pop_back();
//     cout<<"\nvector after pop back element="<<endl;
//      for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }

//     v.insert(v.begin(),19);
//     cout<<"\n element after insertion at begining="<<v[0];

//      v.erase(v.begin());
//         cout<<"\n element after erase at begining="<<v[0];
    
//     v.emplace(v.begin(),5);
//        cout<<"\n1st element after implace="<<v[0];\

//     v.emplace_back(44);
//     s=v.size();
//        cout<<"\nlast element after emplace back="<<v[s-1];
//        cout<<"\n printing all element ";

//      for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
   
//    v.clear();
//    s=v.size();
//    cout<<"\n"<<s;

vector <int>obj1,obj2;
obj1.push_back(13);
obj1.push_back(14);
obj1.push_back(15);
obj1.push_back(16);

cout<<"vector 1 is\n";
for(int i=0;i<obj1.size();i++)
{
    cout<<obj1[i]<<" ";
}
obj2.push_back(23);
obj2.push_back(43);
obj2.push_back(76);
obj2.push_back(90);

cout<<"\nvector 2 is\n";
for(int i=0;i<obj2.size();i++)
{
    cout<<obj2[i]<<" ";
}
obj1.swap(obj2);

cout<<"\nafter swapping\n"<<"vector 1:\n";
for(int i=0;i<obj1.size();i++)
{
    cout<<obj1[i]<<" ";
}

cout<<"\nvector 2 is\n";
for(int i=0;i<obj2.size();i++)
{
    cout<<obj2[i]<<" ";
}

vector<int>k;
for(int i=0;i<10;i++)
{
    k.push_back(i);
}

cout<<"\nundrestanding k.begin() and k.end()\n";
for(auto i=k.begin();i<k.end();i++)
{
    cout<<*i<<" ";
}

   
  return 0;
}
