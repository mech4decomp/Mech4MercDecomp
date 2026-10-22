/*
 * func_0067BF50 - thiscall wrapper
 * Calls FUN_0061acf0(0x10), then FUN_0061ad20(eax)
 */

extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);

__declspec(naked) void func_0067BF50()
{
    __asm {
        push    0x10
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        ret
    }
}
