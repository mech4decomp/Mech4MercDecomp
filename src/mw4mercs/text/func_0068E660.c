/*
 * FUN_0068E660 (656 B) — __thiscall (RET 0x18). GOS math/geometry helper:
 * transforms a set of coordinates (subtract offsets, scale), computes
 * angles via atan2 (0x75db4a), and walks a table of entries at this+0x400004
 * accumulating a result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040CA10(void);
extern void __cdecl FUN_0075DB4A(void);
extern float g_0080DA60;
extern float g_0080DA5C;
extern float g_00788100;
extern float g_0076C5B0;
extern float g_0076D598;
extern double g_0076D970;
extern float g_0076D064;
extern float g_0076D070;

__declspec(naked) void FUN_0068E660(void)
{
    __asm {
        sub     esp, 0x14
        fld     dword ptr [esp + 0x24]
        push    ebx
        fsub    dword ptr [g_0080DA60]
        push    ebp
        push    esi
        push    edi
        fstp    dword ptr [esp + 0x34]
        mov     esi, ecx
        fld     dword ptr [esp + 0x3c]
        lea     eax, [esp + 0x28]
        fsub    dword ptr [g_0080DA5C]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        fstp    dword ptr [esp + 0x44]
        lea     ecx, [esp + 0x20]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [g_0080DA60]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [g_0080DA5C]
        fstp    dword ptr [esp + 0x38]
        call    FUN_0040CA10
        fld     dword ptr [esp + 0x34]
        or      ebp, 0xffffffff
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076C5B0]
        fnstsw  ax
        test    ah, 1
        je      L68E71E
        fld     st(0)
        fmul    dword ptr [g_0076D598]
        fstp    dword ptr [esp + 0x14]
        jmp     L68E722
L68E71E:
        fst     dword ptr [esp + 0x14]
L68E722:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076C5B0]
        fld     dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je      L68E73D
        fmul    dword ptr [g_0076D598]
L68E73D:
        fld     dword ptr [esp + 0x14]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L68E791
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fdiv    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x10]
        fcom    qword ptr [g_0076D970]
        fld     st(0)
        fnstsw  ax
        test    ah, 1
        je      L68E76D
        fmul    dword ptr [g_0076D598]
L68E76D:
        call    FUN_0075DB4A
        fcomp   dword ptr [g_0076C5B0]
        mov     edi, eax
        fnstsw  ax
        test    ah, 1
        je      L68E789
        fld     dword ptr [g_0076D598]
        jmp     L68E7DC
L68E789:
        fld     dword ptr [g_0076D064]
        jmp     L68E7DC
L68E791:
        fxch    st(1)
        fdiv    st(0), st(1)
        fxch    st(1)
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fcomp   qword ptr [g_0076D970]
        fld     dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je      L68E7B4
        fmul    dword ptr [g_0076D598]
L68E7B4:
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076C5B0]
        mov     edi, eax
        mov     dword ptr [esp + 0x10], 0xbf800000
        fnstsw  ax
        test    ah, 1
        jne     L68E7DC
        mov     dword ptr [esp + 0x10], 0x3f800000
L68E7DC:
        fld     dword ptr [esp + 0x28]
        mov     ebx, dword ptr [esi + 0x400004]
        fld     dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x28]
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x30]
        lea     esi, [eax + eax*2]
        call    FUN_0075DB4A
        test    edi, edi
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ebx + esi*4]
        fld     dword ptr [eax + edx*8]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [g_0076C5B0]
        je      L68E8C3
L68E81A:
        fxch    st(2)
        dec     edi
        fadd    st(0), st(3)
        fxch    st(2)
        fxch    st(1)
        fadd    dword ptr [esp + 0x10]
        fxch    st(1)
        fld     st(2)
        call    FUN_0075DB4A
        fld     st(1)
        mov     esi, eax
        call    FUN_0075DB4A
        lea     ecx, [esi + esi*2]
        lea     edx, [ebx + ecx*4]
        lea     ecx, [eax + eax*4]
        mov     eax, dword ptr [edx]
        shl     ecx, 3
        mov     esi, eax
        mov     esi, dword ptr [ecx + esi + 0x18]
        cmp     esi, dword ptr [ecx + eax + 0x1c]
        jne     L68E8D9
        mov     esi, dword ptr [ecx + eax + 0x1c]
        fld     dword ptr [g_0076C5B0]
        cmp     esi, -1
        je      L68E879
        cmp     ebp, -1
        jne     L68E871
        mov     ebp, dword ptr [ecx + eax + 0x1c]
        jmp     L68E8AA
L68E871:
        cmp     dword ptr [ecx + eax + 0x1c], ebp
        jne     L68E8D7
        jmp     L68E8AA
L68E879:
        mov     eax, dword ptr [edx]
        fstp    st(0)
        fld     dword ptr [ecx + eax]
        fsubr   dword ptr [esp + 0x14]
        fcom    dword ptr [g_0076C5B0]
        fnstsw  ax
        test    ah, 1
        je      L68E897
        fmul    dword ptr [g_0076D598]
L68E897:
        fmul    dword ptr [g_00788100]
        fcom    dword ptr [g_0076D070]
        fnstsw  ax
        test    ah, 1
        je      L68E8D7
L68E8AA:
        test    edi, edi
        mov     edx, dword ptr [edx]
        fld     dword ptr [ecx + edx]
        fstp    dword ptr [esp + 0x14]
        fadd    dword ptr [g_0076D064]
        faddp   st(1), st(0)
        jne     L68E81A
L68E8C3:
        fstp    st(0)
        pop     edi
        fstp    st(0)
        pop     esi
        mov     eax, ebp
        fstp    st(0)
        pop     ebp
        fstp    st(0)
        pop     ebx
        add     esp, 0x14
        ret     0x18
L68E8D7:
        fstp    st(0)
L68E8D9:
        fstp    st(0)
        pop     edi
        fstp    st(0)
        pop     esi
        fstp    st(0)
        pop     ebp
        fstp    st(0)
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x14
        ret     0x18
        nop
        nop
    }
}
