// SPDX-FileCopyrightText: Copyright (c) 2022 Anton Shatokhin
// SPDX-License-Identifier: MIT

#ifndef LIFE_CHECK_H
#define LIFE_CHECK_H

#include <bits/stdc++.h>
#include <string>
using namespace std;

class Check {
public:
  Check(){};
  static bool has_x(string const &s);
  static bool is_d(pair<string, string> const &parts);
};
#endif  // LIFE_CHECK_H
