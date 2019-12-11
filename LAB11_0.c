#include <stdio.h> 
int main(void) 
{ 
	 struct foo_t { int x; int y; char c; char c2;  }; //12byte
	 //VS struct foo_t {  char c; int x;  char c2; int y; }; //16byte
	 /*padding  : 가장 큰 메모리를 기준으로 잡고 즉 char vs int ->int로 메모리를 잡고 변수 하나씩 넣음. 4byte초과해서 넣을수는 없으니
	 char - int 나오면 메모리 하나 늘리고 char- char 나오면 int 메모리하나에 때려 넣음*/
	struct foo_t data; 
	struct foo_t *ptr = &data, *ptr2; 

	ptr2 = ptr;
	ptr2++;

	// 나) 
	printf("sizeof data is = %d\n", sizeof(data));  //a) 

	printf("data의 첫 주소값은 %d\n", &data);    //b) 

	printf("data.x 첫 주소값은 %d\n", &data.x);   //c) b와 같음

	printf("data.y 두 번째 주소값은 %d\n", &data.y); //c')

	printf("ptr이 가르키는 주소값은 %d\n", ptr);  //d) 

	printf("ptr2가 가르키는 주소값은 %d\n", ptr2);//e)

	return; 
}