#include <iostream>
#include <cstdlib>
#include "bmp_handler.h"
#include <cmath>
#include <iomanip>
using namespace std;

const int R = 2, G =1 , B =0 ;

int main(){
#ifdef _WIN32
    system("chcp 65001");
#endif

    char filename[] = "Go12.bmp";
    BMP bmp(filename);

    cout << "successly input image : " << filename << endl;

    int height = bmp.height(), width = bmp.width();

    cout << "height = " << height << endl;
    cout << "width = " << width << endl;
    
    for(int i=0 ; i<height ; i++){
    	for(int j=0 ; j<width ; j++){
    		int Rcolor = bmp.bitmap[i][j][R];
    		int Gcolor = bmp.bitmap[i][j][G];
    		int Bcolor = bmp.bitmap[i][j][B];
    		int R_num, G_num, B_num, sum;//(R,G,B)所產生對應值 
    		//先一個一個判斷是否是我沒找到規律的部分
			//如果都不是就套有規律的公式 
    		if(Rcolor == 0 && Gcolor == 0 && Bcolor == 0){
    			cout << "\e[48;5;" << 0 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 128 && Gcolor == 0 && Bcolor == 0){
				cout << "\e[48;5;" << 1 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 0 && Gcolor == 128 && Bcolor == 0){
				cout << "\e[48;5;" << 2 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 128 && Gcolor == 128 && Bcolor == 0){
				cout << "\e[48;5;" << 3 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 0 && Gcolor == 0 && Bcolor == 128){
				cout << "\e[48;5;" << 4 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 128 && Gcolor == 0 && Bcolor == 128){
				cout << "\e[48;5;" << 5 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 0 && Gcolor == 128 && Bcolor == 128){
				cout << "\e[48;5;" << 6 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 192 && Gcolor == 192 && Bcolor == 192){
				cout << "\e[48;5;" << 7 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 128 && Gcolor == 128 && Bcolor == 128){
				cout << "\e[48;5;" << 8 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 255 && Gcolor == 0 && Bcolor == 0){
				cout << "\e[48;5;" << 9 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 0 && Gcolor == 255 && Bcolor == 0){
				cout << "\e[48;5;" << 10 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 255 && Gcolor == 255 && Bcolor == 0){
				cout << "\e[48;5;" << 11 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 0 && Gcolor == 0 && Bcolor == 255){
				cout << "\e[48;5;" << 12 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 255 && Gcolor == 0 && Bcolor == 255){
				cout << "\e[48;5;" << 13 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 0 && Gcolor == 255 && Bcolor == 255){
				cout << "\e[48;5;" << 14 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 255 && Gcolor == 255 && Bcolor == 255){
				cout << "\e[48;5;" << 15 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 8 && Gcolor == 8 && Bcolor == 8){
				cout << "\e[48;5;" << 232 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 18 && Gcolor == 18 && Bcolor == 18){
				cout << "\e[48;5;" << 233 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 28 && Gcolor == 28 && Bcolor == 28){
				cout << "\e[48;5;" << 234 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 38 && Gcolor == 38 && Bcolor == 38){
				cout << "\e[48;5;" << 235 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 48 && Gcolor == 48 && Bcolor == 48){
				cout << "\e[48;5;" << 236 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 58 && Gcolor == 58 && Bcolor == 58){
				cout << "\e[48;5;" << 237 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 68 && Gcolor == 68 && Bcolor == 68){
				cout << "\e[48;5;" << 238 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 78 && Gcolor == 78 && Bcolor == 78){
				cout << "\e[48;5;" << 239 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 88 && Gcolor == 88 && Bcolor == 88){
				cout << "\e[48;5;" << 240 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 98 && Gcolor == 98 && Bcolor == 98){
				cout << "\e[48;5;" << 241 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 108 && Gcolor == 108 && Bcolor == 108){
				cout << "\e[48;5;" << 242 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 118 && Gcolor == 118 && Bcolor == 118){
				cout << "\e[48;5;" << 243 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 128 && Gcolor == 128 && Bcolor == 128){
				cout << "\e[48;5;" << 244 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 138 && Gcolor == 138 && Bcolor == 138){
				cout << "\e[48;5;" << 245 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 148 && Gcolor == 148 && Bcolor == 148){
				cout << "\e[48;5;" << 246 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 158 && Gcolor == 158 && Bcolor == 158){
				cout << "\e[48;5;" << 247 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 168 && Gcolor == 168 && Bcolor == 168){
				cout << "\e[48;5;" << 248 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 178 && Gcolor == 178 && Bcolor == 178){
				cout << "\e[48;5;" << 249 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 188 && Gcolor == 188 && Bcolor == 188){
				cout << "\e[48;5;" << 250 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 198 && Gcolor == 198 && Bcolor == 198){
				cout << "\e[48;5;" << 251 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 208 && Gcolor == 208 && Bcolor == 208){
				cout << "\e[48;5;" << 252 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 218 && Gcolor == 218 && Bcolor == 218){
				cout << "\e[48;5;" << 253 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 228 && Gcolor == 228 && Bcolor == 228){
				cout << "\e[48;5;" << 254 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}else if(Rcolor == 238 && Gcolor == 238 && Bcolor == 238){
				cout << "\e[48;5;" << 255 << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}
			else{
				if(Rcolor == 0){
    				R_num = 0;
				}else{
					R_num = (Rcolor-55) / 40;
				}
				if(Gcolor == 0){
    				G_num = 0;
				}else{
					G_num = (Gcolor-55) / 40;
				}
				if(Bcolor == 0){
    				B_num = 0;
				}else{
					B_num = (Bcolor-55) / 40;
				}
				
				sum = (36 * R_num) + (6 * G_num) + B_num + 16;
				cout << "\e[48;5;" << sum << "m";
        		cout << setw(1) << " ";
       			cout << "\e[0m";
			}
    		
		}
		cout << endl;
	}
	
    return 0;
}
