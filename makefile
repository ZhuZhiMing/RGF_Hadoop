CXX=g++
BIN_DIR = bin
BIN_NAME = rgf
TARGET = $(BIN_DIR)/$(BIN_NAME)
CXXFLAGS = -Isrc/com -Isrc/tet_tools -O2

all:  $(TARGET)

OBJ=obj
OBJDIR:=$(OBJ) $(OBJ)/tet $(OBJ)/com

# Add .d to Make's recognized suffixes.
SUFFIXES += .d

#We don't need to clean up when we're making these targets
NODEPS:=clean

#Find all the C++ files in the src/ directory
SOURCES:=$(shell find src -name "*.cpp")
#Objects we'd like to build
OBJECTS:=$(patsubst src/%.cpp,$(OBJ)/%.o,$(SOURCES))
#These are the dependency files, which make will clean up after it creates them
DEPFILES:=$(patsubst src/%.cpp,$(OBJ)/%.d,$(SOURCES))

#Don't create dependencies when we're cleaning, for instance
ifeq (0, $(words $(findstring $(MAKECMDGOALS), $(NODEPS))))
#Chances are, these files don't exist.  GMake will create them and
#clean up automatically afterwards
  -include $(DEPFILES)
endif


#This is the rule for creating the dependency files
$(OBJ)/%.d: src/%.cpp
	$(CXX) $(CXXFLAGS) -MM -MT '$(patsubst src/%.cpp,$(OBJ)/%.o,$<)' $< -MF $@

#This rule does the compilation
$(OBJ)/%.o: src/%.cpp $(OBJ)/%.d
	$(CXX) $(CXXFLAGS) -o $@ -c $<

$(OBJECTS): | $(OBJDIR)
$(DEPFILES): | $(OBJDIR)

# directory
$(OBJDIR):
	mkdir -p $(OBJDIR)
	mkdir -p $(BIN_DIR)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $+ 

clean: 
	rm -rf $(OBJ)/*
	rm -rf $(BIN_DIR)/*

one: clean
	g++ $(SOURCES) $(CXXFLAGS) -o $(TARGET)

run:
	perl test/call_exe.pl ./bin/rgf train test/sample/train
