#include <iostream>
#include "json/json.h"

using namespace std;
using namespace yazi::Json;

int main() {
    /* 将各种数据转换为json格式 
    Json j1;
    Json j2 = true;
    Json j3 = 1;
    Json j4 = 2.2;
    Json j5 = "hello world";
    Json j6 = j5;
    */

   /* 将josn转换为各种普通数据格式
    bool m_bool = j2;
    int i = j3;
    double d = j4;
    const string & s = j5;
    */

    // 数字相关内容调试 
       /*  Json a;
        a[0] = true;
        a[1] = 1;
        a[2] = 1.1;
        a[3] = "hello";
        // a[4] = a[3];//问题1.浅拷贝带来的严重问题，一旦释放后就会在接下来的运行中出错
        a.append("aaaa");

        a.remove(3);
        a.remove(2);
        for(auto i = a.begin(); i != a.end(); ++i) {
            cout << (*i).str() << endl;
        }
        cout << a.str() << endl; */
    /* Json a;
    a["bool"] = true;
    a["int"] = 123;
    cout << a.str() << endl; */

    Json a;
    a["bool"] = true;
    a["name"] = "zhou";
    a["type"] = "int";
    cout << a.str() << endl;
    a.remove("bool");
    cout << a.str() << endl;
    return 0;
}