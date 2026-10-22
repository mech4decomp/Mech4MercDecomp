/*
 * FUN_005D07F0 (1094 B) — __thiscall, 1 arg (ret 4). Terrain/heightmap
 * sampling: computes a grid of sample points, clamps against a height
 * table, and records visited cells into a growable array on the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040C9C0(void);
extern void __cdecl FUN_005D98B0(void);
extern void __cdecl FUN_005D0450(void);
extern void __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_005D6820(void);
extern void __cdecl FUN_004084E0(void);

extern float g_76D070;
extern float g_76C5B0;
extern float g_76D064;
extern float g_76D598;
extern double g_76D970;
extern unsigned int g_7F2440;
extern unsigned int g_80DAA8;

__declspec(naked) void FUN_005D07F0(void)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        test    esi, esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp + 0x28], edi
        je      l_5D0894
        mov     eax, dword ptr [edi + 0x35c]
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x4c]
        call    FUN_00419480
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov     ecx, dword ptr [esi + 0x14]
        je      l_5D084E
        mov     edx, dword ptr [eax + 0x10]
        fld     dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x14]
        fstp    dword ptr [esp + 0x30]
        mov     ecx, edx
        mov     dword ptr [esp + 0x40], edx
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x34], ecx
        mov     edx, eax
        jmp     l_5D087F
    l_5D084E:
        test    ecx, ecx
        je      l_5D0883
        fild    dword ptr [ecx + 0x20]
        push    ecx
        fstp    dword ptr [esp]
        fild    dword ptr [ecx + 0x1c]
        push    0
        push    ecx
        lea     ecx, [esp + 0x48]
        fstp    dword ptr [esp]
        call    FUN_0040C9C0
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x34], ecx
    l_5D087F:
        mov     dword ptr [esp + 0x38], edx
    l_5D0883:
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, esi
        call    FUN_005D98B0
    l_5D0894:
        mov     ecx, edi
        call    FUN_005D0450
        mov     esi, dword ptr [edi + 0x470]
        test    esi, esi
        je      l_5D0C2C
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        je      l_5D0C2C
        mov     eax, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [eax + 0xac]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x50], edx
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x50]
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     edi, edx
        mov     dword ptr [esp + 0x20], edi
        call    FUN_0075DB4A
        mov     ecx, eax
        fld     dword ptr [esi + 4]
        mov     eax, 0x66666667
        fsub    dword ptr [esi]
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        fmul    dword ptr [g_76D070]
        add     edx, ecx
        mov     ebp, edx
        fadd    dword ptr [esi]
        mov     dword ptr [esp + 0x1c], ebp
        call    FUN_0075DB4A
        fld     dword ptr [esi + 0xc]
        fsub    dword ptr [esi + 8]
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        fmul    dword ptr [g_76D070]
        add     edx, eax
        mov     ebx, edx
        fadd    dword ptr [esi + 8]
        mov     dword ptr [esp + 0x58], ebx
        call    FUN_0075DB4A
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edi, ebx
        mov     dword ptr [esp + 0x18], edx
        jne     l_5D096E
        inc     edi
        mov     dword ptr [esp + 0x58], edi
    l_5D096E:
        cmp     ebp, edx
        jne     l_5D0977
        inc     ebp
        mov     dword ptr [esp + 0x18], ebp
    l_5D0977:
        fild    dword ptr [esp + 0x20]
        fild    dword ptr [esp + 0x58]
        fsub    st(0), st(1)
        fstp    dword ptr [esp + 0x58]
        fild    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fild    dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x58]
        fcomp   dword ptr [g_76C5B0]
        fnstsw  ax
        test    ah, 0x40
        je      l_5D09AE
        mov     dword ptr [esp + 0x58], 0x3f800000
    l_5D09AE:
        fcom    dword ptr [g_76C5B0]
        fnstsw  ax
        test    ah, 0x40
        je      l_5D09C3
        fstp    st(0)
        fld     dword ptr [g_76D064]
    l_5D09C3:
        fld     dword ptr [esp + 0x58]
        fcomp   dword ptr [g_76C5B0]
        fnstsw  ax
        test    ah, 1
        je      l_5D09E4
        fld     dword ptr [esp + 0x58]
        fmul    dword ptr [g_76D598]
        fstp    dword ptr [esp + 0x10]
        jmp     l_5D09EC
    l_5D09E4:
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x10], edx
    l_5D09EC:
        fcom    dword ptr [g_76C5B0]
        fld     st(0)
        fnstsw  ax
        test    ah, 1
        je      l_5D0A01
        fmul    dword ptr [g_76D598]
    l_5D0A01:
        fld     dword ptr [esp + 0x10]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     l_5D0A5F
        fstp    st(0)
        fdiv    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x58]
        fcomp   qword ptr [g_76D970]
        fld     dword ptr [esp + 0x58]
        fnstsw  ax
        test    ah, 1
        je      l_5D0A33
        fmul    dword ptr [g_76D598]
    l_5D0A33:
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x58]
        fcomp   dword ptr [g_76C5B0]
        mov     ecx, eax
        fnstsw  ax
        test    ah, 1
        je      l_5D0A55
        mov     dword ptr [esp + 0x58], 0xbf800000
        jmp     l_5D0AA4
    l_5D0A55:
        mov     dword ptr [esp + 0x58], 0x3f800000
        jmp     l_5D0AA4
    l_5D0A5F:
        fld     dword ptr [esp + 0x58]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x58]
        fstp    st(0)
        fcom    qword ptr [g_76D970]
        fld     st(0)
        fnstsw  ax
        test    ah, 1
        je      l_5D0A80
        fmul    dword ptr [g_76D598]
    l_5D0A80:
        call    FUN_0075DB4A
        fcomp   dword ptr [g_76C5B0]
        mov     ecx, eax
        mov     dword ptr [esp + 0x14], 0xbf800000
        fnstsw  ax
        test    ah, 1
        jne     l_5D0AA4
        mov     dword ptr [esp + 0x14], 0x3f800000
    l_5D0AA4:
        test    ecx, ecx
        fstp    dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x18], eax
        je      l_5D0C2C
        mov     dword ptr [esp + 0x20], ecx
    l_5D0ABC:
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x58]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x18]
        mov     esi, eax
        call    FUN_0075DB4A
        mov     edi, eax
        mov     eax, dword ptr [g_7F2440]
        mov     edx, dword ptr [eax + 0x3c]
        mov     edx, dword ptr [edx + 8]
        mov     ecx, edi
        shl     ecx, 9
        add     ecx, esi
        mov     bx, word ptr [edx + ecx*2 + 0x40200]
        test    bl, 0x40
        jne     l_5D0C22
        mov     ecx, dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [ecx + 8]
        lea     eax, [esi + 0x100]
        mov     dword ptr [esp + 0x24], eax
        mov     ebp, dword ptr [esp + 0x24]
        lea     eax, [edi + 0x100]
        shl     eax, 9
        mov     edx, ebx
        or      edx, 0x40
        add     eax, ebp
        mov     word ptr [ecx + eax*2], dx
        mov     ecx, dword ptr [g_80DAA8]
        call    FUN_00416110
        xor     edx, edx
        cmp     eax, edx
        je      l_5D0B57
        mov     dword ptr [eax], esi
        mov     dword ptr [eax + 4], edi
        mov     word ptr [eax + 8], bx
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x10], edx
        jmp     l_5D0B59
    l_5D0B57:
        xor     eax, eax
    l_5D0B59:
        mov     ebp, dword ptr [esp + 0x28]
        mov     esi, dword ptr [ebp + 0x4cc]
        cmp     esi, dword ptr [ebp + 0x4d0]
        mov     dword ptr [esp + 0x1c], eax
        je      l_5D0B83
        cmp     esi, edx
        je      l_5D0B75
        mov     dword ptr [esi], eax
    l_5D0B75:
        add     esi, 4
        mov     dword ptr [ebp + 0x4cc], esi
        jmp     l_5D0C22
    l_5D0B83:
        mov     edi, dword ptr [ebp + 0x4c8]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x24], 1
        mov     dword ptr [esp + 0x2c], eax
        lea     ecx, [esp + 0x24]
        jb      l_5D0BA9
        lea     ecx, [esp + 0x2c]
    l_5D0BA9:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x2c], ecx
        je      l_5D0BC7
        lea     edx, [ecx*4]
        push    edx
        call    FUN_004084D0
        add     esp, 4
        mov     ebx, eax
        jmp     l_5D0BC9
    l_5D0BC7:
        xor     ebx, ebx
    l_5D0BC9:
        mov     eax, dword ptr [esp + 0x58]
        push    eax
        push    ebx
        push    esi
        push    edi
        call    FUN_005D6820
        add     esp, 0x10
        test    eax, eax
        je      l_5D0BE3
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
    l_5D0BE3:
        mov     edx, dword ptr [esp + 0x58]
        push    edx
        add     eax, 4
        push    eax
        push    esi
        push    esi
        call    FUN_005D6820
        add     esp, 0x10
        test    edi, edi
        mov     esi, eax
        mov     dword ptr [esp + 0x24], edi
        je      l_5D0C09
        push    edi
        call    FUN_004084E0
        add     esp, 4
    l_5D0C09:
        mov     eax, dword ptr [esp + 0x2c]
        lea     ecx, [ebx + eax*4]
        mov     dword ptr [ebp + 0x4c8], ebx
        mov     dword ptr [ebp + 0x4cc], esi
        mov     dword ptr [ebp + 0x4d0], ecx
    l_5D0C22:
        dec     dword ptr [esp + 0x20]
        jne     l_5D0ABC
    l_5D0C2C:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     4
    }
}
