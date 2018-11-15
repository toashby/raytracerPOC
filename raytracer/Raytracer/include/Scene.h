#ifndef SCENE_H_
#define SCENE_H_
#include <eigen3/Eigen/Geometry>
#include <vector>

class Scene{
public:
    Scene()=default;

private:
    std::vector<Light> lights;
    std::vector<Object> objects;
    Camera camera;
};

#endif
