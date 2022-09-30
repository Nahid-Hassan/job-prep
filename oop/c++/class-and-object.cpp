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
}; 

int main() {
    // create object
    YouTubeChannel ytChannel;

    // by default all the members are private
    ytChannel.name = "Nahid";
    ytChannel.ownerName = "Nahid Hassan";
    ytChannel.subscribersCount = 23;
    ytChannel.publishedVideoTitles = {"C++ for Beginners", "Python for Everybody", "Why Learn C++?"};

    cout << ytChannel.name << endl;
    cout << ytChannel.ownerName << endl;
    cout << ytChannel.subscribersCount << endl;

    for (string title : ytChannel.publishedVideoTitles) {
        cout << title << endl;
    } 

}