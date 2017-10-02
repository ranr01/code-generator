
#include <string>
#include <pybind11/pybind11.h>

namespace py = pybind11;

std::string my_name("Example");

void bind_textcomponent(py::module& );

PYBIND11_MODULE(example,m){

  m.attr("name") = my_name;

  bind_textcomponent(m);

}
