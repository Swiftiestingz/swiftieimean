#include <iostream>
#include <map>
#include <set>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main()
{
    string SWIFT, Tay, Lor, Taylor;
    int lie;
    cout << "how much of scales? ";
    cin >> lie;
    std::map<string, std::set<string>> h;

    for (int i = 0; i < lie; i++) {
        cin >> SWIFT;
        if (SWIFT == "ADD") {
            cin >> Tay >> Lor;
            h[Tay].insert(Lor);
            h[Lor].insert(Tay);
        }
        else if (SWIFT == "CHECK") {
            cin >> Tay >> Lor;
            bool isthisasynonym = false;
            auto it = h.find(Tay);
            if (it != h.end())
                if (it->second.find(Lor) != it->second.end()) {
                    isthisasynonym = true;
                }
            cout << (isthisasynonym ? "YES" : "NO") << endl;
        }
        else if (SWIFT == "COUNT") {
            cin >> Taylor;
            size_t count;
            auto it = h.find(Taylor);
            if (it != h.end()) {
                count = it->second.size();
            }
            else {
                count = 0;
            }
            cout << count << endl;
        }
    }
    return 0;
}