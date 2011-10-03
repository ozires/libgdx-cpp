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


#include "AppController.h"

#import <UIKit/UIKit.h>
#import "EAGLView.h"
#import "IosGdxViewController.h"

#import <gdx-cpp/Gdx.hpp>
#import <OpenGLES/EAGL.h>

#include "init.cpp"

@implementation AppController

#pragma mark -
#pragma mark Application lifecycle

@synthesize window;
@synthesize viewController;

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions {
	self.window.rootViewController = self.viewController;
	
	initializeGdxApplication();
	
	return YES;
}

- (void) applicationWillResignActive:(UIApplication*) application {
	
	
}


@end