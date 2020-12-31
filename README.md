# UVA476
以 r 為開頭輸入各長方形左上 (x1, y1) 及右下 (x2, y2) 座標  
以 * 作為結束  
輸入 (x, y) 座標並檢查是否在長方形之中  
以 (9999.9, 9999.9) 為結束  
  
ex.  
input:  
r 8.5 17.0 25.5 -8.5  
r 0.0 10.3 5.5 0.0  
r 2.5 12.5 12.5 2.5  
*  
2.0 2.0  
4.7 5.3  
6.9 11.2  
20.0 20.0  
17.6 3.2  
-5.2 -7.8  
9999.9 9999.9  
output:  
Point 1 is contained in figure 2  
Point 2 is contained in figure 2  
Point 2 is contained in figure 3  
Point 3 is contained in figure 3  
Point 4 is not contained in any figure  
Point 5 is contained in figure 1  
Point 6 is not contained in any figure  
