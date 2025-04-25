#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multi[2][2] = {
        {1,2}, {1,2}
    };

    int linhaTamanho = sizeof(multi) / sizeof(multi[0]);
    int colunaTamanho = sizeof(multi[0]) / sizeof(multi[0][0]);

    for(int i = 0; i < linhaTamanho; i++){
        for(int j = 0; j < colunaTamanho; j++){
            printf("%d\n", multi[i][j]);
        }
    }

    return 0;
}