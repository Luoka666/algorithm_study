#include <stdio.h>
#include <string.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
//存入出现次数法
int lengthOfLongestSubstring_01(char* s) {
    int left = 0;
    int length = 0;
    int cnt[128] = {0};//ASCII码一共0~127个
    for (int right = 0;s[right]; right++) {
        cnt[s[right]]++;//记录当前字母存在+1
        while (cnt[s[right]] > 1) {//发现重复字母
            cnt[s[left]]--;//当前left字母数减一
            left++;//left左滑
        }
        //更新长度
        if ((right - left + 1) > length) {
            length = right - left + 1;
        }
    }
    return length;
}
//位置存入法
int lengthOfLongestSubstring_02(char* s) {
    int left = 0;
    int length = 0;
    int pos[128] = {0};//存入上次出现的位置索引+1（提醒left直接跳往左重复字母的下一索引）
    for (int right = 0;s[right]; right++) {
        if (pos[s[right]] > left) {//防止left往前跳
            left = pos[s[right]];//left直接跳往左重复字母的下一索引
        }
        pos[s[right]] = right + 1;//存入上次出现的位置索引+1
        length = MAX(length, right - left + 1);
    }
    return length;
}

int main(void) {
    char s[] = "abcdefghijklmnopqrst";
    return lengthOfLongestSubstring_02(s);
}
