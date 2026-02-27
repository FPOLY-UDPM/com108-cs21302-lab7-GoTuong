/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       []
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD
//  Input: Nhập vào username và password
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main()
{
    char username[100];
    char password[100];

    char correctUser[] = "admin";
    char correctPass[] = "123456";

    printf("Nhap username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;

    printf("Nhap password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;

    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0)
    {
        printf("Dang nhap thanh cong\n");
    }
    else
    {
        printf("Dang nhap khong thanh cong\n");
    }

    return 0;
}