/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       []
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI
//  Input: Nhập 5 chuỗi bất kỳ
//  Output: Thứ tự các chuỗi đã được sắp xếp

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][100];
    char temp[100];

    for (int i = 0; i < 5; i++)
    {
        printf("Nhap chuoi thu %d: ", i + 1);
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = 0;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Cac chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}