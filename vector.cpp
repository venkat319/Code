#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void vector_demo(){
    vector<int>vec;
    vec.push_back(88);
    vec.push_back(24);
    vec.push_back(3);
    vec.push_back(-9);
    vec.push_back(21);
    vec.push_back(92);


    vector<int>::iterator it;
    cout << "Contents of the Vector: " << endl;
    for(it=vec.begin(); it!= vec.end(); ++it){
        cout << *it << endl;
    }

    sort(vec.begin(), vec.end());

    cout << "Contents of the Vector after sort : " << endl;
    for(it=vec.begin(); it!= vec.end(); ++it){
        cout << *it << endl;
    }
}

int main(){

    vector_demo();
    return 0;
}