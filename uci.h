/*
    Laser, a UCI chess engine written in C++11.
    Copyright 2015-2017 Jeffrey An and Michael An

    Laser is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Laser is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Laser.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __UCI_H__
#define __UCI_H__

#include <cstdint>
#include <string>

const uint64_t DEFAULT_HASH_SIZE = 16;
const uint64_t MIN_HASH_SIZE = 1;
const uint64_t MAX_HASH_SIZE = 1024 * 1024;
const int DEFAULT_MULTI_PV = 1;
const int MIN_MULTI_PV = 1;
const int MAX_MULTI_PV = 256;
const int DEFAULT_THREADS = 1;
const int MIN_THREADS = 1;
const int MAX_THREADS = 128;
const int DEFAULT_BUFFER_TIME = 300;
const int MIN_BUFFER_TIME = 0;
const int MAX_BUFFER_TIME = 5000;
const int DEFAULT_EVAL_SCALE = 100;
const int MIN_EVAL_SCALE = 0;
const int MAX_EVAL_SCALE = 500;

Board fenToBoard(std::string s);
std::string boardToFEN(Board &board);

#endif
