/**
 * struct Point {
 *	int x;
 *	int y;
 *	Point(int xx, int yy) : x(xx), y(yy) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算A点与B点之间的距离
     * @param point_A Point类 A点
     * @param point_B Point类 B点
     * @return double浮点型
     */
    double calculateDistance(Point point_A, Point point_B) {
        double dx = point_B.x - point_A.x;
        double dy = point_B.y - point_A.y;
        double res = sqrt(dx*dx + dy*dy);
        return res;
    }
};