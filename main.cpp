#include <stdio.h>
#include <iostream>
#include "linearList.h"

using namespace std;

bool Del_Min(int *L, int &value);

template <class T>
int getArrayLen(T &array)
{
    return (sizeof(array) / sizeof(array[0]));
}

int main()
{
    int a[] = {1, 4, 5, 7, 9, 15, 20};
    linearList L(a, getArrayLen(a));
    linearList L_rand(6);
    cout << "线性表 L 的长度是：" << L.Length() << endl;
    cout << "数字9是表 L 中的第" << L.LocateElem(9) << "个元素" << endl;
    cout << "L中的第3个元素是：" << L.GetElem(3) << endl;
    for (int p = 80; p < 100; p++)
    {
        L.ListInsert(3, p);
        L.print();
        cout << "L.length:" << L.Length() << endl;
        cout << "L.maxlength:" << L.MaxLength() << endl;
    }
    cout << "L.length:" << L.Length() << endl;
    cout << "L.MaxLenth:" << L.MaxLength() << endl;

    return 0;
}
