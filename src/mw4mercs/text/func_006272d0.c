/* FUN_006272d0 - __thiscall, 36 bytes
   ABL interpreter region. */
extern void __cdecl FUN_006f3210(void);
extern void __cdecl FUN_005bfac0(void);
extern void __cdecl FUN_00626d80(void);

__declspec(naked) void func_006272d0(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_006f3210
        mov ecx, dword ptr [esi+0x4c]
        test ecx, ecx
        jz L_e4
        call FUN_005bfac0
    L_e4:
        mov eax, dword ptr [esp+8]
        push eax
        mov ecx, esi
        call FUN_00626d80
        pop esi
        ret 4
    }
}
