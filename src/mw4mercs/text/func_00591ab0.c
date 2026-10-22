/* FUN_00591AB0 - 72 bytes, __thiscall */
/* Constructor: calls FUN_005F35F0, zeroes fields, sets vtable, returns this */

extern void __cdecl FUN_005f35f0(void);

__declspec(naked) void FUN_00591ab0(void)
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
        CALL FUN_005f35f0
        XOR  EAX, EAX
        MOV  dword ptr [ESI + 0x520], EAX
        MOV  dword ptr [ESI + 0x524], EAX
        MOV  dword ptr [ESI + 0x514], EAX
        MOV  dword ptr [ESI], 0x782590
        MOV  dword ptr [ESI + 0x51C], 0xFFFFFFFF
        MOV  EAX, ESI
        POP  ESI
        RET  0x10
    }
}
