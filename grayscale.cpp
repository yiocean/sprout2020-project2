#include <iostream>
#include <cstdlib>
#include "bmp_handler.h"

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
    
    /*for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            cout << "( ";
            cout << bmp.bitmap[i][j][R] << " ";
            cout << bmp.bitmap[i][j][G] << " ";
            cout << bmp.bitmap[i][j][B] << " ";
            cout << ") ";

            /*
            cout << "( ";
            for(int c = 2; c >= 0; c--)
                cout << bmp.bitmap[i][j][c] << " ";
            cout << ") ";
            
        }
        cout << endl;
    }*/

	for(int i=0 ; i<height ; i++){
		for(int j=0 ; j<width ; j++){
			int x;
			x = ((bmp.bitmap[i][j][R] * 0.3) + (bmp.bitmap[i][j][G] * 0.59) + (bmp.bitmap[i][j][B] * 0.11));
			//cout << x << " ";
			if(x >= 0 && x <= 64){
				cout << "%";
			}else if(x > 64 && x <= 84){
				cout << "&";
			}else if(x > 84 && x <= 112){
				cout << "*";
			}else if(x > 112 && x <= 122){
				cout << "|";
			}else if(x > 122 && x <= 140){
				cout << "+";
			}else if(x > 140 && x <= 150){
				cout << "#";
			}else if(x > 150 && x <= 165){
				cout << "^";
			}
			else if(x > 165 && x <= 255){
				cout << "-";
			}
		}
		cout << endl;
	}
    return 0;
}

