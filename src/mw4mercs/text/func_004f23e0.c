/*
 * FUN_004f23e0 (71 B) -- MLR/Adept scale-and-propagate (__thiscall, RET 4,
 * 1 float stack param). Scales param_1 by g_007b4358 (if mode==0) or
 * g_007b435c (if mode==4), stores to [this+0x28], then walks a linked list
 * at [this+0x8] calling FUN_004ec300 on each non-null node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ec300(void);

extern float g_007b4358;   /* _DAT_007b4358 */
extern float g_007b435c;   /* _DAT_007b435c */

__declspec(naked) void func_004f23e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x20]
        test    eax, eax
        jnz     l_f3
        fld     dword ptr [g_007b4358]
        fmul    dword ptr [esp + 0x4]
        jmp     l_08
    l_f3:
        cmp     eax, 4
        jnz     l_04
        fld     dword ptr [g_007b435c]
        fmul    dword ptr [esp + 0x4]
        jmp     l_08
    l_04:
        fld     dword ptr [esp + 0x4]
    l_08:
        push    esi
        fstp    dword ptr [ecx + 0x28]
        mov     esi, dword ptr [ecx + 0x8]
    l_0f:
        test    esi, esi
        jz      l_23
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      l_23
        call    FUN_004ec300
        jmp     l_0f
    l_23:
        pop     esi
        ret     4
    }
}
