# our local base image
FROM ubuntu
 
LABEL description="Container for cpp dev"
 
# install build dependencies
RUN apt-get update && apt-get install -y g++ gdb valgrind git rsync zip openssh-server make
 
# configure SSH for communication with Visual Studio
RUN mkdir -p /var/run/sshd
 
RUN echo 'PasswordAuthentication yes' >> /etc/ssh/sshd_config && \
   ssh-keygen -A
 
# expose port 22
EXPOSE 22
