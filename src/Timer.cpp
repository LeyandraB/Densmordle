#include <chrono>
#include <iostream>
#include <future>

void minute_timer() {
    for(int i=0;i<60;i++)
    {
        boost::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
int main ()
{
    auto future = std::async(minute_timer);
    //play game here 
    return 0;
}
