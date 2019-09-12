/*每一步都要判断奇偶*/
#include <iostream>
using namespace std;
int main(){
	int a;
	int cnt = 0;
	scanf("%d",&a);
	while(a != 1){				
		if(a % 2 != 0){
			a = 3 * a + 1; 
		}
		a /= 2;
		cnt++;
	}
	printf("%d\n",cnt);
	return 0;
} 
