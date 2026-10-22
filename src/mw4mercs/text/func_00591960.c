/* FUN_00591960 - 42 bytes, __thiscall */
/* Constructor: calls FUN_005F0740, sets vtable, returns this */

extern void __cdecl FUN_005f0740(void);

__declspec(naked) void FUN_00591960(void)
{
    __asm {
        MOV  EAX, dword ptr [ESP + 0x10]
        MOV  EDX, dword ptr [ESP + 0x8]
        PUSH ESI
        PUSH EAX
        MOV  EAX, dword ptr [ESP + 0x0C]
        MOV  ESI, ECX
        MOV  ECX, dword ptr [ESP + 0x14]
        PUSH ECX
        PUSH EDX
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_005f0740
        MOV  dword ptr [ESI], 0x7824C8
        MOV  EAX, ESI
        POP  ESI
        RET  0x10
    }
}
