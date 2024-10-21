#include"main.h"

void log(const string& message) {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char filename[20];
    strftime(filename, sizeof(filename), "log-%y%m%d.txt", ltm);

    ofstream logfile;
    logfile.open(filename, ios_base::app);

    if (logfile.is_open()) {
        logfile << message << endl;
        logfile.close();
    } else {
        cerr << "Không thể mở file log: " << filename << endl;
    }
}

int main() {
    log("Exception tại hàm export. Lí do: Invalid input exception");
    log("This is another log message.");
    log("hello");
    return 0;
}