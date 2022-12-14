#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
    int box1Height, box1Width, box1Length;
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    cout << "Enter Box 1 Height : ";
    cin >> box1.Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.Length;
    
     cout << "Enter Box 2 Height : ";
    cin >> box2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.Length;
    
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length);
             
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the Volume() function here
int volume(int height, int width, int length){
  return height * width * length;
}