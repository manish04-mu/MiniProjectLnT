SRC = vendingmachine.c
INC = inc

TEST_SRC = test_vendingmachine.c unity/unity.c
TEST_INC = unity/unity.h inc/item.h inc/cash.h inc/card.h inc/owner.h

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


vm : $(SRC)
	gcc $^ -I$(INC) -o vm.$(EXEC)

run : vm
	./vm.$(EXEC)
	
test: $(TEST_SRC)
	gcc $(TEST_SRC) $(TEST_INC) -o test_vm.$(EXEC)
	./test_vm.$(EXEC)

clean:
	del *.$(EXEC)
	
coverageCheck: vm
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(SRC) $(TEST_INC) -o vm.$(EXEC)
	./vm.$(EXEC)	
