#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input;
    vector<string> timeline;
    map<string, int> counts;
    while (cin >> input) {
        int linenumber;
        cin >> linenumber;

        string filename;
        stringstream ss(input);

        while (getline(ss, filename, '\\'));
        int filename_len = filename.length();
        if (filename_len > 16) {
            filename = filename.substr(filename_len - 16);
        }
        string filename_linenumber = filename + '_' + to_string(linenumber);
        if (counts.find(filename_linenumber) != counts.end())
        {
            counts[filename_linenumber] += 1;
        }else{
            counts[filename_linenumber] = 1;
            timeline.push_back(filename_linenumber);
        }
        


    }
    int index = 0;
    if (timeline.size() > 8) {
        index = timeline.size() - 8;
    }
    for (; index < timeline.size(); index++) {
        string filename_linenumber = timeline[index];
        stringstream ss(filename_linenumber);
        string filename, linenumber;
        getline(ss, filename, '_');
        getline(ss, linenumber, '_');
        int count = counts[filename_linenumber];
        cout << filename << ' ' << linenumber << ' ' << count << endl;
    }
}
// 64 位输出请用 printf("%lld")
