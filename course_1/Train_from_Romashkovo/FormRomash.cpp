#include "FormRomash.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProbRomashkovo::FormRomash Form;
    Application::Run(%Form);
}