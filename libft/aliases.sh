eval "$(ssh-agent -s)"  &&  ssh-add /home/kali/.ssh/key

alias cl="make re && gcc -Wall -Wextra -Werror ./main/main.c libft.a && make clean"

alias cld="make fclean && make so && mv *.so ./main/  && gcc -Wall -Wextra -Werror main/main.c main/libft.so && make clean"

alias clr="rm /home/kali/Desktop/libft/libft/*.{o,a,so,out}"

alias run="echo Output : && ./a.out"

alias brightness="xrandr --output eDP-1 --brightness"

alias crun="cl && run"

alias norminette="python3 /home/kali/.local/lib/python3.11/site-packages/norminette/__main__.py "
alias nf="norminette -R CheckForbiddenSourceHeader"

alias header="cat ~/Desktop/intra_c/header.txt >> "

alias cc="cc -Wall -Wextra -Werror"

alias cdrun="cld && run"

export PATH=$PATH:/home/kali/Desktop/libft
