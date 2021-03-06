FROM ubuntu:focal

RUN export DEBIAN_FRONTEND=noninteractive && \
    apt-get -y update && \
    apt-get -y upgrade && \
    apt-get -y install autoconf-archive \
                       automake \
                       g++ \
                       gcc \
                       git \
                       gperf \
                       libasio-dev \
                       libboost-all-dev \
                       libc-ares-dev \
                       libcppunit-dev \
                       libdb++-dev \
                       libgloox-dev \
                       libmysqlclient-dev \
                       libnetxx-dev \
                       libpcre3-dev \
                       libpopt-dev \
                       libpq-dev \
                       libqpid-proton-cpp12-dev \
                       libradcli-dev \
                       libsipxtapi-dev \
                       libsnmp-dev \
                       libsoci-dev \
                       libssl-dev \
                       libtelepathy-qt5-dev \
                       libtool \
                       libxerces-c-dev \
                       make \
                       pkg-config \
                       python3-cxx-dev \
                       tar \
                       xxd && \
    adduser --system --uid 1000 jenkins

WORKDIR /root

ADD https://github.com/cisco/libsrtp/archive/v1.6.0.tar.gz /root/
RUN tar -xf v1.6.0.tar.gz && \
    rm v1.6.0.tar.gz && \
    cd libsrtp-1.6.0 && \
    ./configure --prefix=/usr && \
    make && \
    make install && \
    cd .. && \
    rm -fr libsrtp-1.6.0

ENV CPATH="/usr/include/postgresql:${CPATH}"

USER jenkins
WORKDIR /home/jenkins
