#ifndef _SAMPLE_A_H_
#define _SAMPLE_A_H_
 
class sample_b;    //  クラスBへの参照
 
class sample_a{
private:
    sample_b* m_pb;
public:
    sample_a();    //  コンストラクタ
    void foo();
    void bar();
};
 
#endif // _SAMPLE_A_H_
