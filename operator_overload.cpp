#include <iostream>
#include <string.h>

using namespace std;

class Fruit
{
public:
    void peel();
    void slice();
    void juice();
    int operator+(Fruit &f);	//重载 "+" 操作符
private:
    int weight, calories_per_oz;
};

int Fruit::operator+(Fruit &f)
{
    //这样我们就能看到它被调用
    cout << "calling fruit addition" << endl;   

    return weight + f.weight;
}

class Apple: public Fruit
{
public:
    void make_candy_apple(float weight);
    void bob_for(int tub_id, int number_of_attempts);
};

main()
{
    Apple apple;
    Fruit orange;

    int onces = apple + orange;
}
/*
$ ./a.out
calling fruit addition
 * */
