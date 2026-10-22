/*
 * FUN_004f04a0 (277 B) - __thiscall (RET 0x8). MLR/Adept state-engine
 * helper: reads a 5-float vector from this->[0x24]+0x20c..0x21c, builds a
 * matrix via FUN_004206b0, computes a 2D UV-ish ratio via FUN_0041c7d0,
 * normalizes against a threshold, and returns 1 if the resulting coords
 * fall within [0x76c5b0, 0x76d064] on both axes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041c7d0(void);
extern float g_7b220c;   /* 0x007b220c threshold constant */
extern float g_76c5b0;   /* 0x0076c5b0 lower bound */
extern float g_76d064;   /* 0x0076d064 upper bound */

__declspec(naked) int func_004f04a0(void)
{
    __asm {
        sub     esp, 0x50
        mov     eax, dword ptr [ecx + 0x24]
        mov     ecx, dword ptr [eax + 0x20c]
        mov     edx, dword ptr [eax + 0x210]
        __emit 0x89  /* __emit: MSVC6 drops 00 disp byte for mov [esp],ecx (89 0C 24); ref needs 89 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [eax + 0x214]
        mov     dword ptr [esp + 0x4], ecx
        mov     ecx, dword ptr [eax + 0x21c]
        mov     dword ptr [esp + 0xc], edx
        mov     edx, dword ptr [eax + 0x218]
        add     eax, 0x80
        mov     dword ptr [esp + 0x8], ecx
        push    eax
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x14], edx
        call    FUN_004206b0
        mov     eax, dword ptr [esp + 0x58]
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_0041c7d0
        fld     dword ptr [esp + 0x1c]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_4f052d
        fld     dword ptr [esp + 0x8]
        fdiv    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x18]
        fstp    st(0)
    L_4f052d:
        fld     dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x54]
        __emit 0xD8  /* __emit: MSVC6 drops 00 disp byte for fsub [esp] (D8 24 24); ref needs D8 64 24 00 */
        __emit 0x64
        __emit 0x24
        __emit 0x00
        fld     dword ptr [esp + 0xc]
        __emit 0xD8  /* __emit: MSVC6 drops 00 disp byte for fsub [esp] (D8 24 24); ref needs D8 64 24 00 */
        __emit 0x64
        __emit 0x24
        __emit 0x00
        fdivp   st(1), st(0)
        fld     st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x4]
        fdivp   st(1), st(0)
        fstp    dword ptr [esp + 0x58]
        mov     ecx, dword ptr [esp + 0x58]
        fcom    dword ptr [g_76c5b0]
        mov     dword ptr [eax + 0x4], ecx
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4f05ab
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4f05ad
        fld     dword ptr [esp + 0x58]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4f05ad
        fld     dword ptr [esp + 0x58]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4f05ad
        mov     eax, 0x1
        add     esp, 0x50
        ret     0x8
    L_4f05ab:
        fstp    st(0)
    L_4f05ad:
        xor     eax, eax
        add     esp, 0x50
        ret     0x8
    }
}
