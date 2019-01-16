#include <hl_communication/utils.h>

#include <chrono>

using namespace std::chrono;

namespace hl_communication
{

uint64_t getTimeStamp() {
  return duration_cast<duration<uint64_t,std::micro>>(steady_clock::now().time_since_epoch()).count();
}

std::string getBaseName(const std::string & path) {
  size_t idx = path.find_last_of('/');
  if (idx == std::string::npos) {
    return path;
  }
  return path.substr(idx+1);
}

}