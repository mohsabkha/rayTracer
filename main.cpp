#include <iostream>
#include <fstream>
#include "vec3d.h"

int main (){
    std::ofstream outputToFile;
    outputToFile.open("helloGraphics.ppm");
    int nx = 2000;
    int ny = 1000;
    vec3d myVec = vec3d();

    outputToFile << "P3\n" << nx << " " << ny << "\n255\n";
    for(int j = ny-1; j >= 0; j--){
        for(int i = 0; i < nx; i++){
            float r = float(i) / float(nx);
            float g = float(j) / float(ny);
            float b = 0.2;
            int ir = int(255.99*r);
            int ig = int(255.99*g);
            int ib = int(255.99*b);
            outputToFile << ir << " " << ig << " " << ib << std::endl;
        }
    }
    outputToFile.close();
}