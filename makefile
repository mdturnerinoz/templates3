CXXFLAGS := -g -O0
CXX      := g++
SRC      := templates.cpp
EXE      := templates
RM       := rm -fr 
all : $(EXE)
$(EXE) : $(SRC)
clean  :
	$(RM) $(EXE) *~ *.dSYM/
run : all
	@./$(EXE)



