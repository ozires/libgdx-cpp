
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

#ifndef GDX_CPP_SCENES_SCENE2D_ANIMATIONACTION_HPP_
#define GDX_CPP_SCENES_SCENE2D_ANIMATIONACTION_HPP_

#include "Action.hpp"
#include "Interpolator.hpp"

namespace gdx_cpp {
namespace scenes {
namespace scene2d {

class Actor;

class AnimationAction: public Action {
public:
    bool isDone ();
    void finish ();
    AnimationAction* setInterpolator (gdx_cpp::scenes::scene2d::Interpolator* interpolator);
    Actor* getTarget ();
    void reset ();
    AnimationAction();
    
protected:
    float createInterpolatedAlpha (float delta);
    float duration;
    float invDuration;
    float taken;
    Actor* target;
    bool done;
    Interpolator* interpolator;
};

} // namespace gdx_cpp
} // namespace scenes
} // namespace scene2d

#endif // GDX_CPP_SCENES_SCENE2D_ANIMATIONACTION_HPP_
