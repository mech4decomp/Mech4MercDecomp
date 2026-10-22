/*
 * func_004AD9E0 - thiscall wrapper (stdcall, ret 8)
 * Calls FUN_004ad510 then FUN_004ada10 with FPU result
 */

extern void __cdecl FUN_004ad510(void);
extern void __cdecl FUN_004ada10(void);

__declspec(naked) void func_004AD9E0()
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    esi
        push    eax
        mov     esi, ecx
        push    eax
        call    FUN_004ad510
        mov     eax, dword ptr [esp + 0xc]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        mov     ecx, esi
        call    FUN_004ada10
        pop     esi
        ret     8
    }
}
