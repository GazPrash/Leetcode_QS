// An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
// You are also given three integers sr, sc, and newColor. You should perform a flood fill on the image starting from the
// pixel image[sr][sc].
// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of
// the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels 
// (also with the same color), and so on. Replace the color of all of the aforementioned pixels with newColor.
// Return the modified image after performing the flood fill.



#include<iostream>
#include<vector>
using namespace std;


void recur(vector<vector<int>>& image, int sr_, int sc_, int original_pixel, int newColor){
    if (image[sr_][sc_+1] == original_pixel){
        recur(image, sr_, (sc_+1), original_pixel, newColor);
        image[sr_][sc_+1] = newColor;
    }

    if (image[sr_+1][sc_] == original_pixel){
        recur(image, (sr_+1), (sc_), original_pixel, newColor);
        image[sr_+1][sc_] = newColor;
    } 

    if (image[sr_][sc_-1] == original_pixel){
        recur(image, sr_, (sc_-1), original_pixel, newColor);
        image[sr_][sc_-1] = newColor;
    } 

    if (image[sr_-1][sc_] == original_pixel){
        recur(image, (sr_-1), (sc_), original_pixel, newColor);
        image[sr_-1][sc_] = newColor;
    }

    image[sr_][sc_] = newColor;         
}


vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int original_pixel = image[sr][sc];
    int sr_ = sr, sc_ = sc;

    recur(image, sr_, sc_, original_pixel, newColor);

    return image;
}

int main(){
    vector<vector<int>> v = {{1,1,1},{1,1,0},{1,0,1}};
    cout<<"OH YEAH THIS WORKS SURE";

    v = floodFill(v, 1, 1, 2);

    for ( int i = 0; i < v.size(); i++ )
    {
        for (int j = 0; j < v.size(); j++)
        {
            cout<<v[i][j]<<endl;
        }
        
    }
                
    return 0;
}