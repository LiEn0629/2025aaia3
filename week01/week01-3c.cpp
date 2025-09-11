// week01-3c.cpp
# include <stdio.h> // 使用 C語言__的外掛, 負責 Input Output


int main()
{
    int n;
    scanf("%d", &n); // 使用 C語言的 scan with format 讀入
    int ans = 0;
    for(int i=0; i<=n; i++){
        ans += i*i;
    }
    printf("%d", ans); // 使用 C語言的 print with format 印出來
}