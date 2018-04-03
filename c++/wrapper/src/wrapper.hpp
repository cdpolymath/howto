

class Vector
{
  public:

    Vector(std::size_t const size = 0) = 0;

    std::size_t const & size() const = 0;    

};


class VectorLinalg : public Vector
{
  public:

    VectorLinalg(std::size_t const size);

    std::size_t const & size() const;

  private:

    linalg::Vector wrapped_;

};
