FROM gcc:4.9
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp
RUN sleep 3600
# RUN gcc -o myapp main.c
# CMD ["./myapp"]