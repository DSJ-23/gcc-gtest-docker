FROM gcc:4.9
RUN apt-get update && apt-get -y install cmake
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp

RUN cmake CMakeLists.txt
RUN make

# RUN sleep 3600
# RUN gcc -o myapp main.c
CMD ["./main"]