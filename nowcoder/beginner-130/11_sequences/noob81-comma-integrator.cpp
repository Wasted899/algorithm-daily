class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 整理出一个将序列中的数字以逗号隔开从而得到的字符串
     * @param a int整型vector 需要整理的序列 a
     * @return string字符串
     */
    string commaTransformer(vector<int>& a) {
        string S;
        int first = 1;
        for (int i = 0 ; i < a.size() ; i++){
            string s = to_string(a[i]);
            if (first){
                S+=s;
                first = 0;
            }
            else{
                s=","+s;
                S+=s;
            }
        }
        return S;
    }
};