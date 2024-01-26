#include <iostream>
#include <list>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 99);
    int number;
    cout << "뽑을 난수 개수를 입력하세요 : ";
    cin >> number;
    for (int i = 0; i < number; i++) {
        cout << "난수 : " << dis(gen) << std::endl;
    }
}

