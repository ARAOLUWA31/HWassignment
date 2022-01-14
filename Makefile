CXX=g++
CPPFLAGS=-Wall -Werror

TARGET=filesize
SRCS=$(TARGET).cc

all: $(TARGET)

$(TARGET): $(SRCS) 

test: $(TARGET)
	./RUNTESTS

clean:
	rm -f $(TARGET) *.o