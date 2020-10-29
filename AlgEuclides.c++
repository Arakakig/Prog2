#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
pid_t pid;
/* cria um processo-filho */
pid = fork();
if (pid < 0) { /* um erro ocorreu */
fprintf(stderr, “Fork Failed”);
return 1;
}
else if (pid == 0) { /* processo-filho */
execlp(“/bin/ls”,”ls”,NULL);
}
else { /* processo-pai */
/* o pai esperará que o filho seja concluído */
wait(NULL);
printf(“Child Complete”);
}
return 0;
}

