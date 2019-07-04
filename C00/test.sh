norminette $(find . -name "ft*") -R CheckForbiddenSourceHeader ;
echo '\n';
gcc test.c -Wall -Wextra -Werror;
