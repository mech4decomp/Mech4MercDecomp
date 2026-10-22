/* Auto-generated inline asm for FUN_005917d0 (0x005917D0) */

extern void __stdcall FUN_005f0740(void);

__declspec(naked) void FUN_005917d0(void)
{
    
__asm {
MOV  EAX, dword ptr [ESP + 0x10]
        MOV  EDX, dword ptr [ESP + 0x8]
        PUSH ESI
        PUSH EAX
        MOV  EAX, dword ptr [ESP + 0xC]
        MOV  ESI, ECX
        MOV  ECX, dword ptr [ESP + 0x14]
        PUSH ECX
        PUSH EDX
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_005f0740
        MOV  dword ptr [ESI], 0x007823F4
        MOV  EAX, ESI
        POP  ESI
        RET  0x10
    }


}
