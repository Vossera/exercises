#include <sstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string record;
    int A_count = 0;
    int B_count = 0;
    int C_count = 0;
    int D_count = 0;
    int E_count = 0;
    int invalid_count = 0;
    int private_count = 0;
    while (cin >> record) {
        string ip, mask;
        stringstream ss(record);
        getline(ss, ip, '~');
        getline(ss, mask, '~');
        // cout << ip << ' ' << mask << endl;
        // 判断下面的
        stringstream ipss(ip);
        stringstream maskss(mask);
        string ip_part1_str;
        string ip_part2_str;
        string ip_part3_str;
        string ip_part4_str;
        string mask_part1_str;
        string mask_part2_str;
        string mask_part3_str;
        string mask_part4_str;
        int ip_part1 = 0;
        int ip_part2 = 0;
        int ip_part3 = 0;
        int ip_part4 = 0;
        int mask_part1 = 0;
        int mask_part2 = 0;
        int mask_part3 = 0;
        int mask_part4 = 0;
        getline(ipss, ip_part1_str, '.');
        getline(ipss, ip_part2_str, '.');
        getline(ipss, ip_part3_str, '.');
        getline(ipss, ip_part4_str, '.');
        getline(maskss, mask_part1_str, '.');
        getline(maskss, mask_part2_str, '.');
        getline(maskss, mask_part3_str, '.');
        getline(maskss, mask_part4_str, '.');
        if (ip_part1_str == "" || ip_part2_str == "" || ip_part3_str == "" || ip_part4_str == "" || mask_part1_str == "" || mask_part2_str == "" || mask_part3_str == "" || mask_part4_str == "") {
            invalid_count += 1;
            continue;
        }
        ip_part1 = stoi(ip_part1_str);
        ip_part2 = stoi(ip_part2_str);
        ip_part3 = stoi(ip_part3_str);
        ip_part4 = stoi(ip_part4_str);
        mask_part1 = stoi(mask_part1_str);
        mask_part2 = stoi(mask_part2_str);
        mask_part3 = stoi(mask_part3_str);
        mask_part4 = stoi(mask_part4_str);
        // 判断子网掩码是否合法
        bool valid_mask = false;
        unsigned int temp_mask = (mask_part1 << 24) + (mask_part2 << 16) + (mask_part3 << 8) + mask_part4;
        int state = 0;
        int loop_count = 0;
        while (temp_mask) {
            int flag = 1 & temp_mask;
            if (loop_count == 0 && flag == 1) {
                state = 5; // 5表示异常
                break;
            }
            if (state == 0 && flag == 1){
                state = 1;
            }else if(state == 1 && flag == 0){
                state = 5;
                break;
            }
            temp_mask >>= 1;
            loop_count += 1;
        }
        valid_mask = state == 1;
        if(!valid_mask) {
            invalid_count += 1;
            continue;
        }

        if (ip_part1 == 0 || ip_part1 == 127) {
            continue;
        }
        if (ip_part1 >= 1 && ip_part1 <= 127) {
            A_count += 1;
            if (ip_part1 == 10 ) {
                private_count += 1;
            }
        }else if(ip_part1 >= 128 && ip_part1 <= 191){
            B_count += 1;
            if (ip_part1 == 172 && ip_part2 >= 16 && ip_part2 <= 31) {
                private_count += 1;
            }
        }else if (ip_part1 >= 192 && ip_part1 <= 223) {
            C_count += 1;
            if (ip_part1 == 192 && ip_part2 == 168){
                private_count += 1;
            }
        }else if (ip_part1 >= 224 && ip_part1 <= 239) {
            D_count += 1;
        }else if (ip_part1 >= 240 && ip_part1 <= 255) {
            E_count += 1;
        }
    }
    cout << A_count << ' ' << B_count << ' ' << C_count << ' ' << D_count << ' ' << E_count << ' ' << invalid_count << ' ' << private_count << endl;
}
// 64 位输出请用 printf("%lld")