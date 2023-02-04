class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& image,int im,int color,int n,int m,vector<vector<int>>& v){
        if(i<0 || j<0 || i>n || j>m) return ;
        else if(!v[i][j] && image[i][j]==im){
            v[i][j]=1;
            image[i][j]=color;
            dfs(i-1,j,image,im,color,n,m,v);
            dfs(i+1,j,image,im,color,n,m,v);
            dfs(i,j-1,image,im,color,n,m,v);
            dfs(i,j+1,image,im,color,n,m,v);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int im=image[sr][sc];
        vector<vector<int>> v(image.size(),vector(image[0].size(),0));
        dfs(sr,sc,image,im,color,image.size()-1,image[0].size()-1,v);
        return image;
    }
};