#!/bin/bash
g++ test-udf-data.cpp -I /usr/local/include/opencv4 -std=c++11 -L /usr/local/lib/ -lopencv_core -o test-udf-data.bin
g++ test-load-data.cpp -I /usr/local/include/opencv4 -std=c++11 -L /usr/local/lib/ -lopencv_core -o test-load-data.bin
