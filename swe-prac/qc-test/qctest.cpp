#include <bits/stdc++.h>
using namespace std;

bool isValidQC(string results) {
    int testSize = results.size(), i = 0;
    int countQ = 0;
    int countFlag = 0;

    if (testSize < 6) return false;
    for (; i < testSize;) {
        // if Q                              // Q20d30p22Q23d342p2234Q224d324p224
        if (results[i] == 'Q') {
            countQ++;
            i++;
            string qs = "", ps = "", ds = "";
            // check digit after Q
            if (i < testSize && isdigit(results[i]) && results[i] != '0') {
                while (i < testSize && isdigit(results[i])) {
                    qs += results[i];
                    i++;
                }
                // if p found first
                if (results[i] == 'p') {
                    i++;
                    if (i < testSize && isdigit(results[i])) {
                        if (i < testSize - 1 && isdigit(results[i + 1])) {
                            if (results[i] == '0' && (results[i] == results[i + 1]))
                                return false;
                        }
                        // cout << results[i] << endl;
                        while (i < testSize && isdigit(results[i])) {
                            ds += results[i];
                            i++;
                        }
                    }
                    if (results[i] == 'd') {
                        i++;
                        // check digit after d
                        if (i < testSize && isdigit(results[i])) {
                            if (i < testSize - 1 && isdigit(results[i + 1])) {
                                if (results[i] == '0' && (results[i] == results[i + 1]))
                                    return false;
                            }
                            while (i < testSize && isdigit(results[i])) {
                                ps += results[i];
                                i++;
                            }
                        }
                    }
                    // cout << qs << " " << ps << " " << ds << endl;
                } else if (results[i] == 'd') {
                    i++;
                    if (i < testSize && isdigit(results[i])) {
                        if (i < testSize - 1 && isdigit(results[i + 1])) {
                            if (results[i] == '0' && (results[i] == results[i + 1]))
                                return false;
                        }
                        // cout << results[i] << endl;
                        while (i < testSize && isdigit(results[i])) {
                            ds += results[i];
                            i++;
                        }
                    }
                    if (results[i] == 'p') {
                        i++;
                        // check digit after d
                        if (i < testSize && isdigit(results[i])) {
                            if (i < testSize - 1 && isdigit(results[i + 1])) {
                                if (results[i] == '0' && (results[i] == results[i + 1]))
                                    return false;
                            }
                            while (i < testSize && isdigit(results[i])) {
                                ps += results[i];
                                i++;
                            }
                        }
                    }
                } else {
                    return false;
                }
                // cout << qs << " " << ps << " " << ds << endl;
                if (stoi(qs) == stoi(ps) + stoi(ds)) {
                    countFlag++;
                }

                if (i < testSize && results[i] == 'Q') {
                    continue;
                }
            }
        } else {
            return false;
        }
    }
    return countFlag == countQ;
}

int passQC(string results) {
    int count = 0;
    if (isValidQC(results)) {
        for (unsigned long int i = 0; i < results.size(); i++) {
            if (results[i] == 'p') {
                i++;
                string temp = "";
                while (results[i] >= '0' && results[i] <= '9') {
                    temp += results[i];
                    i++;
                }
                count += stoi(temp);
            }
        }
    }
    return count ? count : -1;
}

int defectQC(string results) {
    int count = 0;
    if (isValidQC(results)) {
        for (unsigned long int i = 0; i < results.size(); i++) {
            if (results[i] == 'd') {
                i++;
                string temp = "";
                while (results[i] >= '0' && results[i] <= '9') {
                    temp += results[i];
                    i++;
                }
                count += stoi(temp);
            }
        }
    }
    return count ? count : -1;
}

int totalQC(string results) {
    int count = 0;
    if (isValidQC(results)) {
        for (unsigned long int i = 0; i < results.size(); i++) {
            if (results[i] == 'Q') {
                i++;
                string temp = "";
                while (results[i] >= '0' && results[i] <= '9') {
                    temp += results[i];
                    i++;
                }
                count += stoi(temp);
            }
        }
    }
    return count ? count : -1;
}

int batches(string results) {
    int count = 0;

    if (isValidQC(results)) {
        for (unsigned long int i = 0; i < results.size(); i++) {
            if (results[i] == 'Q') {
                count++;
            }
        }
    }

    return count ? count : -1;
}

int main() {
    assert(isValidQC("") == false);
    assert(isValidQC(" ") == false);
    assert(isValidQC("Q5d3p2") == true);
    assert(isValidQC("q2dp") == false);
    assert(isValidQC("Qqqq2ddddp") == false);
    assert(isValidQC("q2d3p2") == false);
    assert(isValidQC("Q2d1p1Q2d0p2Q7d2p5") == true);

    assert(isValidQC("Q2+1-1") == false);

    assert(passQC(" ") == -1);
    assert(defectQC("") == -1);
    assert(totalQC("") == -1);
    assert(batches("") == -1);
    assert(isValidQC("Q2p1d1") == true);

    assert(passQC("Q2p1d1") == 1);
    assert(defectQC("Q2p1d1") == 1);
    assert(totalQC("Q2p1d1") == 2);
    assert(batches("Q2p1d1") == 1);
    assert(batches("Q2+1-1") == -1);
    cout << "All test cases succeeded" << endl;

    return 0;
}

