#include <iomanip>
#include <iostream>
#include <limits>
#include <fstream>
#include <vector>

#include "ITSReconstruction/CA/Definitions.h"
#include "ITSReconstruction/CA/IOUtils.h"
#include "ITSReconstruction/CA/Tracker.h"

#if defined HAVE_VALGRIND
# include <valgrind/callgrind.h>
#endif

#if TRACKINGITSU_GPU_MODE
# include "ITSReconstruction/CA/gpu/Utils.h"
#endif

using namespace o2::ITS::CA;

std::string getDirectory(const std::string& fname)
{
  size_t pos = fname.find_last_of("\\/");
  return (std::string::npos == pos) ? "" : fname.substr(0, pos + 1);
}

int main(int argc, char** argv)
{

#if TRACKINGITSU_CUDA_MODE
	std::cout << ">> CUDA MODE"<< std::endl;
#elif TRACKINGITSU_OCL_MODE
	std::cout << ">> OCL MODE"<< std::endl;
#else
	std::cout << ">> CPU MODE"<< std::endl;
#endif

  std::cout << "END" << std::endl;
  return 0;
}

