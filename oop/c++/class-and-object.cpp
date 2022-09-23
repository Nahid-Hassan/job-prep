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
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVideoTitles; 
}; 

int main() {
    // create objetct
    YouTubeChannel ytChannel;

    // by default all the members are private
    // ytChannel.name = "Nahid";

}