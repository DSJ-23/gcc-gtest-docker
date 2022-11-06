FROM gcc:latest
# RUN apt-get install software-properties-common 
# RUN add-apt-repository ppa:george-edison55/cmake-3.x
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp

RUN apt-get update && apt-get -y install cmake

RUN cmake CMakeLists.txt
RUN make

# RUN gcc -o myapp main.c

CMD ["./build/main"]