#include <main.h>

int main(int argc, char *argv[])
{
  CHello myGreeter;

  myGreeter.sayHello("terev - Test Runner and Evaluator");

  std::string xmlFileName = "./data/test01.xml";

  Poco::AutoPtr<Poco::XML::Document> pXMLDoc = xmlutils::parseFile(xmlFileName);
  if (pXMLDoc)
  {
    std::cout << "Parsed file \"" << xmlFileName << "\"\n";
    const Poco::XML::DocumentType *pDocType = pXMLDoc->doctype();
  }
  else
  {
    std::cout << "Parsing file \"" << xmlFileName << "\" failed!\n";
  }

  return 0;
} // int main(int argc, char *argv[])