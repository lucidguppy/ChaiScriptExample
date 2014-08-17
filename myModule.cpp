#include <chaiscript/chaiscript.hpp>
#include <string>

std::string helloWorld()
{
  return "Hello World";
}

int addTwoNumbers(int a, int b)
{
  return a + b;
}

CHAISCRIPT_MODULE_EXPORT chaiscript::ModulePtr create_chaiscript_module_myModule()
{
  chaiscript::ModulePtr m(new chaiscript::Module());
  m->add(chaiscript::fun(helloWorld), "helloWorld");
  m->add(chaiscript::fun(addTwoNumbers), "addTwoNumbers");
  return m;
}
