#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Function to get CPU usage percentage
double GetCPULoad()
{
  std::ifstream statFile("/proc/stat");
  std::string line;

  if (std::getline(statFile, line))
  {
    std::istringstream iss(line);
    std::string cpuLabel;
    long user, nice, system, idle;

    iss >> cpuLabel >> user >> nice >> system >> idle;

    long total = user + nice + system + idle;
    long idleTime = idle;

    double cpuUsage = 100.0 * (1.0 - static_cast<double>(idleTime) / total);
    return cpuUsage;
  }

  return -1.0; // Error
}

// Function to get RAM usage in MB
size_t GetRAMUsage()
{
  std::ifstream statFile("/proc/self/status");
  std::string line;

  while (std::getline(statFile, line))
  {
    if (line.find("VmRSS:") != std::string::npos)
    {
      std::istringstream iss(line);
      std::string label;
      size_t ramUsage;

      iss >> label >> ramUsage;

      return ramUsage; // VmRSS is in kilobytes
    }
  }

  return -1; // Error
}

int main()
{
  // Get and display CPU usage
  double cpuUsage = GetCPULoad();
  if (cpuUsage >= 0)
  {
    std::cout << "CPU Usage: " << cpuUsage << "%" << std::endl;
  }
  else
  {
    std::cerr << "Error getting CPU usage." << std::endl;
  }

  // Get and display RAM usage
  size_t ramUsage = GetRAMUsage();
  if (ramUsage >= 0)
  {
    std::cout << "RAM Usage: " << ramUsage << " KB" << std::endl;
  }
  else
  {
    std::cerr << "Error getting RAM usage." << std::endl;
  }

  return 0;
}
