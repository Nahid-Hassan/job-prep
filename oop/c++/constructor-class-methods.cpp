#include <iostream>
#include <list>
using namespace std;

/**
 * @brief A class is blueprint of an object, and a class is a
 * user defined data type.
 * 
 * Class has member variable.
 */
class YouTubeChannel {
    // member variable

// by default member variable are private
// public keyword make member variable available to out site of the class.
public:
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVideoTitles; 

    YouTubeChannel(string Name, string OwnerName) {
        name = Name;
        ownerName = OwnerName;
        subscribersCount = 0;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Subscriber Count: " << subscribersCount << endl;

        cout << "Published Video: ";
        bool flag = true;
        for (string title : publishedVideoTitles) {
            if (flag) {
                cout << title;
                flag = false;
            } else if (!flag) {
                cout << ", " << title;
            }
        }
        cout << endl << endl; 
    }
}; 

int main() {
    // create object
    YouTubeChannel ytChannel1("Big Boss", "Nahid");
    ytChannel1.publishedVideoTitles.push_back("Python - 1");
    ytChannel1.publishedVideoTitles.push_back("Python - 2");
    ytChannel1.publishedVideoTitles.push_back("Python - 3");

    ytChannel1.getInfo();

    YouTubeChannel ytChannel2("Little Boss", "Mony");
    ytChannel2.getInfo();
}