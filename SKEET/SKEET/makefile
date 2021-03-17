###############################################################
# Program:
#     Project 09, Skeet
#     Brother Alvey, CS165
# Author:
#     Gabriel Ikpaetuk
# Summary:
#     This program simulates skeet shooting.
#     implemented using OOP in c++
# Above and Beyond
#     Added a couple of features including a welcome message
#	  and a random starting point for the two types
#	  of birds
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o rifle.o bird.o bullet.o sacredBird.o toughBird.o flyingObject.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o rifle.o bird.o bullet.o sacredBird.o toughBird.o flyingObject.o $(LFLAGS)

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
#	 bird.o		   Handles the birds in the game
#	 bullet.o	   Handles the bullets in the game
#	 sacredBird.o	   Handles the bullets in the game
#	 toughBird.o	   Handles the bullets in the game
#	 flyingObject.o	   Handles the bullets in the game
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h point.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

game.o: game.cpp uiDraw.h uiInteract.h point.h rifle.h bullet.h bird.h
	g++ -c game.cpp

driver.o: game.h uiInteract.h driver.cpp
	g++ -c driver.cpp

rifle.o: rifle.h point.h uiDraw.h rifle.cpp
	g++ -c rifle.cpp

bird.o: bird.h point.h uiDraw.h velocity.h point.h flyingObject.h bird.cpp
	g++ -c bird.cpp

bullet.o: bullet.h point.h bullet.cpp
	g++ -c bullet.cpp

velocity.o: velocity.h velocity.cpp
	g++ -c velocity.cpp

flyingObject.o: flyingObject.h point.h uiDraw.h velocity.h flyingObject.cpp
	g++ -c flyingObject.cpp

sacredBird.o: sacredBird.h bird.h sacredBird.cpp
	g++ -c sacredBird.cpp
	
toughBird.o: toughBird.h bird.h toughBird.cpp
	g++ -c toughBird.cpp
#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################


###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
