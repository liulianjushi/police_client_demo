FROM jermine/opencv:amd64-ubuntu-3.4.1
RUN apt-get update && apt-get install -y --no-install-recommends pkg-config git ca-certificates; \
    apt-get install -y --no-install-recommends autoconf automake libtool make cmake g++ unzip; \
    apt-get install -y --no-install-recommends libgflags-dev libgtest-dev;\
    apt-get install -y --no-install-recommends clang libc++-dev;\
    git clone https://github.com/grpc/grpc.git;\
    cd grpc;\
    git submodule update --init;\
    cd third_party/protobuf;\
    git submodule update --init --recursive;\
    ./autogen.sh;\
    ./configure;\
    make;\
    make check;\
    make install;\
    ldconfig;\
    which protoc;\
    protoc --version;\
    cd ../..;\
    make;\
    make install;\
    rm -rf /var/lib/apt/lists/*
