#include <Python.h>

int main(int argc, char *argv[])
{
  Py_SetProgramName(argv[0]);
  Py_Initialize();
  PyRun_SimpleString("print 'Hello Python!'\n");
  Py_Finalize();cl_13_c_call_python
  return 0;
}

