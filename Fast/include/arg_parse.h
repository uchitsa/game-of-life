// SPDX-FileCopyrightText: Copyright (c) 2022 Anton Shatokhin
// SPDX-License-Identifier: MIT

#ifndef LIFE_PARSE_H
#define LIFE_PARSE_H

#include <bits/stdc++.h>
#include <string>
using namespace std;

class Parse {
public:
  Parse(){};
  static pair<int, int> get_size(string const &size_str);
  static vector<pair<int, int>> get_alive(
    vector<string> const &a, int n, int m);
};

#endif  // LIFE_PARSE_H
