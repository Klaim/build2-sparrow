#include <sstream>
#include <stdexcept>

#include <sparrow/version.hpp>
#include <sparrow/sparrow.hpp>

#undef NDEBUG
#include <cassert>

int main ()
{
  using namespace std;
  using namespace sparrow;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
