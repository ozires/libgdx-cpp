
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

#ifndef GDX_CPP_SCENES_SCENE2D_ACTIONS_REMOVE_HPP_
#define GDX_CPP_SCENES_SCENE2D_ACTIONS_REMOVE_HPP_

#include "gdx-cpp/scenes/scene2d/Action.hpp"
#include "ActionResetingPool.hpp"

namespace gdx_cpp {
namespace scenes {
namespace scene2d {
namespace actions {

class Remove: public gdx_cpp::scenes::scene2d::Action {
public:
    static Remove* build ();
    void setTarget (gdx_cpp::scenes::scene2d::Actor* actor);
    void act (float delta);
    bool isDone ();
    Action* copy ();
    Actor* getTarget ();
    Remove();
    
protected:    
    Actor* target;
    bool removed;

    static ActionResetingPool<Remove> pool;
    
private:

};

} // namespace gdx_cpp
} // namespace scenes
} // namespace scene2d
} // namespace actions

#endif // GDX_CPP_SCENES_SCENE2D_ACTIONS_REMOVE_HPP_
