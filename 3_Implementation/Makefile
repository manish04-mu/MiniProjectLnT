SRC = vendingmachine.c
INC = INC

TEST_SRC = test_vendingmachine.c unity/unity.c
TEST_INC = unity/unity.h INC/item.h INC/cash.h INC/card.h INC/owner.h

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
