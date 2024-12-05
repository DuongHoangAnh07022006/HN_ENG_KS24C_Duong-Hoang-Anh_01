#include <stdio.h>
int main ()
{
int a, b, arr[100], c, d,temp;
	do
	{
		printf ("                menu\n");
		printf ("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf ("2.In ra giá tri cac phan tu dang quan li\n");
        printf ("3.Dem so luong cac nguyen to co trong mang\n");
        printf ("4.Tim gia tri nho thu hai trong mang\n");
        printf ("5.Them mot phan ti vao vi tri ngau nhien trong mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao\n");
        printf ("6.Xoa phan tu tai mot vi tri cu the\n");
        printf ("7.Sap xep mang theo thu tu giam dan\n");
        printf ("8.Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong\n");
        printf ("9.Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat co o trong mang\n");
        printf ("10.Dao nguoc thu tu cua cac phan tu trong mang\n");
        printf ("11.Thoat");
        printf ("Moi ban chon:\n");
        scanf("%d",&a);
        switch (a)
		{
			case 1:
			printf ("moi ban nhap do dai cua mang :");
			scanf ("%d",&b);
			arr[b];
			for (int i=0; i<b; i++)
			{
				printf ("moi ban nhap gia tri thu %d:", i+1);
				scanf ("%d", &arr[i]);
			 } 
			 printf ("\n");
			 break;
			case 2:
			for (int i=0; i<b; i++)
			{
				printf ("arr[%d]=%d ",i,arr[i]);
			}
			break;
			case 3:
			printf ("cac so nguyen to trong mang la:");
			printf ("\n");
			for (int i=0; i<b; i++) 
			{
				if (arr[i]<10)
				{
					switch (arr[i])
					{
						case 1:
							printf ("%d ",arr[i]);
							break;
						case 2:
						printf ("%d ",arr[i]);
							break;
						case 3:
						printf ("%d ",arr[i]);
							break;
						case 5:
						printf ("%d ",arr[i]);
							break;
						case 7:
						printf ("%d ",arr[i]);
							break;				
					}
				} else if (arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0)
				{
					printf ("%d ",arr[i]);
							break;
				}	
			}
			printf ("\n");
			break;
			case 4:
			
			case 5:
			    c=0;
		        d=0;
		    	printf ("moi nhap phan tu muon them:");
		    	scanf ("%d", &c);
		    	printf ("moi nhap vi tri muon them:");
		    	scanf ("%d",&d);
		    	if (d<0 || d>b)
		    	{
		    		printf ("khong hop le");
				} else 
				{
					for (int i=b; i>=d; i--)
		    	 {
		    		arr[i]=arr[i-1];
				 }
			    	arr[d]=c;
				    b++;
				   for (int i=0; i<b; i++)
		    	 {
		    		printf ("%d ",arr[i]);
				 }
				}
	               		printf ("\n");
	         break; 
	        case 6:
			 for (int i=0; i<b; i++)
			{
				printf ("%d ",arr[i]);
			 } 
			 printf ("\n");
			 d=0;
			  	printf ("moi nhap vi tri muon xoa:");
		    	scanf ("%d",&d);
		    	if (d<0 || d>b)
		    	{
		    		printf ("khong hop le");
				} else
				{
					for (int i=d-1; i<b; i++)
		    	 {
		    		arr[i]=arr[i+1];
			    	}
			    	b--;
				 for (int i=0; i<b; i++)
		    	 {
		    		printf ("%d ",arr[i]);
				 }
				}
			 printf ("\n");  
			 break;
			case 7:
			for (int i=0; i<b-1; i++)
			 {
			 	for (int j=0; j<b-1-i; j++)
			 	{
			 		if (arr[j+1]<arr[j])
			 		{
			 			temp=arr[j];
			 			arr[j]=arr[j+1];
			 			arr[j+1]=temp;
					 }
				 }
					  } 
					 for (int i=0; i<b; i++)
			       {
			    	printf ("%d ",arr[i]);
			       } 
			printf ("\n");
			break;	
			case 8:
				c=0;
				d=-1;
				printf ("moi nhap phan tu muon tim:");
		    	scanf ("%d", &c);
			 	for (int i=0; i<b; i++)
			{
				if (c==arr[i])
				{
					d=i;
					printf ("gia tri %d muon tim o vi tri thu %d",c,i+1);
					printf ("\n"); 
				}
			 } 
			 if (d==-1)
			 {
			 	printf ("vi tri khong ton tai trong mang");
			 }
			 printf ("\n");  		
			 break;
			case 11:
			 	return 1;
			default :
				printf ("khong hop le");
				break;								       
	    }
    }while(a > 0 && a <11);
	

}
