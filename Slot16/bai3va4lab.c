#include<stdio.h>
#include<string.h>

typedef struct Sinhvien
{
	char ten[25];
	float diemThi;
}Sinhvien;

int main(void)
{
	Sinhvien danhSachSinhVien[20];

	for(int i=0;i<20;i++)
	{
		printf("\nNhập tên sinh viên thứ %i : \n",i+1);
		scanf("%s",danhSachSinhVien[i].ten);
		printf("\nNhập điểm sinh viên thứ %i : \n",i+1);
		scanf("%f",&danhSachSinhVien[i].diemThi);
	}

	for (int i = 0; i < 19; i++){
        for (int j = i + 1; j < 20; j++)
        {
            if (strcmp(danhSachSinhVien[i].ten, danhSachSinhVien[j].ten) > 0)
            {
                Sinhvien temp = danhSachSinhVien[i];
                danhSachSinhVien[i] = danhSachSinhVien[j];
                danhSachSinhVien[j] = temp;
            }
            else if (strcmp(danhSachSinhVien[i].ten, danhSachSinhVien[j].ten) == 0 && danhSachSinhVien[i].diemThi < danhSachSinhVien[j].diemThi)
            {
                Sinhvien temp = danhSachSinhVien[i];
                danhSachSinhVien[i] = danhSachSinhVien[j];
                danhSachSinhVien[j] = temp;
            }
        }
    }

    printf("\nThông tin sinh viên sau khi sắp xếp\n");

    for(int i=0;i<20;i++)
    {
    	printf("\nSinh viên thứ %i : ",i+1);
    	printf("\nTên : %s",danhSachSinhVien[i].ten);
    	printf("\nĐiểm thi : %f",danhSachSinhVien[i].diemThi);
    }

}