#ifndef ExistsParameter_hxx
#define ExistsParameter_hxx

#include <sip2/sipstack/Parameter.hxx>
#include <iostream>

namespace Vocal2
{

class ExistsParameter : public Parameter
{
   public:
      ExistsParameter(ParameterTypes::Type, const char* startData, unsigned int dataSize);
      ExistsParameter(ParameterTypes::Type type);

      bool& value();
      virtual Parameter* clone() const;
      virtual std::ostream& encode(std::ostream& stream) const;

   private:
      friend std::ostream& operator<<(std::ostream&, ExistsParameter&);
      bool mValue;
};

}


#endif
