/* FUN_00417810 - allocates a 0x2c-byte object, initializes it via
 * FUN_00415d70(this, 0x14, param_1, param_1>>2, 0x76d570, g_7b8c14),
 * stores it in g_7b8c20.
 */
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415d70(void);
extern int g_7b8c14;
extern int g_7b8c20;

__declspec(naked) void FUN_00417810(void)
{
    __asm {
        push esi
        push 2ch
        call FUN_004084d0
        mov esi, eax
        add esp, 4
        test esi, esi
        jz L_48
        mov eax, dword ptr [g_7b8c14]
        push eax
        mov eax, dword ptr [esp+0ch]
        push 76d570h
        mov ecx, eax
        shr ecx, 2
        push ecx
        push eax
        push 14h
        mov ecx, esi
        call FUN_00415d70
        mov dword ptr [g_7b8c20], esi
        pop esi
        ret
    L_48:
        mov dword ptr [g_7b8c20], 0
        pop esi
        ret
    }
}
