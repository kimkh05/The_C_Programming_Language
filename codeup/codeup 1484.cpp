#include<stdio.h>
int main(){
    int Arr[101][101] = {}; 
    int n,m;
    scanf("%d %d", &n, &m);
    int x = 1;
    int i = 1;
    int j = 1; 
    int Xaxis = 1;
    int Yaxis = 1;
    for(int k = 1; k <= n*m; k++){
        Arr[i][j] = x;
        x++;
        if( j <=m && Xaxis == 1 && Yaxis == 1){
            if(j+1 <= m && Arr[i][j+1] == 0){j++;}
            else{
                i++;
                Xaxis = -1;  
            }
        }
        else if( i <=n && Xaxis == -1 && Yaxis == 1){
            if(i+1 <= n  && Arr[i+1][j] == 0){i++;}
            else{
                j--;
                
                Yaxis = -1;
            }
        }
        else if(  j >=1 && Xaxis == -1 && Yaxis == -1){
            if(j-1 > 0 && Arr[i][j-1] == 0){j--;}
            else{
                i--;
                Xaxis = 1;
            }
        }
        else if(i >=1 && Yaxis == -1 && Xaxis == 1 ){
            if(i-1 >0 & Arr[i-1][j] == 0) i--;
            else{
                j++;
                Yaxis = 1;    
            }
        }  
    }
    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= m; j++){
            printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

