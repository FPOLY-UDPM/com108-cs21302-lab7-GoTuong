/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       []
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI
//  Input: nhập vào 1 chuỗi
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int nguyenAm = 0, phuAm = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        char c = tolower(str[i]);

        if (isalpha(c))
        {
            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' || c == 'y')
            {
                nguyenAm++;
            }
            else
            {
                phuAm++;
            }
        }
    }

    printf("So nguyen am: %d\n", nguyenAm);
    printf("So phu am: %d\n", phuAm);

    return 0;
}