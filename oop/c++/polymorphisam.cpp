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
    int contentQuality;

public:
    YouTubeChannel(string Name, string OwnerName) {
        name = Name;
        ownerName = OwnerName;
        subscribersCount = 0;
        contentQuality = 0;
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
    void checkAnalytics() {
        if (contentQuality < 5) {
            cout << name << " - less popular content!" << endl; 
        } else {
            cout << name << " - popular content!!" << endl;
        }
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
    void practice() {
        cout << ownerName << " is now practicing cooking!!" << endl;
        contentQuality++;
    }
};

class SingingYoutubeChannel : public YouTubeChannel {
public:    
    // create constructor for inherited class and pass the value to base class
    // class_name(arg1, arg2, ..) : class_name(arg1, arg2, ...) {}
    SingingYoutubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName) {

    }

    void greet() {
        cout << "Welcome " << ownerName << "!" << endl;

    }

    void practice() {
        cout << ownerName << " is now practicing singing!!" << endl;
        contentQuality++;
    }
};


int main() {
    // create object
    CookingYoutubeChannel cyc("Nahid's Cooking School", "Nahid");
    SingingYoutubeChannel syc("John's Singing School", "John");

    cyc.practice();
    cyc.practice();
    cyc.practice();
    cyc.practice();
    cyc.practice();
    syc.practice();
    syc.practice();
    cyc.practice();
    cyc.practice();
    cyc.practice();

    // cyc.checkAnalytics();
    // syc.checkAnalytics();


    // pointer of base class can access derived class
    YouTubeChannel *yt1 = &cyc;
    YouTubeChannel *yt2 = &syc;

    yt1->checkAnalytics();  // to invoke pointer method use "->"
    yt2->checkAnalytics();

}