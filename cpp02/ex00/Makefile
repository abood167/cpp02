Name = fixe
SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(Name)

$(Name): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(Name) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all