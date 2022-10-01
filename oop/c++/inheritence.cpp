#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
    string name;
    int subscribersCount;
    list<string> publishedVideoTitles; 

// accessible by derived class
protected:
    string ownerName;

public:
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

    void publishedVideo(string title) {
        publishedVideoTitles.push_back(title);
    }
    void subscribe() { subscribersCount++; }
    // void unsubscribe() { subscribersCount--; }
    void unsubscribe() { 
        if (subscribersCount > 0) {
            subscribersCount--;
        }
    }

    string getOwnerName() {
        return ownerName;
    }
}; 

// public YouTubeChannel ensure that - the public member & method
// of base class is public in inherited class.
class CookingYoutubeChannel : public YouTubeChannel {
public:    
    // create constructor for inherited class and pass the value to base class
    // class_name(arg1, arg2, ..) : class_name(arg1, arg2, ...) {}
    CookingYoutubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName) {

    }

    void greet(string name) {
        cout << "Welcome " << name << "!" << endl;
    }

    void greet() {
        cout << "Welcome " << ownerName << "!" << endl;
    }
};

int main() {
    // create object
    CookingYoutubeChannel cyc("Nahid's Cooking School", "Nahid");
    cyc.getInfo();
    cyc.subscribe();
    cyc.publishedVideo("Kichuri");
    cyc.publishedVideo("Murighonto");
    cyc.getInfo();
    // cyc.greet(cyc.getOwnerName());    // to access private base class property
    cyc.greet();

    CookingYoutubeChannel cyc1("KFC", "DB");
    cyc1.greet();
}