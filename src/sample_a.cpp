#include "sample_a.h"
#include "sample_b.h"
#include <iostream>
 
using namespace std;
 
sample_a::sample_a(){
    m_pb = new sample_b(this);
}
void sample_a::foo(){
    cout << "foo" << endl;
}
void sample_a::bar(){
    m_pb->hoge();
}
