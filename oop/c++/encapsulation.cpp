#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVideoTitles; 

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
}; 

int main() {
    // create object
    YouTubeChannel ytChannel1("Big Boss", "Nahid");
    ytChannel1.publishedVideo("Python - 1");
    ytChannel1.publishedVideo("Python - 2");
    ytChannel1.publishedVideo("Python - 3");


    ytChannel1.subscribe();
    ytChannel1.subscribe();
    ytChannel1.subscribe();
    ytChannel1.unsubscribe();
    ytChannel1.getInfo();

    YouTubeChannel ytChannel2("Little Boss", "Mony");
    ytChannel2.getInfo();
}