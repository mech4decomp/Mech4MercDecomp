/*
 * FUN_004af340 (1438 B) -- __thiscall (RET 0xc). MLR sub-object constructor:
 * initializes vtable 0x77058c, copies lookup tables, allocates/reallocates
 * two arrays (0x14c/0x150 and 0x184/0x188) via FUN_004084d0/FUN_004084e0,
 * reads keyframes through virtual slot +0x20/+0x18, and normalizes a vector
 * with FPU (FSQRT). Calls FUN_004c66b0/FUN_006fab90/FUN_00421e60/
 * FUN_00429860/FUN_00487900/FUN_004afbd0.
 *
 * CFLAGS: /O1
 */

extern int g_7da9f4;
extern int g_7b3270[];
extern int g_7b3b28[];
extern int g_7b3b2c[];
extern int g_7b3b30[];
extern int g_7b3370[];
extern float g_7daac8;
extern float g_770554;
extern char g_7daae9;
extern char g_7daaea;
extern void __cdecl FUN_004c66b0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_00429860(void);
extern void __cdecl FUN_00487900(void);
extern void __cdecl FUN_004afbd0(void);

__declspec(naked) void FUN_004af340(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        push    esi
        mov     ebx, ecx
        mov     ecx, dword ptr [g_7da9f4]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_004c66b0
        xor     eax, eax
        cmp     esi, 0xe
        mov     dword ptr [ebx + 0x14c], eax
        mov     dword ptr [ebx + 0x150], eax
        mov     dword ptr [ebx + 0x184], eax
        mov     dword ptr [ebx + 0x188], eax
        mov     dword ptr [ebx], 0x77058c
        jge     L_397
        push    0x770558
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_397
        int     3
L_397:
        mov     eax, dword ptr [ebx + 0x18]
        mov     edx, eax
        shr     edx, 0x2
        and     edx, 0x3f
        mov     ecx, dword ptr [edx*4 + g_7b3270]
        mov     dword ptr [ebx + 0x1c], ecx
        mov     ecx, eax
        shr     ecx, 0x5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*0x2]
        shl     ecx, 0x2
        mov     edx, dword ptr [ecx + g_7b3b28]
        mov     dword ptr [ebx + 0x130], edx
        mov     edx, dword ptr [ecx + g_7b3b2c]
        mov     ecx, dword ptr [ecx + g_7b3b30]
        push    edi
        mov     dword ptr [ebx + 0x138], ecx
        shr     eax, 0xa
        lea     edi, [ebx + 0x154]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        mov     esi, dword ptr [ebp + 0x8]
        and     eax, 0x1
        push    0x2
        lea     ecx, [ebx + 0x144]
        mov     dword ptr [ebx + 0x134], edx
        mov     edx, dword ptr [eax*4 + g_7b3370]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebx + 0x13c], edx
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebx + 0x148]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x2
        lea     ecx, [ebp + 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebx + 0x150]
        mov     edi, eax
        and     edi, 0xffff
        cmp     edi, ecx
        jz      L_505
        test    edi, edi
        jbe     L_4e3
        mov     edx, edi
        shl     edx, 0x4
        push    edx
        call    FUN_004084d0
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, dword ptr [ebx + 0x14c]
        add     esp, 0x4
        test    eax, eax
        jz      L_4d8
        mov     edx, dword ptr [ebx + 0x150]
        cmp     edi, edx
        jnc     L_47c
        mov     edx, edi
L_47c:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_4c9
        sub     eax, dword ptr [ebp + 0x8]
        mov     ecx, edx
        shl     ecx, 0x4
        add     ecx, dword ptr [ebp + 0x8]
        inc     edx
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0xc], edx
        jmp     L_49d
L_49a:
        mov     eax, dword ptr [ebp - 0x10]
L_49d:
        add     eax, ecx
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x8], edx
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x8]
        dec     eax
        sub     ecx, 0x10
        test    eax, eax
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], ecx
        ja      L_49a
L_4c9:
        mov     eax, dword ptr [ebx + 0x14c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d8:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [ebx + 0x14c], ecx
        jmp     L_4fc
L_4e3:
        mov     edx, dword ptr [ebx + 0x14c]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x14c], 0x0
L_4fc:
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [ebx + 0x150], edi
L_505:
        and     eax, 0xffff
        mov     edi, eax
        cmp     edi, dword ptr [ebx + 0x188]
        mov     dword ptr [ebp - 0x10], edi
        jz      L_5a4
        test    edi, edi
        jbe     L_585
        lea     eax, [edi*4 + 0]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [ebx + 0x184]
        add     esp, 0x4
        test    edx, edx
        mov     dword ptr [ebp + 0x8], eax
        jz      L_57a
        mov     ecx, dword ptr [ebx + 0x188]
        cmp     edi, ecx
        jnc     L_548
        mov     ecx, edi
L_548:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_56b
        mov     eax, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp + 0x8]
        lea     eax, [eax + ecx*0x4]
        sub     edx, edi
        inc     ecx
L_55b:
        mov     edi, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_55b
        mov     edi, dword ptr [ebp - 0x10]
L_56b:
        mov     eax, dword ptr [ebx + 0x184]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_57a:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [ebx + 0x184], ecx
        jmp     L_59e
L_585:
        mov     edx, dword ptr [ebx + 0x184]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x184], 0x0
L_59e:
        mov     dword ptr [ebx + 0x188], edi
L_5a4:
        push    esi
        call    FUN_00421e60
        mov     dword ptr [ebp - 0x8], eax
        xor     eax, eax
        add     esp, 0x4
        cmp     word ptr [ebp + 0xc], ax
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp - 0xc], eax
        jbe     L_831
L_5c2:
        mov     eax, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esi]
        and     eax, 0xffff
        mov     ecx, eax
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [ebx + 0x14c]
        shl     ecx, 0x4
        lea     edi, [ecx + eax*0x1]
        push    0x4
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [edi + 0x4]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        add     edi, 0xc
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [ebp - 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 0xc]
        and     edx, 0xffff
        mov     eax, ecx
        dec     edx
        and     eax, 0xffff
        cmp     eax, edx
        jge     L_64d
        fld     dword ptr [g_7daac8]
        fcomp   dword ptr [edi]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_64d
        mov     eax, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        jmp     L_6c5
L_64d:
        cmp     word ptr [ebp + 0x8], 0x0
        jnz     L_66c
        test    cx, cx
        jbe     L_66c
        mov     eax, dword ptr [ebx + 0x14c]
        mov     dword ptr [eax], 0x0
        mov     dword ptr [eax + 0x4], 0x0
L_66c:
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      L_683
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0x8]
        push    ecx
        push    edx
        push    esi
        call    eax
        add     esp, 0xc
        jmp     L_6b6
L_683:
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [ebp - 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [ebp - 0x14]
        cmp     eax, 0x4b
        jz      L_6a9
        cmp     eax, 0x74
        jnz     L_6c2
        mov     edx, dword ptr [ebp - 0x8]
        push    edx
        push    esi
        call    FUN_00429860
        jmp     L_6b3
L_6a9:
        mov     eax, dword ptr [ebp - 0x8]
        push    eax
        push    esi
        call    FUN_00487900
L_6b3:
        add     esp, 0x8
L_6b6:
        mov     ecx, dword ptr [ebx + 0x184]
        mov     edx, dword ptr [ebp - 0x4]
        mov     dword ptr [ecx + edx*0x4], eax
L_6c2:
        inc     dword ptr [ebp + 0x8]
L_6c5:
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp + 0xc]
        inc     eax
        cmp     ax, cx
        mov     dword ptr [ebp - 0xc], eax
        jc      L_5c2
        mov     esi, dword ptr [ebp + 0x8]
        cmp     si, cx
        jnc     L_831
        mov     eax, dword ptr [ebx + 0x150]
        and     esi, 0xffff
        cmp     esi, eax
        mov     dword ptr [ebp - 0x4], esi
        jz      L_7a3
        test    esi, esi
        jbe     L_784
        mov     eax, esi
        shl     eax, 0x4
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [ebx + 0x14c]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        mov     dword ptr [ebp + 0x10], edi
        jz      L_77c
        mov     ecx, dword ptr [ebx + 0x150]
        cmp     esi, ecx
        jnc     L_72c
        mov     ecx, esi
L_72c:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_76d
        mov     eax, ecx
        shl     eax, 0x4
        sub     edx, edi
        add     eax, edi
        mov     dword ptr [ebp + 0x8], edx
        inc     ecx
        jmp     L_745
L_742:
        mov     edx, dword ptr [ebp + 0x8]
L_745:
        add     edx, eax
        mov     edi, dword ptr [edx]
        mov     esi, eax
        mov     dword ptr [esi], edi
        mov     edi, dword ptr [edx + 0x4]
        mov     dword ptr [esi + 0x4], edi
        mov     edi, dword ptr [edx + 0x8]
        mov     edx, dword ptr [edx + 0xc]
        dec     ecx
        mov     dword ptr [esi + 0x8], edi
        sub     eax, 0x10
        test    ecx, ecx
        mov     dword ptr [esi + 0xc], edx
        ja      L_742
        mov     esi, dword ptr [ebp - 0x4]
        mov     edi, dword ptr [ebp + 0x10]
L_76d:
        mov     eax, dword ptr [ebx + 0x14c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_77c:
        mov     dword ptr [ebx + 0x14c], edi
        jmp     L_79d
L_784:
        mov     eax, dword ptr [ebx + 0x14c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x14c], 0x0
L_79d:
        mov     dword ptr [ebx + 0x150], esi
L_7a3:
        cmp     esi, dword ptr [ebx + 0x188]
        jz      L_831
        test    esi, esi
        jbe     L_812
        lea     ecx, [esi*4 + 0]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [ebx + 0x184]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        mov     dword ptr [ebp + 0x8], edi
        jz      L_80a
        mov     ecx, dword ptr [ebx + 0x188]
        cmp     esi, ecx
        jnc     L_7de
        mov     ecx, esi
L_7de:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_7fb
        lea     eax, [edi + ecx*0x4]
        sub     edx, edi
        inc     ecx
L_7eb:
        mov     edi, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_7eb
        mov     edi, dword ptr [ebp + 0x8]
L_7fb:
        mov     eax, dword ptr [ebx + 0x184]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_80a:
        mov     dword ptr [ebx + 0x184], edi
        jmp     L_82b
L_812:
        mov     ecx, dword ptr [ebx + 0x184]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x184], 0x0
L_82b:
        mov     dword ptr [ebx + 0x188], esi
L_831:
        mov     edx, dword ptr [ebx + 0x18]
        shr     edx, 0x5
        not     dl
        test    dl, 0x1
        pop     edi
        jz      L_853
        fld     dword ptr [ebx + 0xec]
        fmul    dword ptr [g_770554]
        fstp    dword ptr [ebx + 0xec]
        jmp     L_8b9
L_853:
        fld     dword ptr [ebx + 0xe0]
        fmul    dword ptr [g_770554]
        fstp    dword ptr [ebx + 0xe0]
        fld     dword ptr [ebx + 0xe4]
        fmul    dword ptr [g_770554]
        fstp    dword ptr [ebx + 0xe4]
        fld     dword ptr [ebx + 0xe8]
        fmul    dword ptr [g_770554]
        fstp    dword ptr [ebx + 0xe8]
        fld     dword ptr [ebx + 0xe8]
        fld     dword ptr [ebx + 0xe4]
        fld     dword ptr [ebx + 0xe0]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    dword ptr [ebx + 0xec]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
L_8b9:
        mov     al, byte ptr [g_7daae9]
        test    al, al
        jz      L_8d4
        mov     ecx, ebx
        call    FUN_004afbd0
        test    al, al
        jnz     L_8d4
        mov     byte ptr [g_7daaea], 0x1
L_8d4:
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
