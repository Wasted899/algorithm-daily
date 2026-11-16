class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算两个三维向量的点乘结果
     * @param vector1 int整型vector 第一个向量
     * @param vector2 int整型vector 第二个向量
     * @return int整型
     */
    int dotTime(vector<int>& vector1, vector<int>& vector2) {
        int dottime = 0;
        for (int i = 0 ; i < vector1.size() ; i++){
            dottime += vector1[i]*vector2[i];
        }
        return dottime;
    }
};