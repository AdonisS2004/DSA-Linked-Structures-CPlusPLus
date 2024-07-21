#include <iostream>
#include "../include/Node.hpp"
#include "../include/UnorderedList.hpp"

using namespace std;

int main(){
    UnorderedList mylist;
    mylist.add(31);
    mylist.add(77);
    mylist.add(17);
    mylist.add(93);
    mylist.add(26);
    mylist.add(54);

    cout<<"SIZE: "<<mylist.size()<<endl;
    cout<<"contains 93?\t"<<mylist.contains(93)<<endl;
    cout<<"contains 100?\t"<<mylist.contains(100)<<endl<<endl;

    mylist.add(100);
    cout<<"contains 100?\t"<<mylist.contains(100)<<endl<<endl;
    cout<<"SIZE: "<<mylist.size()<<endl;

    mylist.remove(54);
    cout<<"SIZE: "<<mylist.size()<<endl;
    mylist.remove(93);
    cout<<"SIZE: "<<mylist.size()<<endl;
    mylist.remove(31);
    cout<<"SIZE: "<<mylist.size()<<endl;
    mylist.contains(93);

    return 0;
}