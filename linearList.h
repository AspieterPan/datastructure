using namespace std;

class linearList
{
private:
    int *arry;
    int length;
    int maxlength;

public:
    int Length();
    int MaxLength();
    int LocateElem(int e);
    int GetElem(int i);
    bool ListInsert(int i, int e);
    bool print();
    int &operator[](int i);
    linearList(int a[], int len);
    linearList(int num);
    ~linearList();
};

int linearList::Length()
{
    return length;
}

int linearList::MaxLength()
{
    return maxlength;
}

int linearList::LocateElem(int e)
{
    for (int i = 0; i < length; i++)
    {
        if (arry[i] == e)
        {
            return i + 1;
        }
    }
    throw "cannot find the elem";
    return -1;
}

int linearList::GetElem(int i)
{
    if (i < 1 && i > length)
    {
        throw "out of range";
        return -1;
    }
    return arry[i - 1];
}

bool linearList::ListInsert(int i, int e)
{
    if (i < 1 && i > length)
    {
        throw "out of range";
        return false;
    }
    if (length == maxlength)
    {
        maxlength += 10;
        int *a = new int[maxlength];
        for (int p = 0; p < length; p++)
        {
            a[p] = arry[p];
        }
        delete arry;
        arry = a;
    }
    for (int p = length; p > i - 1; p--)
    {
        arry[p] = arry[p - 1];
    }
    arry[i - 1] = e;
    length++;
    return true;
}

bool linearList::print()
{
    if (length <= 0)
    {
        return false;
    }
    for (int i = 0; i < length; i++)
    {
        cout << arry[i];
        if (i < length - 1)
        {
            cout << ",";
        }
    }
    cout << endl;
    return true;
}

int &linearList::operator[](int i)
{
    if (i >= length)
    {
        throw "out of range";
        return arry[0];
    }
    return arry[i];
}

linearList ::linearList(int a[], int len)
{
    maxlength = ((len / 10) + 1) * 10;
    length = len;
    arry = new int[maxlength];
    for (int i = 0; i < length; i++)
    {
        arry[i] = a[i];
    }
}

linearList::linearList(int num)
{
    maxlength = (num / 10 + 1) * 10;
    length = num;
    arry = new int[maxlength];
    for (int i = 0; i < length; i++)
    {
        arry[i] = rand() % 100 + 1;
    }
}

linearList::~linearList()
{
    delete arry;
    // std::cout << "delete" << std::endl;
}