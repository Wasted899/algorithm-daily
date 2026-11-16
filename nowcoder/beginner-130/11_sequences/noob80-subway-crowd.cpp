class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算旺仔哥哥在地铁上的最长停留时间
     * @param t int整型vector 序列  t，表示地铁在相邻两站之间的用时
     * @param s int整型vector 序列 s，表示地铁在每一站的停靠时间
     * @param x int整型 旺仔哥哥想从第 x 站出发
     * @param y int整型 旺仔哥哥想坐到第 y 站
     * @return int整型
     */
    int countLongestSubwayTime(vector<int>& t, vector<int>& s, int x, int y) {
        int T = 0;
        for (int i = x ; i < y ; i++){
            T = T + t[i-1];
        }
        for (int j = x ; j <= y ; j++){
            T = T + s[j-1];
        }
        return T;
    }
};