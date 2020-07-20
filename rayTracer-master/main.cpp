#include <fstream>

int main(){
    //create the file stream
    std::ofstream myFileStream;

    //create the file to output to; in this case, a ppm file
    myFileStream.open("firstRender.ppm");

    //set the dimensions of the image
    int nx = 2000;
    int ny = 1000;
    int nz = 0;

    //set up the ppm file
    myFileStream << "P3\n" << nx << " " << ny << "\n255\n";

    //this basically draws the image, line by line like a printer, from the bottom up
    for(int j = ny-1; j >= 0; j--){
    //starts from bottom to top
        for(int i = 0; i < nx; i++){
        //from left to right
            float r = float(i) / float(nx);
            float g = float(j) / float(ny);
            float b = 0.2;
            int ir = int(255.99*r);
            int ig = int(255.99*g);
            int ib = int(255.99*b);
            myFileStream << ir << " " << ig << " " << ib << std::endl;
        }
    }

    //close the file stream
    myFileStream.close();
    return 0;
}
