/*
 * func_005EDD00 - stdcall wrapper
 * Calls FUN_004179b0(&[esi+0x23c], [eax+0x98]), increments [esi+0x244]
 */

extern void __cdecl FUN_004179b0(void);

__declspec(naked) void func_005EDD00()
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x98]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    ecx
        lea     ecx, [esi + 0x23c]
        call    FUN_004179b0
        inc     dword ptr [esi + 0x244]
        pop     esi
        ret
    }
}
