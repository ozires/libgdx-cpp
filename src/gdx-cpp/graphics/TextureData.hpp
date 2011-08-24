
/*
    Copyright 2011 Aevum Software aevum @ aevumlab.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
    @author Ozires Bortolon de Faria ozires@aevumlab.com
*/

#ifndef GDX_CPP_GRAPHICS_TEXTUREDATA_HPP_
#define GDX_CPP_GRAPHICS_TEXTUREDATA_HPP_

#include "gdx-cpp/utils/Aliases.hpp"
#include "Pixmap.hpp"

namespace gdx_cpp {
namespace graphics {

class TextureData {
public:
    typedef ref_ptr_maker< TextureData >::type ptr;
    
    enum TextureDataType {
      Pixmap,
      Compressed
    };
    
    virtual   TextureDataType getType () = 0;
    virtual   graphics::Pixmap::ptr getPixmap () = 0;
    virtual   bool disposePixmap () = 0;
    virtual   void uploadCompressedData () = 0;
    virtual   int getWidth () = 0;
    virtual   int getHeight () = 0;
    virtual   Pixmap::Format& getFormat () = 0;
    virtual   bool useMipMaps () = 0;
    virtual   bool isManaged () = 0;

protected:


private:

};

} // namespace gdx_cpp
} // namespace graphics

#endif // GDX_CPP_GRAPHICS_TEXTUREDATA_HPP_
