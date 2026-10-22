/*
 * FUN_004AEFF0 (197 B) — Float min/max with two calls to same callee.
 * Calls FUN_004ae0c0(this+4, &a1, &b1) and FUN_004ae0c0(this+0x18, &a2, &b2),
 * then computes cross-products and min/max into *param_1/*param_2.
 * RET 0x8 (two stack params).
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_004ae0c0(void);

__declspec(naked) void __fastcall FUN_004aeff0(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, ecx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x0c]
        push    ecx
        lea     ecx, [esi + 4]
        call    FUN_004ae0c0
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x18]
        call    FUN_004ae0c0
        fld     dword ptr [esp + 0x0c]
        fmul    dword ptr [esp + 0x08]
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        pop     esi
        __asm _emit 0xD9 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x00   /* fst [esp]: MSVC6 drops 0 disp */
        fstp    dword ptr [edx]
        __asm _emit 0xD9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00   /* fld [esp]: MSVC6 drops 0 disp */
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0x0c]
        fmul    dword ptr [esp + 0x04]
        __asm _emit 0xD8 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x00   /* fcom [esp]: MSVC6 drops 0 disp */
        __asm _emit 0xDF __asm _emit 0xE0   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        test    ah, 1
        jz      l_else1
        fstp    dword ptr [ecx]
        jmp     l_cont1
    l_else1:
        __asm _emit 0xD8 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x00   /* fcom [esp]: MSVC6 drops 0 disp */
        __asm _emit 0xDF __asm _emit 0xE0   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        test    ah, 0x41
        jnz     l_skip1
        fstp    dword ptr [edx]
        jmp     l_cont1
    l_skip1:
        fstp    st(0)
    l_cont1:
        fld     dword ptr [esp + 0x08]
        fmul    dword ptr [esp + 0x10]
        fcom    dword ptr [ecx]
        __asm _emit 0xDF __asm _emit 0xE0   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        test    ah, 1
        jz      l_else2
        fstp    dword ptr [ecx]
        jmp     l_cont2
    l_else2:
        fcom    dword ptr [edx]
        __asm _emit 0xDF __asm _emit 0xE0   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        test    ah, 0x41
        jnz     l_skip2
        fstp    dword ptr [edx]
        jmp     l_cont2
    l_skip2:
        fstp    st(0)
    l_cont2:
        fld     dword ptr [esp + 0x0c]
        fmul    dword ptr [esp + 0x10]
        fcom    dword ptr [ecx]
        __asm _emit 0xDF __asm _emit 0xE0   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        test    ah, 1
        jz      l_else3
        fstp    dword ptr [ecx]
        add     esp, 0x14
        ret     8
    l_else3:
        fcom    dword ptr [edx]
        __asm _emit 0xDF __asm _emit 0xE0   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        test    ah, 0x41
        jnz     l_skip3
        fstp    dword ptr [edx]
        add     esp, 0x14
        ret     8
    l_skip3:
        fstp    st(0)
        add     esp, 0x14
        ret     8
    }
}
