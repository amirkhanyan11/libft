
alias cl="make re && gcc -Wall -Wextra -Werror main/main.c libft.a && make clean"

alias clr="rm ../*.o && clear"

alias run="echo Output : && ./a.out"

alias brightness="xrandr --output eDP-1 --brightness"

alias cld="make fclean && make so && mv *.so ./main/  && gcc -Wall -Wextra -Werror main/main.c main/libft.so && make clean"

alias crun="cl && run"

alias cdrun="cld && run"
