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

alias get_testers="cd ~/Desktop/libft/libft && git clone git@github.com:Tripouille/libftTester.git tripoulle_test && git clone git@github.com:0x050f/libft-war-machine.git war-machine && cd ~/Desktop/libft && git clone git@github.com:alelievr/libft-unit-test.git unit-test"

alias delete_testers="rm -rf ~/Desktop/libft/libft/tripoulle_test ~/Desktop/libft/libft/war-machine ~/Desktop/libft/unit-test"

alias update_testers="delete_testers && get_testers"
