#include <algorithm>
#include <iostream>
#include <vector>
#include <tuple>
#include <map>
using namespace std;

const int M = 62;
const int N = 30002;
int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> index2indexofMain;
    vector<tuple<int, int, int>> records;
    int main_value[M] = {0};
    int main_weight[M] = {0};

    int sub1_value[M] = {0};
    
    int sub2_value[M] = {0};
    int sub1_weight[M] = {0};
    int sub2_weight[M] = {0};
    int main_count = 1;
    for (int i=1; i<=m; i++) {
        int v, w, q;
        cin >> v >> w >> q;
        if (q == 0) {
            main_value[main_count] = v;
            main_weight[main_count] = w;
            index2indexofMain.insert(pair<int, int>(i, main_count));
            main_count ++;
        }else {
            tuple<int, int, int> temp = make_tuple(v, w, q);
            records.push_back(temp);
        }
    }
    for(tuple<int, int, int> temp : records) {
        int v, w, q;
        v = get<0>(temp);
        w = get<1>(temp);
        q = get<2>(temp);
        int indexofMain = index2indexofMain[q];
        if (sub1_value[indexofMain] == 0) {
            sub1_weight[indexofMain] = w;
            sub1_value[indexofMain] = v;
        }else {
            sub2_weight[indexofMain] = w;
            sub2_value[indexofMain] = v;
        }
    }

    int dp[M][N] = {0};
    main_count--;
    for (int i = 1; i <= main_count; i++) {
        for (int j = 0; j <= n; j++) {
            int temp1 = dp[i-1][j];
            int temp2 = 0;
            if (j >= main_value[i]) {
                temp2 = dp[i-1][j - main_value[i]] + main_value[i] * main_weight[i];
            }
            int temp3 = 0;
            if (j >= main_value[i] + sub1_value[i]) {
                temp3 = dp[i-1][j - main_value[i] - sub1_value[i]] + main_value[i] * main_weight[i] + sub1_value[i] * sub1_weight[i];
            }
            int temp4 = 0;
            if (j >= main_value[i] + sub2_value[i]) {
                temp4 = dp[i-1][j-main_value[i] - sub2_value[i]] + main_value[i] * main_weight[i] + sub2_value[i] * sub2_weight[i];
            }
            int temp5 = 0;
            if (j >= main_value[i] + sub1_value[i] + sub2_value[i]) {
                temp5 = dp[i-1][j-main_value[i] - sub1_value[i] - sub2_value[i]] + main_value[i] * main_weight[i] + sub1_value[i] * sub1_weight[i] + sub2_value[i] * sub2_weight[i];
            } 
            dp[i][j] = max({temp1, temp2, temp3, temp4, temp5});
        }
    }

    cout << dp[main_count][n];
}
// 64 位输出请用 printf("%lld")