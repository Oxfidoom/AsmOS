#include <stdio.h>
#define size 1000
int sizend = 1;
int h = 0;
int cc = 0;
int ac = 0;
int main(int* a[],char* x[]){
	FILE *ap;
	char str[1];
    ap = fopen(x[1], "r");
	while(!feof(ap)){
		char buffer[size];
		fgets(buffer, size, ap);
		char z = puts(x[2]);
		for(int i = 0;i < sizend + h; i++){
			    if(buffer[i] == '.'){
					cc = 0;
					ac = 0;
				}
				else if (buffer[i] == '+'){
						for(int bb = ac;bb < cc; bb++){
						printf("E");
					}
				}
				else if(buffer[i] == '-'){
					for(int bb = ac;bb < cc; bb++){
						printf("_");
					}
				}
				else if (buffer[i] == 'f'){
					cc = cc + 5;
				}
				else if (buffer[i] == 'n'){
					cc = cc + 1;
				}
				else if (buffer[i] == 'r'){
					cc = cc + 3;
				}
				else if(buffer[i] == 'e'){
					cc = 0;
					ac = 0;
				}
				else if (buffer[i] == '='){
					printf("A");
					}
				else if(buffer[i] == ';'){
					printf("\n");
				}
				else if(buffer[i] == '>'){
					h = h + 5;
				}
				else if(buffer[i] == '<'){
					h = 0;
					sizend = 0;
				}
		}
	}
	fclose(ap);
	return 0;
}
