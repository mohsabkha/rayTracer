#include <math.h>
#include <stdlib.h>
#include <iostream>

class vec3d {
    public:
        vec3d() {}
        vec3d(float e0, float e1, float e2){
            e[0] = e0;
            e[1] = e1;
            e[2] = e2;
        }
        float e[3];
        //coordinate functions
        inline float x() const {
            return e[0];
        }
        inline float y() const {
            return e[1];
        }
        inline float z() const {
            return e[2];
        }
        //rgb functions
        inline float r(){
            return e[0];
        }
        inline float g(){
            return e[1];
        }
        inline float b(){
            return e[2];
        }
    
    //operator overloading
    inline const vec3d& operator+() const {
        return *this;
    }
    inline vec3d operator-() const {
        return vec3d(-e[0], -e[1], -e[2]);
    }
    inline float operator[](int i) const{
        return e[i];
    }
    inline float& operator[](int i){
        return e[i];
    }
    inline vec3d& operator+=(const vec3d &v2);
    inline vec3d& operator-=(const vec3d &v2);
    inline vec3d& operator*=(const vec3d &v2);
    inline vec3d& operator/=(const vec3d &v2);
    inline vec3d& operator*=(const float t);
    inline vec3d& operator/=(const float t);

    //properties
    inline float length() const {
        return sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]);
    }
    inline float squaredLength() const {
        return e[0]*e[0] + e[1]*e[1] + e[2]*e[2];
    }
    inline void makeUnitVector();
};

inline std::istream& operator>>(std::istream &is, vec3d &t){
    is >> t.e[0] >> t.e[1] >> t.e[2];
    return is;
}
inline std::ostream& operator<<(std::ostream &os, const vec3d &t){
    os << t.e[0] << t.e[1] << t.e[2];
    return os;
}
inline void vec3d::makeUnitVector() {
    float k = 1.0/sqrt(e[0]*e[0] + e[1]*e[1] + e[2]*e[2]);
    e[0] *= k;
    e[1] *= k;
    e[2] *= k;
}
    // inline vec3d& operator+=(const vec3d &v2){
        
    // }
    // inline vec3d& operator-=(const vec3d &v2){

    // }
    // inline vec3d& operator*=(const vec3d &v2){

    // }
    // inline vec3d& operator/=(const vec3d &v2){

    // }
    // inline vec3d& operator*=(const float t){

    // }
    // inline vec3d& operator/=(const float t){

    // }