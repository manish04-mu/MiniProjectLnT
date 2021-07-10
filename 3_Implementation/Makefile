SRC = vendingmachine.c
INC = inc

vendingmachine.exe : $(SRC) 
	gcc $^ -I$(INC) -o $@

run : vendingmachine.exe
	./vendingmachine.exe

clean:
	del *.exe
