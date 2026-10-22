/*
 * FUN_004eea40 (577 B) — cdecl. MLR/Adept state-engine loader: reads a
 * stream via virtual [vtable+0x20], resolves a texture, does FPU math
 * (fsqrt, fdiv) to build a transform, and allocates/constructs a
 * 0x148-byte object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004da840(void);
extern void __cdecl FUN_0040ca10(void);
extern float g_007b220c;
extern float g_0076d064;
extern int g_008bd5d8;
extern int g_008bd5dc;
extern int g_008bd5e0;
extern int g_007da930;
extern void __cdecl FUN_004eef70(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cbb0(void);
extern float g_0076d598;
extern int g_007da884;
extern void __cdecl FUN_00492560(void);
extern int g_007daa3c;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b9b20(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004eea40(void)
{
    __asm {
        sub     esp, 0x50
        push    esi
        mov     esi, dword ptr [esp+0x58]
        mov     eax, dword ptr [esi]
        push    edi
        push    0x4
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [esp+0x60]
        mov     edi, dword ptr [edx+0x4c]
        mov     eax, dword ptr [esp+0xc]
        push    eax
        mov     ecx, edi
        call    FUN_004da840
        mov     edx, dword ptr [eax]
        lea     ecx, [esp+0x18]
        push    ecx
        push    edi
        mov     ecx, eax
        call    dword ptr [edx+0x8]
        mov     eax, dword ptr [edi+0xd8]
        mov     edx, dword ptr [eax+0x2c]
        add     eax, 0x20
        mov     dword ptr [esp+0x3c], edx
        mov     ecx, dword ptr [eax+0x1c]
        mov     dword ptr [esp+0x40], ecx
        mov     edx, dword ptr [eax+0x2c]
        lea     eax, [esp+0x3c]
        push    eax
        lea     ecx, [esp+0x1c]
        push    ecx
        lea     ecx, [esp+0x20]
        mov     dword ptr [esp+0x4c], edx
        call    FUN_0040ca10
        fld     dword ptr [esp+0x20]
        fld     dword ptr [esp+0x1c]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [esp+0x18]
        faddp   st(1), st(0)
        fsqrt
        fstp    dword ptr [esp+0x54]
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp+0x54]
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_004eeb0b
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [esp+0x54]
        fld     dword ptr [esp+0x18]
        fmul    st(0), st(1)
        fstp    dword ptr [esp+0x48]
        fld     dword ptr [esp+0x1c]
        fmul    st(0), st(1)
        fstp    dword ptr [esp+0x4c]
        fld     dword ptr [esp+0x20]
        fmul    st(0), st(1)
        fstp    dword ptr [esp+0x50]
        fstp    st(0)
        jmp     L_004eeb30
L_004eeb0b:
        mov     edx, dword ptr [g_008bd5d8]
        mov     eax, dword ptr [g_008bd5dc]
        mov     ecx, dword ptr [g_008bd5e0]
        mov     dword ptr [esp+0x54], 0
        mov     dword ptr [esp+0x48], edx
        mov     dword ptr [esp+0x4c], eax
        mov     dword ptr [esp+0x50], ecx
L_004eeb30:
        push    offset g_007da930
        lea     ecx, [esp+0x40]
        call    FUN_004eef70
        fstp    dword ptr [esp+0x60]
        mov     edx, dword ptr [esp+0x60]
        push    edx
        lea     eax, [esp+0x4c]
        push    eax
        lea     ecx, [esp+0x38]
        call    FUN_0040ca40
        lea     ecx, [esp+0x30]
        push    ecx
        lea     edx, [esp+0x40]
        push    edx
        lea     ecx, [esp+0x2c]
        call    FUN_0040cbb0
        push    offset g_007da930
        lea     eax, [esp+0x28]
        push    eax
        lea     ecx, [esp+0x2c]
        call    FUN_0040ca10
        fld     dword ptr [esp+0x28]
        fmul    dword ptr [esp+0x28]
        mov     edx, dword ptr [esi]
        fld     dword ptr [esp+0x2c]
        push    0x4
        fmul    dword ptr [esp+0x30]
        lea     eax, [esp+0x60]
        push    eax
        mov     ecx, esi
        faddp   st(1), st(0)
        fld     dword ptr [esp+0x2c]
        fmul    dword ptr [esp+0x2c]
        faddp   st(1), st(0)
        fstp    dword ptr [esp+0x68]
        call    dword ptr [edx+0x20]
        fld     dword ptr [esp+0x5c]
        or      edi, 0xffffffff
        fcomp   dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_004eec02
L_004eebbd:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        cmp     edi, -0x1
        jnz     L_004eebe3
        fld     dword ptr [esp+0x60]
        fcomp   dword ptr [esp+0x5c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_004eebe3
        mov     edi, dword ptr [esp+0x10]
L_004eebe3:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x60]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        fld     dword ptr [esp+0x5c]
        fcomp   dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jz      L_004eebbd
L_004eec02:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        cmp     edi, -0x1
        jz      L_004eec27
        mov     dword ptr [esp+0x8], edi
L_004eec27:
        mov     edx, dword ptr [esp+0x14]
        mov     eax, dword ptr [esp+0x8]
        mov     ecx, dword ptr [g_007da884]
        push    edx
        push    eax
        call    FUN_00492560
        mov     ecx, dword ptr [g_007daa3c]
        push    ecx
        mov     esi, eax
        call    FUN_006f4950
        push    0x148
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_004eec72
        push    esi
        mov     ecx, eax
        call    FUN_004b9b20
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x50
        ret
L_004eec72:
        xor     esi, esi
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x50
        ret
    }
}
