/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 计算 n 的阶乘
 * @param n int整型 
 * @return int整型
 */
int factorialOfN(int n ) {
    long long N=1;
    const int MOD = 1000000007;
    while (n>0){
        N=N*n%MOD;
        n--;
    }
    return N;
}