#include"test.h"
#include"Vector.h"
#include"VectorVert.h"
#include"VectorHor.h"
#include<iostream>
using namespace std;
int test1()
{
    string file = "";
    VectorVert res(2, file);
    VectorHor v2(2, file), v1(2, file);
    v1.set_i(0, 1);
    v1.set_i(1, 1);
    v2.set_i(0, 2);
    v2.set_i(1, 1);
    res = v1 + v2;
    if(((res[0] >= 3)&&(res[0] <= 3))&&((res[1] >= 2)&&(res[1] <= 2))){
        cout<<"Test1: OK"<<endl;
        return 0;
    }
    cout<<"Test1: NOOOOOOOOO"<<endl;
    return 0;
}

int test2()
{
    string file = "";
    VectorHor v2(2, file), v1(2, file);
    v1.set_i(0, 1);
    v1.set_i(1, 1);
    v2.set_i(0, 2);
    v2.set_i(1, 1);
    v2 = v1;
    if(((v2[0] >= 1)&&(v2[0] <= 1))&&((v2[1] >= 1)&&(v2[1] <= 1))){
        cout<<"Test2: OK"<<endl;
        return 0;
    }
    cout<<"Test2: NOOOOOOOOO"<<endl;
    return 0;
}

int test3()
{
    string file = "";
    VectorHor v2(2, file), v1(2, file);
    v1.set_i(0, 1);
    v1.set_i(1, 1);
    v2.set_i(0, 2);
    v2.set_i(1, 1);
    VectorVert res(v1 + v2);
    if(((res[0] >= 3)&&(res[0] <= 3))&&((res[1] >= 2)&&(res[1] <= 2))){
        cout<<"Test3: OK"<<endl;
        return 0;
    }
    cout<<"Test3: NOOOOOOOOO"<<endl;
    return 0;
}

int test4()
{
    string file = "";
    VectorHor v2(2, file), v1(2, file), res(2, file);
    v1.set_i(0, 1);
    v1.set_i(1, 1);
    v2.set_i(0, 2);
    v2.set_i(1, 1);
    res = v1 - v2;
    if(((res[0] >= -1)&&(res[0] <= -1))&&((res[1] >= 0)&&(res[1] <= 0))){
        cout<<"Test4: OK"<<endl;
        return 0;
    }
    cout<<"Test4: NOOOOOOOOO"<<endl;
    return 0;
}

int test5()
{
    string file = "";
    VectorHor v2(2, file), v1(2, file), res(2, file);
    v1.set_i(0, 1);
    v1.set_i(1, 1);
    v2.set_i(0, 2);
    v2.set_i(1, 1);
    res = v1 * v2;
    if (((res[0] >= 2) && (res[0] <= 2)) && ((res[1] >= 1) && (res[1] <= 1))) {
        cout<<"Test5: OK"<<endl;
        return 0;
    }
    cout<<"Test5: NOOOOOOOOO"<<endl;
    return 0;
}
