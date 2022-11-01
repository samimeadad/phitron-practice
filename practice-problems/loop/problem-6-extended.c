int main(){
    int m,n;
    scanf("%d%d", &n, &m);

    if(n<m){
        for(int i=n; i<=m; i++){
            printf("%d ", i);
        }
    }
    else{
        int add_24 = m+24;
        for(int i=n; i<add_24; i++){
            printf("%d ", i);
            if(i%24==0){
                for(int i=0; i<=add_24-24; i++){
                    printf("%d ", i);
                }
                break;
            }
        }
    }
}
