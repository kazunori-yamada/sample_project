#ifndef _SAMPLE_B_H_
#define _SAMPLE_B_H_
 
class sample_a;    //  クラスAへの参照
 
class sample_b{
private:
    sample_a* m_pa;
public:
    sample_b(sample_a* pa);
    void hoge();
};
 
#endif // _SAMPLE_B_H_
