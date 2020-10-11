#include <iostream>
#include <queue>

using namespace std;
bool check(int x, int y);
void bfs  (int x, int y);

int map[4][5]={{1,1,0,1,0},
               {1,1,0,0,1},
               {0,0,1,0,0},
               {1,1,0,1,1}};
bool visited[4][5];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main(){
    int cnt = 0;
    for(int i = 0;i<4;i++)for(int j = 0;j<5;j++)
    if(map[i][j]&&!visited[i][j]){
        bfs(i,j);
        cnt++;
    }
    cout<<cnt<<"\n";
    system("PAUSE");
    return 0;
}
void bfs(int x, int y){
    queue<pair<int,int> >  q;
    q.push({x,y});
    visited[x][y]=true;
    while(!q.empty()){
        int tx = q.front().first;
        int ty = q.front().second;
        q.pop();
        for(int i = 0;i<4;i++){
            int nx = tx+dx[i];
            int ny = ty+dy[i];
            if(!check(nx,ny))continue;
            visited[nx][ny]=true;
            q.push({nx,ny});
        }
    }
}
bool check(int x, int y){
    if(x>=0&&x<4&&y>=0&&y<5&&!visited[x][y]&&map[x][y])return true;
    return false;
}