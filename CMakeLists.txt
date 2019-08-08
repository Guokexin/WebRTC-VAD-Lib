cmake_minimum_required(VERSION 2.8)
project(vad)

SET(LIBVAD_SRC vad_process.c vad.c)
ADD_LIBRARY(vad SHARED ${LIBVAD_SRC})
