/* FUN_005919B0 - 11 bytes, __thiscall */
/* Sets vtable at [ecx] to 0x007824C8, then tail-calls FUN_005F07E0 */

extern void __cdecl FUN_005f07e0(void);

__declspec(naked) void FUN_005919b0(void)
{
    __asm {
        MOV  dword ptr [ECX], 0x7824C8
        JMP  FUN_005f07e0
    }
}
