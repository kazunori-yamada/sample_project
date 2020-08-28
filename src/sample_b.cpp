#include "sample_a.h"
#include "sample_b.h"
#include <iostream>
 
using namespace std;
 
sample_b::sample_b(sample_a* pa){
    m_pa = pa;
}
void sample_b::hoge(){
    cout << "bar" << endl;
    m_pa->foo();
}
