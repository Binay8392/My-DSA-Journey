class Solution {
  public:
    int distance(int x1, int y1, int x2, int y2) {
        // code here
        
        return round(sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
    }
};