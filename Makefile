CC			=	gcc

SRC_FILES    =  Desafio1.c \
                Desafio2.c \
                Desafio3.c \
                Desafio4.c \
                Desafio5.c

SRC			=	$(SRC_FILES))
OBJ			=	$(subst .c,.o,$(SRC_FILES)))

# $(SRC):		$(OBJ_PATH)%.o:	$(SRC_PATH)%.c
# 					mkdir -p $(OBJ_PATH)
# 					$(CC) -c $< -o $@

all:			$(OBJ)
				$(CC) $(SRC_FILES) -o $(OBJ)

clean:          rf -f $(OBJ)

re:				clean all

.PHONY:			all, clean,  re