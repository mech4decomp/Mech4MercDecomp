/*
 * FUN_004AEDC0 (170 B) — __thiscall float min/max with scale.
 * Reads this+8 as scale factor, calls FUN_004ade60(this+0xc, &a, &b),
 * multiplies a,b by scale, then computes min/max into *param_1/*param_2.
 * RET 0x8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004ade60(void);

__declspec(naked) void __fastcall FUN_004aedc0(float *param_1, float *param_2)
{
    __asm {
        sub     esp, 0x0c
        mov     eax, dword ptr [ecx + 8]
        lea     edx, [esp + 8]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00  /* __emit: mov [esp+0],eax — MSVC6 drops zero disp (89 04 24) */
        push    edx
        lea     eax, [esp + 8]
        push    eax
        add     ecx, 0x0c
        call    FUN_004ade60
        fld     dword ptr [esp + 4]
        __asm _emit 0xD8 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x00  /* __emit: fmul [esp+0] — MSVC6 drops zero disp (D8 0C 24) */
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        fld     st(0)
        fstp    dword ptr [edx]
        fld     st(0)
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 8]
        __asm _emit 0xD8 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x00  /* __emit: fmul [esp+0] — MSVC6 drops zero disp (D8 0C 24) */
        fst     dword ptr [esp + 0x14]
        fld     st(1)
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_else1
        fstp    dword ptr [ecx]
        jmp     l_cont1
    l_else1:
        fcom
        fnstsw  ax
        test    ah, 0x41
        jnz     l_skip1
        fstp    dword ptr [edx]
        jmp     l_cont1
    l_skip1:
        fstp    st(0)
    l_cont1:
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 1
        jz      l_else2
        fstp    dword ptr [ecx]
        jmp     l_cont2
    l_else2:
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_skip2
        fstp    dword ptr [edx]
        jmp     l_cont2
    l_skip2:
        fstp    st(0)
    l_cont2:
        fld     dword ptr [esp + 0x14]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 1
        jz      l_else3
        fstp    dword ptr [ecx]
        add     esp, 0x0c
        ret     8
    l_else3:
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_skip3
        fstp    dword ptr [edx]
        add     esp, 0x0c
        ret     8
    l_skip3:
        fstp    st(0)
        add     esp, 0x0c
        ret     8
    }
}
