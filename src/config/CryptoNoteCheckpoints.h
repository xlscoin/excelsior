// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};


const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {1,       "e3799f32f6bae3fff920fd691df868524846ecb30970725ab85bca0b6429bc62"},
  {100,     "76283b2eebcab28af58336281e800147aab8044116303e14e49375a82cec1119"},
  {500,     "83c2550a1bcc45ed8266074016e5794f0dc984f0d5e1301d3453365f315397dc"},
  {1000,    "5673ee0f47ad995c0abf8c82dd8f5f75ec4a4a13c0cf96c272fd89cdc63e0f74"},
  {5000,    "b7c0527aa9d1c3775732155ab2d4b8e5449f6a0a3934ada76d72460597408c7f"},
  {10000,   "9953d7a11d5ce7f721bef6c86848a30275a068fb97c4d6c75276b5f535579b4a"},
  {15000,   "9e9847c918f79559efbd00fce469093781c5c7f62a3b2b966d95df9564eaea52"},
  {20000,   "1119cbaa64f3747330b5408650ac4beb702a693a537257fc457c742ab371affa"},
  {25000,   "1056b1e56cf0ce3f66ff9e03caf4e8baaebea5f3bda9eff1a3b3c44568643c42"},
  {30000,   "955198e561bd1b103687aba139c1963dcfbe972eee4e9cc128b63ed2671f805f"},
  {35000,   "3ae706ee7e1a5b185e83ddbccdc5972168c6ab204ed463d8d3a65a6f54c52b41"},
  {40000,   "7b8460880d1248726e98d59c809a50caf0e5bc1a2a51c3a9e3247f7b78966fe9"},
  {45000,   "dccd2ef00d8b28519611616004404fd45ca9bc7a381aed42597c67f046d80d67"},
  {50000,   "6815c83c4edf6304e4c956f37c0a869eb7cafc396d5d7c2b0c01b66c375da15d"},
};
}
