/* FUN_006e2920 - 39 bytes, __cdecl, RET 0x4 */
extern int g_007b6934;
extern void *g_0076b124;
extern void *g_0076b2d0;
__declspec(naked) void FUN_006e2920(void)
{
    __asm {
        mov     eax, dword ptr [g_007b6934]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        cmp     esi, eax
        jz      L_e2943
        push    esi
        call    dword ptr [g_0076b124]
        test    eax, eax
        jg      L_e2943
        push    esi
        call    dword ptr [g_0076b2d0]
        add     esp, 0x4
    L_e2943:
        pop     esi
        ret     0x4
    }
}
