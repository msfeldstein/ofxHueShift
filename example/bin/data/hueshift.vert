uniform mat4 modelViewMatrix;
uniform mat4 projectionMatrix;
uniform mat4 textureMatrix;
uniform mat4 modelViewProjectionMatrix;
 
attribute vec4 position;
attribute vec4 color;
attribute vec4 normal;
attribute vec2 texcoord;

varying vec2 varyingtexcoord;
 
void main(){
    varyingtexcoord = vec2(texcoord.x, texcoord.y);
    gl_Position = modelViewProjectionMatrix * position;
}