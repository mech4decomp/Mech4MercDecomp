/* func_0047fec0 - MLR PMesh base constructor (__thiscall, RET 0x4) */

extern void __cdecl FUN_00480ab0(void);
extern char g_76f628[];

__declspec(naked) void func_0047fec0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00480ab0
        xor     eax, eax
        mov     dword ptr [esi+0x48], eax
        mov     dword ptr [esi+0x4c], eax
        mov     dword ptr [esi], offset g_76f628
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
