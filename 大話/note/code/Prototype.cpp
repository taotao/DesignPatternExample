/* GOOD：從一個物件再創建另外一個可定制的物件，而無需知道任何創建的細
 * 節。並能提高創建的性能。 說白了就COPY 技術，把一個物件完整的COPY 出一份。
 * */

#include<iostream>
#include <vector>
#include <string>
using namespace std;

class Prototype { //抽象基類
private:
    string m_strName;
public:
    Prototype(string strName) {
        m_strName = strName;
    }
    Prototype() {
        m_strName = " ";
    }
    void Show() {
        cout << m_strName << endl;
    }
    virtual Prototype *Clone() = 0 ;
};

// class ConcretePrototype1
class ConcretePrototype1 : public Prototype {
public:
    ConcretePrototype1(string strName) : Prototype(strName) {}
    ConcretePrototype1() {}
    virtual Prototype *Clone() {
        ConcretePrototype1 *p = new ConcretePrototype1() ;
        *p = *this ; //複製對象
        return p ;
    }
};

// class ConcretePrototype2
class ConcretePrototype2 : public Prototype {
public:
    ConcretePrototype2(string strName) : Prototype(strName) {}
    ConcretePrototype2() {}
    virtual Prototype *Clone() {
        ConcretePrototype2 *p = new ConcretePrototype2() ;
        *p = *this ; //複製對象
        return p ;
    }
};

//用戶端
int main() {
    ConcretePrototype1 *test = new ConcretePrototype1("小王");
    ConcretePrototype2 *test2 = (ConcretePrototype2 *)test->Clone();
    test->Show();
    test2->Show();
    return 0;
}

