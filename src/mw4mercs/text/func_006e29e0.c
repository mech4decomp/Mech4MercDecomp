/* FUN_006e29e0 - 42 bytes, __thiscall, RET */
extern int g_007b6934;
extern void *g_0076b124;
extern void *g_0076b2d0;
__declspec(naked) void FUN_006e29e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [g_007b6934]
        lea     ecx, [eax + -0xc]
        cmp     ecx, edx
        push    esi
        jz      L_e2a08
        lea     esi, [eax + -0xc]
        push    esi
        call    dword ptr [g_0076b124]
        test    eax, eax
        jg      L_e2a08
        push    esi
        call    dword ptr [g_0076b2d0]
        add     esp, 0x4
    L_e2a08:
        pop     esi
        ret
    }
}
