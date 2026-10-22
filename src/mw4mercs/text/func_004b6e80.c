/*
 * FUN_004B6E80 (51 B) — Getter: reads 4 fields from this+0x154/0x158/0x15c/0x160
 * into 4 output pointer params. __thiscall (ECX=this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004b6e80(void)
{
    __asm {
        MOV EAX, dword ptr [ECX + 0x15c]
        MOV EDX, dword ptr [ESP + 0x4]
        MOV dword ptr [EDX], EAX
        MOV EAX, dword ptr [ECX + 0x160]
        MOV EDX, dword ptr [ESP + 0x8]
        MOV dword ptr [EDX], EAX
        MOV EAX, dword ptr [ECX + 0x154]
        MOV EDX, dword ptr [ESP + 0xC]
        MOV dword ptr [EDX], EAX
        MOV EAX, dword ptr [ECX + 0x158]
        MOV ECX, dword ptr [ESP + 0x10]
        MOV dword ptr [ECX], EAX
        RET 0x10
    }
}
