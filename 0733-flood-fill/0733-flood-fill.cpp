class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& v,vector<vector<int>>& image,int im,int color){
        v[i][j]=1;
        image[i][j]=color;
        if(i>0 && image[i-1][j]==im && !v[i-1][j]) dfs(i-1,j,v,image,im,color);
        if(j>0 && image[i][j-1]==im && !v[i][j-1]) dfs(i,j-1,v,image,im,color);
        if(i<image.size()-1 && image[i+1][j]==im && !v[i+1][j]) dfs(i+1,j,v,image,im,color);
        if(j<image[0].size()-1 && image[i][j+1]==im && !v[i][j+1]) dfs(i,j+1,v,image,im,color);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int im=image[sr][sc];
        vector<vector<int>> v(image.size(),vector(image[0].size(),0));
        dfs(sr,sc,v,image,im,color);
        return image;
    }
};