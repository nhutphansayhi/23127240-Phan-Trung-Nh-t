#include "main.h"

int main()
{

    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Current date (VN format): "
         << setfill('0') << setw(2) << ltm->tm_mday << "/"
         << setfill('0') << setw(2) << ltm->tm_mon + 1 << "/"
         << 1900 + ltm->tm_year << endl;

    ltm->tm_mday += 1;
    mktime(ltm);

    cout << "Next date (US format): "
         << setfill('0') << setw(2) << ltm->tm_mon + 1 << "/"
         << setfill('0') << setw(2) << ltm->tm_mday << "/"
         << setfill('0') << setw(2) << (ltm->tm_year % 100) << endl;

    return 0;
}