#include <cstdlib>
#include <vector>

namespace linalg
{

  class Vector
  {
    public:
      
      Vector(std::size_t const size);
      
    private:
     
      std::size_t size_;
      std::vector<double> values_;
  };

}
