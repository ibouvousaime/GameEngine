#include <cmath>

namespace math {
  struct  vec2 {
    float x,y;

    vec2 (){
      this->x = 0;
      this->y=0;
    }
    
    vec2 (float x,float y) {
      this->x=x;
      this->y=y;
    }
    
    vec2 operator+(vec2 b) {
      vec2 result;
      result.x = this->x+b.x;
	
      result.y= this->y+ b.y;
      return result;
    }
    vec2 operator- (vec2 b) {
      vec2 result;
      result.x=this->x-b.x;
      result.y=this->y-b.y;
      return result;
    }
    vec2 operator*(vec2 b) {
      vec2 result;
      result.x = this->x*b.x;
      result.y = this->y*b.y;
      return result;
    }
    vec2 operator*(int k) {
      vec2 result;
      result.x = this->x*k;
      result.y = this->y*k;
      return result;
    }
    vec2 operator/(vec2 b) {
      vec2 result;
      result.x = this->x/b.x;
      result.y = this->y/b.y;
      return result;
    }
    int length(vec2 a) {
      int l;
      l = sqrt(a.x*a.x+a.y*a.y);
      return l;
    }
      
    
  };

  
  
  struct  vec3{
    
    float x,y,z; 
    vec3 () {
      this->x=0;
      this->y=0;
      this->z=0; 
    }

    vec3 (vec2 a, float z) {
      this->x = a.x;
      this->y=a.y;
      this->z=z;
    }
      
    vec3 (float x, float y, float z) {
      this->x=x;
      this->y=y;
      this->z=z;
    }
    vec3 operator+(vec3 b) {
      vec3 result;
      result.x = this->x+b.x;
      result.y= this->y+ b.y;
      result.z= this->z+ b.z;
      return result;
      
    }
    vec3 operator-(vec3 b) {
      vec3 result;
      result.x=this->x-b.x;
      result.y=this->y-b.y;
      result.z=this->z-b.z;
      return result;
    }
    vec3 operator*(vec3 b) {
      vec3 result;
      result.x = this->x*b.x;
      result.y = this->y*b.y;
      result.z = this->z*b.z;
      return result;
    }
    vec3 operator*(int k) {
      vec3 result;
      result.x = this->x*k;
      result.y = this->y*k;
      result.z = this->z*k;
      return result;
    }
    vec3 operator/(vec3 b) {
      vec3 result;
      result.x = this->x/b.x;
      result.y = this->y/b.y;
      result.z = this->z/b.z;
      return result;
    }
    int length(vec3 a) {
      int l;
      l = sqrt(a.x*a.x+a.y*a.y+a.z*a.z);
      return l;
    }
  };

  struct vec4 {
    float r,g,b,a;
    vec4(){
      this->r=0;
      this->g=0;
      this->b=0;
      this->a=0;
    }
    vec4(vec2 a,vec2 b){
      this-> r=a.x;
      this->g=a.y;
      this-> b=b.x;
      this-> a=b.y; 
    }
    vec4 (vec3 a, float b){
      r=a.x;
      g=a.y;
      b=a.z;
      this->a=b;
    }
	
    vec4 (float r,float g,float b, float a) {
      this->r=r;
      this->g=g;
      this->b=b;
      this->a=a;
    }
    vec4 operator+(vec4 b) {
      vec4 result;
      result.r = this->r+b.r;
      result.g = this->g+b.g;
      result.b = this->b+b.r;
      result.a = this->a+b.a;
      return result;	
    }
    vec4 operator-(vec4 b) {
      vec4 result;
      result.r = this->r-b.r;
      result.g = this->g-b.g;
      result.b = this->b-b.r;
      result.a = this->a-b.a;
      return result;	
    }
    
    vec4 operator/(vec4 b) {
      vec4 result;
      result.r = this->r/b.r;
      result.g = this->g/b.g;
      result.b = this->b/b.r;
      result.a = this->a/b.a;
      return result;	
    }
    
    vec4 operator*(int k) {
      vec4 result;
      result.r = this->r*k;
      result.g = this->g*k;
      result.b = this->b*k;
      result.a = this->a*k;
      return result;
    }
  };
  
  struct mat4 {
    float elements[4][4];
	  
    mat4 () {
      for (int i= 0;i<4;i++) {
	for (int j= 0;i<4;i++) {
	  this->elements[i][j]=0.0f;
	}
      }      
    }
    mat4 identity () {
      mat4 result;
      for (int i= 0;i<4;i++) {
	result.elements[i][i]=1.0f;
	  
      }
      return result;
    }
    float &operator[] (int index )
    {
      return this->elements[index/4][index%4];
    }

    mat4 operator*(mat4 that) {
      mat4 result;
      for (int i = 0; i < 4; i++) {
	for (int j=0; j < 4; j++) {
	  for (int k = 0; k < 4; k++) {
	    result.elements[i][j]+= this->elements[i][j+k]*that.elements[i+k][j];
	  }
	}
      }
      return result;
    }
    mat4 translation(vec3 translationvector) {
      mat4 result= this->identity();
      result.elements[3][0]= translationvector.x;
      result.elements[3][1]= translationvector.y;
      result.elements[3][2]= translationvector.z;
      return result;
    }
    mat4 scale(vec3 scalevector) {
      mat4 result= this->identity();
      result.elements[0][0]= scalevector.x;
      result.elements[1][1]= scalevector.y;
      result.elements[2][2]= scalevector.z;
      return result;
    }
    mat4 rotate(float angle,char axis) {
      mat4 result = this->identity();
      switch (axis) {
      case 'z':
	result.elements[0][0] = cos(angle);
	result.elements[1][0] = sin(angle);
	result.elements[0][1] = -sin(angle);
	result.elements[1][1] = cos(angle);
	break;
      case 'y':
	result.elements[0][0] = cos(angle);
	result.elements[2][0] = sin(angle);
	result.elements[0][2] = -sin(angle);
	result.elements[2][2] = cos(angle);
	break;
      case 'x':
	result.elements[1][1] = cos(angle);
	result.elements[2][1] = sin(angle);
	result.elements[1][3] = -sin(angle);
	result.elements[2][3] = cos(angle);	
	break;
      
      default:
	break;
      }
      return result;
    }
    inline mat4 doublerotation (float angle,char ignoredaxis) {
      mat4 result = this->identity();
      switch (ignoredaxis) {
      case 'x': 
	result= this->rotate(angle,'y') * this->rotate(angle,'z');
	break;
      case 'y':
	result= this->rotate(angle,'x') * this->rotate(angle,'z');
	break;
      case 'z':
	result= this->rotate(angle,'x') * this->rotate(angle,'y');
	break;
      default:
	break;
      }
      return result;
    }
  };
}
