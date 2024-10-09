#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    // initialize and declaration at same point 
    
    vector<char> vec;
    
    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('c');
    vec.push_back('d');
    vec.push_back('e');
    
    
    // Display elements of vector 
    
    // for(char i: vec){
        
    //     cout<<i<<endl;
        
    // }
    
    // Size of vector 
    cout<<"Size of vector: "<<vec.size()<<endl;
    
    // Capacity of Vector 
    cout<<"Capacity of vector: "<<vec.capacity()<<endl;
    
    // ELement at specific position
    cout<<vec.at(0)<<endl;
    
    
    // Element at front of vector 
    cout<<"Front: "<<vec.front()<<endl;
    
    // Element at back of vector 
    cout<<"Back: "<<vec.back()<<endl;
    
    
    
    
    // Notes
    
    // -> Uses Heap Memory (non-static) 
    // -> capacity is double the size 
    // -> Memory is allocated at runtime as compared to arrays which are given memory at compile time 
    

}
