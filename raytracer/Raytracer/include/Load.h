#ifndef LOAD_H_
#define LOAD_H_
#include <eigen3/Eigen/Geometry>
#include <vector>

class Load{
public:
    Load()=default;
    Load(float x, float y, float z);

    Eigen::Vector3f getPosition();


private:
    std::vector<Light> lights;
    std::vector<Object> objects;
    Camera camera;
};

#endif
