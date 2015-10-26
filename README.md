A simple ofShader class that lets you rotate the hues of an image.

Usage:
```
// Wrap any draw calls in ofxHueShader::begin() and ofxHueShader::end()
shiftShader.begin();
// Amount of hue shift from 0-1
shiftShader.setUniform1f("amount", 0.3);
sunsetImage.draw(0, 0);
shiftShader.end();
```

hsv2rgb code found from sam hocevar's stackexchange post: http://gamedev.stackexchange.com/a/59808  Thanks Sam!

![Example](/animation.gif)