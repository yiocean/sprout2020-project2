#include <iostream>
#include <windows.h> 
#include <mmsystem.h>
#include <cstdlib>
#include "bmp_handler.h"
#include <cmath>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

const int R = 2, G =1 , B =0 ;
int main(){
	PlaySound(TEXT("thunder_clap.wav"),NULL,SND_SYNC);
	system("chcp 65001");
	string str, ans;
	cout << "Change RGB to Xterm Number !!!" << endl;
	cout << "Do you want to start ?" << endl;
	cout << "(A) Yes!!! I am so excited." << endl << "(B) No......" << endl << "(cin A or B)";
	cin >> ans;
	if(ans == "B"){
		PlaySound(TEXT("soap5.wav"),NULL,SND_SYNC);
		cout << "So sad...QQ";
		exit(0);
	}else if(ans == "A"){
		PlaySound(TEXT("drum.wav"),NULL,SND_SYNC);
		cout << "which RGB do you want to change ?" << endl;
		int Rcolor, Gcolor, Bcolor, R_num, G_num, B_num, sum;
		cout << "Plase enyer R's value :";
		cin >> Rcolor;
		cout << "Plase enyer G's value :";
		cin >> Gcolor;
		cout << "Plase enyer B's value :";
		cin >> Bcolor;
		cout << endl;
		/*cout << "\e[48;5;" << 15 << "m";
		cout << setw(3) << " ";
    	cout << "\e[0m" << endl;
    	cout << "\e[48;5;" << 15 << "m";
		cout << setw(1) << " ";
    	cout << "\e[0m";*/
		if(Rcolor == 0 && Gcolor == 0 && Bcolor == 0){
			cout << "Xterm Number is : " << 0 << endl;
    		cout << "The color is : " << "\e[48;5;" << 0 << "m";
			cout << setw(1) << " ";
    		cout << "\e[0m";
		}else if(Rcolor == 128 && Gcolor == 0 && Bcolor == 0){
			cout << "Xterm Number is : " << 1 << endl;
			cout << "The color is : " << "\e[48;5;" << 1 << "m";
       		cout << setw(1) << " ";
    		cout << "\e[0m";
		}else if(Rcolor == 0 && Gcolor == 128 && Bcolor == 0){
			cout << "Xterm Number is : " << 2 << endl;
			cout << "The color is : " << "\e[48;5;" << 2 << "m";
    		cout << setw(1) << " ";
      		cout << "\e[0m";
		}else if(Rcolor == 128 && Gcolor == 128 && Bcolor == 0){
			cout << "Xterm Number is : " << 3 << endl;
			cout << "The color is : " << "\e[48;5;" << 3 << "m";
       		cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 0 && Gcolor == 0 && Bcolor == 128){
			cout << "Xterm Number is : " << 4 << endl;
			cout << "The color is : " << "\e[48;5;" << 4 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 128 && Gcolor == 0 && Bcolor == 128){
			cout << "Xterm Number is : " << 5 << endl;
			cout << "The color is : " << "\e[48;5;" << 5 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 0 && Gcolor == 128 && Bcolor == 128){
			cout << "Xterm Number is : " << 6 << endl;
			cout << "The color is : " << "\e[48;5;" << 6 << "m";
       		cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 192 && Gcolor == 192 && Bcolor == 192){
			cout << "Xterm Number is : " << 7 << endl;
			cout << "The color is : " << "\e[48;5;" << 7 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 128 && Gcolor == 128 && Bcolor == 128){
			cout << "Xterm Number is : " << 8 << endl;
			cout << "The color is : " << "\e[48;5;" << 8 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 255 && Gcolor == 0 && Bcolor == 0){
			cout << "Xterm Number is : " << 9 << endl;
			cout << "The color is : " << "\e[48;5;" << 9 << "m";
       		cout << setw(1) << " ";
    		cout << "\e[0m";
		}else if(Rcolor == 0 && Gcolor == 255 && Bcolor == 0){
			cout << "Xterm Number is : " << 10 << endl;
			cout << "The color is : " << "\e[48;5;" << 10 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 255 && Gcolor == 255 && Bcolor == 0){
			cout << "Xterm Number is : " << 11 << endl;
			cout << "The color is : " << "\e[48;5;" << 11 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 0 && Gcolor == 0 && Bcolor == 255){
			cout << "Xterm Number is : " << 12 << endl;
			cout << "The color is : " << "\e[48;5;" << 12 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 255 && Gcolor == 0 && Bcolor == 255){
			cout << "Xterm Number is : " << 13 << endl;
			cout << "The color is : " << "\e[48;5;" << 13 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 0 && Gcolor == 255 && Bcolor == 255){
			cout << "Xterm Number is : " << 14 << endl;
			cout << "The color is : " << "\e[48;5;" << 14 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 255 && Gcolor == 255 && Bcolor == 255){
			cout << "Xterm Number is : " << 15 << endl;
			cout << "The color is : " << "\e[48;5;" << 15 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 8 && Gcolor == 8 && Bcolor == 8){
			cout << "Xterm Number is : " << 232 << endl;
			cout << "The color is : " << "\e[48;5;" << 232 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 18 && Gcolor == 18 && Bcolor == 18){
			cout << "Xterm Number is : " << 233 << endl;
			cout << "The color is : " << "\e[48;5;" << 233 << "m";
       		cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 28 && Gcolor == 28 && Bcolor == 28){
			cout << "Xterm Number is : " << 234 << endl;
			cout << "The color is : " << "\e[48;5;" << 234 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 38 && Gcolor == 38 && Bcolor == 38){
			cout << "Xterm Number is : " << 235 << endl;
			cout << "The color is : " << "\e[48;5;" << 235 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 48 && Gcolor == 48 && Bcolor == 48){
			cout << "Xterm Number is : " << 236 << endl;
			cout << "The color is : " << "\e[48;5;" << 236 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 58 && Gcolor == 58 && Bcolor == 58){
			cout << "Xterm Number is : " << 237 << endl;
			cout << "The color is : " << "\e[48;5;" << 237 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 68 && Gcolor == 68 && Bcolor == 68){
			cout << "Xterm Number is : " << 238 << endl;
			cout << "The color is : " << "\e[48;5;" << 238 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 78 && Gcolor == 78 && Bcolor == 78){
			cout << "Xterm Number is : " << 239 << endl;
			cout << "The color is : " << "\e[48;5;" << 239 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 88 && Gcolor == 88 && Bcolor == 88){
			cout << "Xterm Number is : " << 240 << endl;
			cout << "The color is : " << "\e[48;5;" << 240 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 98 && Gcolor == 98 && Bcolor == 98){
			cout << "Xterm Number is : " << 241 << endl;
			cout << "The color is : " << "\e[48;5;" << 241 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 108 && Gcolor == 108 && Bcolor == 108){
			cout << "Xterm Number is : " << 242 << endl;
			cout << "The color is : " << "\e[48;5;" << 242 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 118 && Gcolor == 118 && Bcolor == 118){
			cout << "Xterm Number is : " << 243 << endl;
			cout << "The color is : " << "\e[48;5;" << 243 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 128 && Gcolor == 128 && Bcolor == 128){
			cout << "Xterm Number is : " << 244 << endl;
			cout << "The color is : " << "\e[48;5;" << 244 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 138 && Gcolor == 138 && Bcolor == 138){
			cout << "Xterm Number is : " << 245 << endl;
			cout << "The color is : " << "\e[48;5;" << 245 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 148 && Gcolor == 148 && Bcolor == 148){
			cout << "Xterm Number is : " << 246 << endl;
			cout << "The color is : " << "\e[48;5;" << 246 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 158 && Gcolor == 158 && Bcolor == 158){
			cout << "Xterm Number is : " << 247 << endl;
			cout << "The color is : " << "\e[48;5;" << 247 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 168 && Gcolor == 168 && Bcolor == 168){
			cout << "Xterm Number is : " << 248 << endl;
			cout << "The color is : " << "\e[48;5;" << 248 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 178 && Gcolor == 178 && Bcolor == 178){
			cout << "Xterm Number is : " << 249 << endl;
			cout << "The color is : " << "\e[48;5;" << 249 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 188 && Gcolor == 188 && Bcolor == 188){
			cout << "Xterm Number is : " << 250 << endl;
			cout << "The color is : " << "\e[48;5;" << 250 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 198 && Gcolor == 198 && Bcolor == 198){
			cout << "Xterm Number is : " << 251 << endl;
			cout << "The color is : " << "\e[48;5;" << 251 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 208 && Gcolor == 208 && Bcolor == 208){
			cout << "Xterm Number is : " << 252 << endl;
			cout << "The color is : " << "\e[48;5;" << 252 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 218 && Gcolor == 218 && Bcolor == 218){
			cout << "Xterm Number is : " << 253 << endl;
			cout << "The color is : " << "\e[48;5;" << 253 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 228 && Gcolor == 228 && Bcolor == 228){
			cout << "Xterm Number is : " << 254 << endl;
			cout << "The color is : " << "\e[48;5;" << 254 << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}else if(Rcolor == 238 && Gcolor == 238 && Bcolor == 238){
			cout << "Xterm Number is : " << 255 << endl;
			cout << "The color is : " << "\e[48;5;" << 255 << "m";
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
			cout << "Xterm Number is : " << sum << endl;
			cout << "The color is : " << "\e[48;5;" << sum << "m";
        	cout << setw(1) << " ";
       		cout << "\e[0m";
		}
	}
	return 0;
}
