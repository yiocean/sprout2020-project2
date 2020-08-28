#include <iostream>
#include <cstdlib>
#include "bmp_handler.h"
#include <cmath>
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
    
   
	int mask[3][3] = {{0,1,0},{1,-4,1},{0,1,0}};//遮罩 
	/*for(int i=0 ; i < 3 ; i++){
		for(int j=0 ; j<3 ; j++){
			cout << mask[i][j] << " ";
		}
		cout << endl;
	}*/
	//int boundary[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
	int dx[9] = {0, 1, 1, 0, -1, -1, -1, 0, 1};//找附近8格的x座標 
    int dy[9] = {0, 0, -1, -1, -1, 0, 1, 1, 1};//找附近8格的y座標
    
    int mer[700][700];
    for(int k=0 ; k<height ; k++){
    	for(int p=0 ; p<width ; p++){
    		int x;
			x = ((bmp.bitmap[k][p][R] * 0.3) + (bmp.bitmap[k][p][G] * 0.59) + (bmp.bitmap[k][p][B] * 0.11));
			mer[k][p] = x;
		}
	}
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
            // or you can use loop to iterate through rgb
            cout << "( ";
            for(int c = 2; c >= 0; c--)
                cout << bmp.bitmap[i][j][c] << " ";
            cout << ") ";
            
        }
        cout << endl;
    }*/
	/*for(int i=0 ; i<height ; i++){
		for(int j=0 ; j<width ; j++){
			cout << mer[i][j] << " ";
		} 
		cout << endl;
	}*/
	//int newlast[700][700];
	int last[700][700];
	int sum;
	for(int i=0 ; i<height ; i++){
		for(int j=0 ; j<width ; j++){
			sum = 0;
			//cout << sum << " ";
			//cout << i << " ";
			//cout << j << " ";
			//cout << endl;
			for(int dir=0 ; dir<9 ; dir++){
				//i+=dy[dir];
				//j+=dx[dir];
				/*if(mer[i][j]-mer[i+dy[dir]][j+dx[dir]] > 26 && mer[i][j] <= 253){
					mer[i][j] = 500;
				}*/
				//判斷是否超出邊界 
				if(i+dy[dir] >= 0 && j+dx[dir] >= 0 && i+dy[dir] <= height && j+dx[dir] <= width){
					//cout << i+dy[dir] <<" " << j+dx[dir] << endl;
					//cout << mask[1+dy[dir]][1+dx[dir]] << " " << mer[i+dy[dir]][j+dx[dir]];
					//cout << endl;
					sum += (mask[1+dy[dir]][1+dx[dir]] * mer[i+dy[dir]][j+dx[dir]]);
				}
			}
			
			if(sum > 50){
				cout << "*";
			}else{
				cout << " ";
			}
			//last[i][j] = sum;
			/*if(sum > 300){
				mer[i][j] = 500;
			}*/

		}
		cout << endl;
	}
	/*for(int y=0 ; y<height ; y++){
		for(int x=0 ; x<width ; x++){
			if(mer[y][x] > 1000){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}*/
	
    return 0;
}
