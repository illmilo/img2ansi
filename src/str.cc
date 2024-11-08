#include "str.hh"

namespace maf {

// https://stackoverflow.com/questions/3418231/replace-part-of-a-string-with-another-string
void ReplaceAll(str &s, const str &from, const str &to) {
  if (from.empty())
    return;
  size_t start_pos = 0;
  while ((start_pos = s.find(from, start_pos)) != str::npos) {
    s.replace(start_pos, from.length(), to);
    start_pos += to.length(); // In case 'to' contains 'from', like replacing
                              // 'x' with 'yx'
  }
}

} // namespace maf
