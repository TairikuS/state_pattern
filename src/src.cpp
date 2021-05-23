#include <iostream>
#include <thread>

enum STATE
{
    STATE_credit,
    STATE_title,
    STATE_opening,
    STATE_demo,
};

int main()
{
    int state = STATE_credit;

    while (1)
    {
        switch (state)
        {
        case STATE_credit:
            std::cout << "credit\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
            state = STATE_title;
            break;

        case STATE_title:
            std::cout << "title\n";
            std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
            state = STATE_opening;
            break;

        case STATE_opening:
            std::cout << "opening\n";
            std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
            state = STATE_demo;
            break;

        case STATE_demo:
            std::cout << "demo\n";
            std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
            state = STATE_credit;
            break;
        }
    }

    return 0;
}

