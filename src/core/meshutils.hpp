#include "mathutils.hpp"
#include <vector>

struct Vertex
{
  math::vec3 position = math::vec3();
  math::vec4 color;
  math::vec2 textureCoordinate;
  
  Vertex (math::vec3 position)
  {
    this->position=position;
    this->color=math::vec4(0.5f,0.5f,0.5f,0.5f);
    this->textureCoordinate=math::vec2(0.0f,0.0f);
    
  }
  Vertex (math::vec3 position,math::vec4 color ){
    this->position =position;
    this->color=color;
    this->textureCoordinate=math::vec2(0.0f,0.0f);
    
  }
  Vertex (math::vec3 position,math::vec4 color, math::vec2 textureCoordinate){
    this->position =position;
    this->color=color;
    this->textureCoordinate=textureCoordinate;
    
  }
};

struct Mesh{
  std::vector<Vertex> vertexlist;
  
  
};
