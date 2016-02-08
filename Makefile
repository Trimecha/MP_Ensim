SRCDIR = src
TESTDIR = test
BINDIR = bin
SRC = $(SRCDIR)/Dvector.cpp $(SRCDIR)/Dvector.h
SRC_FILES = $(wildcard $(SRCDIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRCDIR)/%.cpp, $(BINDIR)/Dvector.o, $(SRC))

CXX = g++
CXXFLAGS = -Wall -g -pedantic

all: $(BINDIR) $(BINDIR)/Dvector.o $(BINDIR)/Test1 $(BINDIR)/Test2 $(BINDIR)/Test3 

#-------------------------------------------------------------------------------------------------------------#
$(BINDIR):
	@mkdir $(BINDIR)

#-------------------------------------------------------------------------------------------------------------#
$(BINDIR)/Dvector.o: $(SRC)
	$(CXX) -c $(CXXFLAGS) $< -o $@

#-------------------------------------------------------------------------------------------------------------#
.PHONY: clean check doc 

check: $(BINDIR) $(BINDIR)/Test1 $(BINDIR)/Test2 $(BINDIR)/Test3 
	@echo "\nCi-dessous le résultat de l'éxécution des différents tests:\n 	+ Test1\n 	+ Test2"
	@echo " 	+ Test3 sur le fichier test/tp1_test1.txt\n 	+ Test3 sur le fichier test/tp1_test2.txt"	
	@echo " 	+ Test3 sur un fichier inexistant\n 	+ Test3 sans argument"	
	@echo "\n\n     ********************** Test 1 **********************"
	./$(BINDIR)/Test1

	@echo "\n\n     ********************** Test 2 **********************"
	./$(BINDIR)/Test2

	@echo "\n\n     ********************** Test3 sur le fichier test/tp1_test1.txt **********************"
	./$(BINDIR)/Test3 test/tp1_test1.txt 

	@echo "\n\n     ********************** Test3 sur le fichier test/tp1_test2.txt **********************"
	./$(BINDIR)/Test3 test/tp1_test2.txt > test/tp1_test2.res
	@echo "Le résultat est généré dans le fichier test/tp1_test2.res"

	@echo "\n\n     ********************** Test3 sur un fichier inexistant **********************"
	./$(BINDIR)/Test3 fichier_non_existant.txt

	@echo "\n\n     ********************** Test3 sans argument **********************"
	./$(BINDIR)/Test3 
$(BINDIR)/Test1: $(OBJ_FILES) $(TESTDIR)/Test1.cpp
	$(CXX) -g $^ -o $@
$(BINDIR)/Test2: $(OBJ_FILES) $(TESTDIR)/Test2.cpp
	$(CXX) -g $^ -o $@
$(BINDIR)/Test3: $(OBJ_FILES) $(TESTDIR)/Test3.cpp
	$(CXX) -g $^ -o $@

#-------------------------------------------------------------------------------------------------------------#
doc:
	doxygen doc/doxyfilerc
	@rm doc/doxygen_sqlite3.db
	firefox doc/html/index.html

#-------------------------------------------------------------------------------------------------------------#
clean:	
	@rm -rf doc/html bin test/tp1_test2.res