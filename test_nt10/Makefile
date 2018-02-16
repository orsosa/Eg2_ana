.DELETE_ON_ERROR:

ifndef CLASTOOL
    $(error "Please set the variable CLASTOOL")
endif

ROOTCONFIG := root-config
ROOTCFLAGS := $(shell $(ROOTCONFIG) --cflags)
ROOTLDFLAGS := $(shell $(ROOTCONFIG) --ldflags)
ROOTGLIBS := $(shell $(ROOTCONFIG) --glibs)

CXX := c++
CXXFLAGS := -O2 -Wall -fPIC $(ROOTCFLAGS)
LD := c++
LDFLAGS := -O2 $(ROOTLDFLAGS)

INCLUDES := -I/user/o/${LOGNAME}/analyser/include\
            -I$(CLASTOOL)/include\
            -I/user/o/orsosa/analyser/ClasTool/NT10Reader/
            
LIBS := $(ROOTGLIBS) \
               -L$(CLASTOOL)/slib/${OS_NAME} -lNT10Reader -lClasTool -lClasBanks -lVirtualReader -lDSTReader\
               -L/user/o/${LOGNAME}/analyser/slib/ -lTIdentificator -lSpectrum

FILES := nt10test


.PHONY: all clean

all: $(FILES)

write_tree: write_tree.o


%: %.o
	@echo "Doing application " $@ 
	$(LD) $(LDFLAGS) $(LIBS) -o $@ $^

%.o: %.cxx
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@


clean:
	rm -f $(FILES:%=%.o) $(FILES)
