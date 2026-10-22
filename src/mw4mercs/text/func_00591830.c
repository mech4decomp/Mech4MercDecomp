/* FUN_00591830 - 11 bytes, __thiscall */
/* Sets vtable at [ecx] to 0x007823F4, then tail-calls FUN_005F07E0 */

extern void __cdecl FUN_005f07e0(void);

__declspec(naked) void FUN_00591830(void)
{
    __asm {
        MOV  dword ptr [ECX], 0x007823F4
        JMP  FUN_005f07e0
    }
}
