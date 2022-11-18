c++ -Wall -Wextra -Werror *.cpp -o main
./main | cat -e
# leaks --atExit -- ./main | cat -e

rm main
