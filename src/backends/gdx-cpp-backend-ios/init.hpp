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
 */

#ifndef GDX_CPP_BACKENDS_IOS_INIT_CPP
#define GDX_CPP_BACKENDS_IOS_INIT_CPP

#include <gdx-cpp/ApplicationListener.hpp>
#include <string>

extern "C" void gdxcpp_init(int argc, char** argv);
extern "C" void gdxcpp_create_application(gdx_cpp::ApplicationListener* listener, const std::string& applicationName, int width, int height);
extern "C" void gdxcpp_initialize_application();
extern "C" void gdxcpp_create_listener();

#endif //GDX_CPP_BACKENDS_IOS_INIT_CPP