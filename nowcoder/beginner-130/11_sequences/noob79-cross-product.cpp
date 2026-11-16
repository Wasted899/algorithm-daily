class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算出这两个向量叉乘的结果
     * @param vector1 int整型vector 
     * @param vector2 int整型vector 
     * @return int整型vector
     */
    vector<int> crossTimes(vector<int>& vector1, vector<int>& vector2) {
        vector<int> crosstimes(3);
        crosstimes[0] = vector1[1] * vector2[2] - vector1[2] * vector2[1];
        crosstimes[1] = vector1[2] * vector2[0] - vector1[0] * vector2[2];
        crosstimes[2] = vector1[0] * vector2[1] - vector1[1] * vector2[0];
        return crosstimes;
    }
};