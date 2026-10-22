/*
 * 1102 B block at 0x00645E0B containing two functions plus padding:
 *   - 5 nop pad (0x00645E0B)
 *   - FUN_00645E10 (small, __thiscall, 1 double arg, ret 8): advances a
 *     timer/angle, clamps a counter, and stores the result.
 *   - 4 nop pad (0x00645E7C)
 *   - FUN_00645E80 (large, __thiscall): builds a transform from two
 *     sub-objects and emits a formatted output block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040C410(void);
extern void __cdecl FUN_0040C5D0(void);
extern void __cdecl FUN_00561DF0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561A30(void);
extern void __cdecl FUN_005619F0(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_0040C9C0(void);
extern void __cdecl FUN_00640FA0(void);
extern void __cdecl FUN_0055F5B0(void);
extern void __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_0055E5C0(void);
extern void __cdecl FUN_0055EED0(void);
extern void __cdecl FUN_0055EB90(void);

extern double g_76D970;
extern double g_78D0C0;
extern float g_76D064;
extern float g_77DFF8;
extern float g_77DFF4;
extern float g_76D5F0;
extern float g_77A1A0;

__declspec(naked) void FUN_00645E0B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        fld     qword ptr [ecx + 0x54]
        fcomp   qword ptr [g_76D970]
        fld     qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x40
        je      l_645E27
        fst     qword ptr [ecx + 0x54]
    l_645E27:
        fcom    qword ptr [ecx + 0x54]
        fnstsw  ax
        test    ah, 1
        jne     l_645E76
        push    esi
        mov     esi, dword ptr [ecx + 0x60]
    l_645E35:
        mov     eax, dword ptr [ecx + 0x5c]
        cmp     esi, eax
        je      l_645E4D
        xor     edx, edx
        cmp     esi, eax
        setge   dl
        dec     edx
        and     edx, 0xfffffffe
        inc     edx
        add     edx, eax
        mov     dword ptr [ecx + 0x5c], edx
    l_645E4D:
        add     dword ptr [ecx + 0x50], -0x14
        jns     l_645E5A
        mov     dword ptr [ecx + 0x50], 0
    l_645E5A:
        fld     qword ptr [ecx + 0x54]
        fadd    qword ptr [g_78D0C0]
        fst     qword ptr [ecx + 0x54]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     l_645E35
        fstp    qword ptr [ecx + 0x2c]
        pop     esi
        ret     8
    l_645E76:
        fstp    qword ptr [ecx + 0x2c]
        ret     8
        nop
        nop
        nop
        nop
        sub     esp, 0x9c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        lea     eax, [edi + 0x20]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040C410
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_76D064]
        fnstsw  ax
        test    ah, 0x41
        je      l_645EB8
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_77DFF8]
        fstp    dword ptr [esp + 0x14]
    l_645EB8:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_76D064]
        fnstsw  ax
        test    ah, 0x41
        je      l_645ED7
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [g_77DFF4]
        fstp    dword ptr [esp + 0x18]
    l_645ED7:
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x40]
        call    FUN_0040C5D0
        lea     edx, [edi + 0x14]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_0040C410
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_76D064]
        fnstsw  ax
        test    ah, 0x41
        je      l_645F11
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_77DFF8]
        fstp    dword ptr [esp + 0x14]
    l_645F11:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_76D064]
        fnstsw  ax
        test    ah, 0x41
        je      l_645F30
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [g_77DFF4]
        fstp    dword ptr [esp + 0x18]
    l_645F30:
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_0040C5D0
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0040C410
        lea     edx, [esp + 0x30]
        xor     ebp, ebp
        push    edx
        lea     eax, [esp + 0x78]
        lea     esi, [edi + 0x38]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x38], ebp
        mov     dword ptr [esp + 0x3c], ebp
        mov     dword ptr [esp + 0x34], ebp
        call    FUN_00561DF0
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x70]
        mov     dword ptr [esp + 0x38], ecx
        push    edx
        mov     ecx, esi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x38]
        cmp     eax, dword ptr [ecx]
        je      l_645F93
        mov     edx, dword ptr [esp + 0x30]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_645FD0
    l_645F93:
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0xac]
        mov     dword ptr [esp + 0x54], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x40]
        mov     ecx, esp
        push    edx
        call    FUN_00561A30
        lea     eax, [esp + 0x84]
        push    eax
        mov     ecx, esi
        call    FUN_005619F0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x38], eax
    l_645FD0:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [esp + 0x5c]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [esp + 0x9c]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x68], 0
        fstp    dword ptr [esp + 0x60]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x64]
        call    FUN_0040C5D0
        lea     edx, [esp + 0x34]
        push    edx
        lea     eax, [esp + 0x6c]
        push    eax
        mov     ecx, esi
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x6c]
        mov     dword ptr [esp + 0x10], ecx
        push    edx
        mov     ecx, esi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [ecx]
        je      l_64603C
        mov     edx, dword ptr [esp + 0x34]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_646076
    l_64603C:
        lea     eax, [esp + 0x48]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x50], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561A30
        lea     eax, [esp + 0x80]
        push    eax
        mov     ecx, esi
        call    FUN_005619F0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x10], eax
    l_646076:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [esp + 0x50]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [esp + 0x90]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x5c], 0
        fstp    dword ptr [esp + 0x54]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x58]
        call    FUN_0040C5D0
        fld     dword ptr [esp + 0x24]
        push    0x3f666666
        fsub    dword ptr [esp + 0x94]
        push    ecx
        fsub    dword ptr [g_76D5F0]
        fstp    dword ptr [esp]
        fld     dword ptr [esp + 0x28]
        push    ecx
        fadd    dword ptr [g_76D5F0]
        lea     ecx, [esp + 0x8c]
        fstp    dword ptr [esp]
        call    FUN_0040C9C0
        push    ebp
        push    ebp
        push    0xfa007d00
        lea     edx, [esp + 0xa4]
        push    edx
        lea     eax, [esp + 0x90]
        push    eax
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, esi
        call    FUN_00640FA0
        mov     ecx, dword ptr [eax]
        call    FUN_0055F5B0
        mov     ebx, dword ptr [edi + 0x5c]
        mov     dword ptr [esp + 0x2c], ebx
        fild    dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x40]
        fmul    dword ptr [g_77A1A0]
        call    FUN_0075DB4A
        mov     esi, eax
        cmp     esi, ebp
        mov     dword ptr [esp + 0x10], esi
        jge     l_646134
        mov     dword ptr [esp + 0x10], ebp
        jmp     l_646145
    l_646134:
        fld     dword ptr [esp + 0x40]
        call    FUN_0075DB4A
        cmp     esi, eax
        jle     l_646145
        mov     dword ptr [esp + 0x10], eax
    l_646145:
        fld     dword ptr [esp + 0x40]
        push    0xfa0064ff
        fadd    dword ptr [esp + 0x28]
        fild    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld     st(0)
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x40]
        fadd    dword ptr [esp + 0x24]
        push    eax
        call    FUN_0075DB4A
        fsub    dword ptr [esp + 0x18]
        push    eax
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x2c]
        push    eax
        call    FUN_0075DB4A
        push    eax
        call    FUN_0055E5C0
        add     esp, 0x14
        cmp     ebx, ebp
        je      l_6461DA
        mov     eax, dword ptr [edi + 0x50]
        cmp     eax, ebp
        je      l_6461DA
        fld     dword ptr [esp + 0x40]
        shl     eax, 0x18
        fadd    dword ptr [esp + 0x24]
        add     eax, 0xffffff
        push    eax
        fld     st(0)
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x40]
        fadd    dword ptr [esp + 0x24]
        push    eax
        call    FUN_0075DB4A
        fsub    dword ptr [esp + 0x18]
        push    eax
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x2c]
        push    eax
        call    FUN_0075DB4A
        push    eax
        call    FUN_0055E5C0
        add     esp, 0x14
    l_6461DA:
        fld     dword ptr [esp + 0x40]
        fadd    dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x10]
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x3c]
        fadd    dword ptr [esp + 0x20]
        mov     esi, eax
        push    0xc8ffffff
        push    esi
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x28]
        push    eax
        push    esi
        call    FUN_0075DB4A
        push    eax
        call    FUN_0055EED0
        fld     dword ptr [esp + 0x54]
        fadd    dword ptr [esp + 0x38]
        push    0xfa007d00
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x54]
        fadd    dword ptr [esp + 0x38]
        push    eax
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x40]
        push    eax
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x40]
        push    eax
        call    FUN_0075DB4A
        push    eax
        call    FUN_0055EB90
        add     esp, 0x28
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x9c
        ret
    }
}
