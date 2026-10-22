/*
 * FUN_00689410 (1228 B) — __thiscall HUD element update/aim handler.
 * Virtual calls, FPU comparisons, jump-table dispatch, IAT calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f20f4;
extern float g_0076c5b0;
extern int g_007f25c0;
extern float g_00770124;
extern double g_00785970;
extern float g_00770128;
extern double g_0077a4a8;
extern float g_00798d48;
extern float g_0076d048;
extern int g_007f2438;
extern int g_007f2464;

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00689010(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_005d9500(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d98b0(void);
extern void __cdecl FUN_005d9c70(void);
extern void __cdecl FUN_005d8cc0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005d9ac0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00689410(void)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax+0x34]
        mov     edi, dword ptr [esi+0x4]
        mov     eax, dword ptr [g_007f20f4]
        fst     dword ptr [edi+0x3b8]
        mov     ecx, dword ptr [edi+0x4]
        fstp    dword ptr [edi+0x3ac]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_6898d2
        fld     dword ptr [edi+0x3b8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_689470
        mov     ecx, dword ptr [esp+0x58]
        mov     edx, dword ptr [ecx]
        push    0
        push    0
        call    dword ptr [edx+0x1c8]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xc
    L_689470:
        lea     eax, [esp+0x13]
        push    eax
        lea     ecx, [esp+0x4c]
        push    ecx
        mov     ecx, esi
        call    FUN_00689010
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp+0x18], edx
        mov     ecx, dword ptr [eax+0x4]
        mov     dword ptr [esp+0x1c], ecx
        mov     edx, dword ptr [eax+0x8]
        mov     eax, dword ptr [esi+0x4]
        mov     dword ptr [esp+0x20], edx
        mov     ecx, dword ptr [eax+0x35c]
        mov     edx, dword ptr [ecx+0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp+0x40]
        call    FUN_00419480
        mov     eax, dword ptr [esp+0x3c]
        mov     ecx, dword ptr [esp+0x40]
        mov     edx, dword ptr [esp+0x44]
        mov     dword ptr [esp+0x24], eax
        mov     dword ptr [esp+0x28], ecx
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x28]
        push    ecx
        lea     ecx, [esp+0x38]
        mov     dword ptr [esp+0x34], edx
        call    FUN_0040ca10
        fld     dword ptr [esp+0x34]
        fmul    dword ptr [esp+0x34]
        lea     eax, [esi+0x34]
        fld     dword ptr [esp+0x38]
        push    eax
        fmul    dword ptr [esp+0x3c]
        lea     edx, [esp+0x1c]
        push    edx
        lea     ecx, [esp+0x38]
        faddp   st(1), st(0)
        fld     dword ptr [esp+0x38]
        fmul    dword ptr [esp+0x38]
        faddp   st(1), st(0)
        fstp    dword ptr [esp+0x1c]
        call    FUN_0040ca10
        mov     eax, dword ptr [g_007f25c0]
        push    eax
        mov     eax, dword ptr [esi+0x20]
        mov     ecx, dword ptr [eax+0x4]
        call    FUN_00415230
        test    al, al
        jz      L_6898d2
        mov     ebx, dword ptr [esi+0x4]
        mov     ecx, dword ptr [ebx+0x35c]
        mov     edx, dword ptr [ecx+0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp+0x40]
        call    FUN_00419480
        mov     edi, dword ptr [esi+0x14]
        test    edi, edi
        mov     eax, dword ptr [esp+0x3c]
        mov     ecx, dword ptr [esp+0x40]
        mov     edx, dword ptr [esp+0x44]
        mov     dword ptr [esp+0x24], eax
        mov     dword ptr [esp+0x28], ecx
        mov     dword ptr [esp+0x2c], edx
        jz      L_6895ff
        mov     al, byte ptr [edi+0xc]
        test    al, al
        jz      L_6895bf
        test    edi, edi
        mov     ebp, dword ptr [edi+0x10]
        mov     dword ptr [edi+0x10], 0
        jz      L_689591
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 4
    L_689591:
        mov     ecx, dword ptr [esp+0x58]
        mov     eax, dword ptr [ecx]
        push    0
        push    ebp
        mov     dword ptr [esi+0x14], 0
        call    dword ptr [eax+0x1c8]
        mov     ecx, dword ptr [esp+0x5c]
        mov     edx, dword ptr [esp+0x60]
        mov     dword ptr [esi+0x2c], ecx
        mov     dword ptr [esi+0x30], edx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xc
    L_6895bf:
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x28]
        push    ecx
        mov     ecx, edi
        call    FUN_005d98b0
        test    al, al
        jnz     L_6898d2
        mov     ecx, dword ptr [g_007f2438]
        push    edi
        call    FUN_005d9c70
        test    edi, edi
        jz      L_6895f8
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 4
    L_6895f8:
        mov     dword ptr [esi+0x14], 0
    L_6895ff:
        fld     dword ptr [esp+0x14]
        fcomp   dword ptr [g_00770124]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_689673
        fld     qword ptr [esi+0x2c]
        fadd    qword ptr [g_00785970]
        fcomp   qword ptr [esp+0x5c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_689646
        fld     dword ptr [esp+0x14]
        fcomp   dword ptr [g_00770124]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_689646
        fld     dword ptr [esp+0x14]
        fcomp   dword ptr [g_00770128]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_689673
    L_689646:
        fld     qword ptr [esi+0x2c]
        fadd    qword ptr [g_0077a4a8]
        fcomp   qword ptr [esp+0x5c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_6898d2
        fld     dword ptr [esp+0x14]
        fcomp   dword ptr [g_00798d48]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_6898d2
    L_689673:
        fld     dword ptr [esp+0x14]
        fcomp   dword ptr [g_0076d048]
        fnstsw  ax
        test    ah, 0x1
        jz      L_6896d8
        mov     ecx, dword ptr [esp+0x58]
        mov     edx, dword ptr [ecx]
        push    0
        lea     eax, [esp+0x40]
        push    eax
        push    0
        lea     eax, [esp+0x54]
        push    eax
        mov     dword ptr [esp+0x4c], 0xbf800000
        mov     dword ptr [esp+0x50], 0xbf800000
        mov     dword ptr [esp+0x54], 0xbf800000
        mov     dword ptr [esp+0x58], 0xbf800000
        mov     dword ptr [esp+0x5c], 0xbf800000
        mov     dword ptr [esp+0x60], 0xbf800000
        call    dword ptr [edx+0x1d0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xc
    L_6896d8:
        mov     eax, dword ptr [ebx+0x35c]
        mov     edx, dword ptr [eax+0x78]
        lea     ecx, [eax+0x78]
        call    dword ptr [edx+0x4]
        mov     edi, dword ptr [eax+0x50]
        cmp     edi, 9
        ja      L_68972e
        jmp     dword ptr [edi*4 + 0x6898dc]
    L_6896f6:
        mov     eax, 0x10
        jmp     L_689730
    L_6896fd:
        mov     eax, 0x11
        jmp     L_689730
    L_689704:
        mov     eax, 2
        jmp     L_689730
    L_68970b:
        mov     eax, 8
        jmp     L_689730
    L_689712:
        mov     eax, 4
        jmp     L_689730
    L_689719:
        mov     eax, 0x20
        jmp     L_689730
    L_689720:
        mov     eax, 0x40
        jmp     L_689730
    L_689727:
        mov     eax, 0x100
        jmp     L_689730
    L_68972e:
        xor     eax, eax
    L_689730:
        and     eax, 0xfffe
        xor     ecx, ecx
        test    al, 0x80
        jz      L_689740
        mov     ecx, 0x80
    L_689740:
        test    al, 0x10
        jz      L_689749
        add     ecx, 0x41
        jmp     L_689787
    L_689749:
        test    al, 0x1
        jz      L_689752
        add     ecx, 0x60
        jmp     L_689787
    L_689752:
        test    al, 0x2
        jz      L_68975b
        add     ecx, 0x44
        jmp     L_689787
    L_68975b:
        test    al, 0x8
        jz      L_689764
        add     ecx, 0x48
        jmp     L_689787
    L_689764:
        test    al, 0x4
        jz      L_68976d
        add     ecx, 0x60
        jmp     L_689787
    L_68976d:
        test    al, 0x20
        jz      L_689776
        add     ecx, 0x42
        jmp     L_689787
    L_689776:
        test    al, 0x40
        jz      L_68977f
        add     ecx, 0x60
        jmp     L_689787
    L_68977f:
        test    ah, 0x1
        jz      L_689787
        add     ecx, 0x50
    L_689787:
        fld     dword ptr [esp+0x20]
        mov     ebp, dword ptr [esi+0x10]
        push    1
        push    ecx
        call    FUN_0075db4a
        fld     dword ptr [esp+0x20]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp+0x38]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp+0x34]
        push    eax
        call    FUN_0075db4a
        push    eax
        mov     ecx, ebp
        call    FUN_005d8cc0
        test    al, al
        jz      L_689811
        mov     esi, dword ptr [esp+0x58]
        mov     eax, dword ptr [esi]
        push    0
        push    0
        mov     ecx, esi
        call    dword ptr [eax+0x1c8]
        mov     edx, dword ptr [esi]
        push    0
        lea     eax, [esp+0x4c]
        push    eax
        mov     dword ptr [esp+0x50], 0xbf800000
        mov     dword ptr [esp+0x54], 0xbf800000
        mov     dword ptr [esp+0x58], 0xbf800000
        mov     ecx, dword ptr [ebx+0x3b8]
        push    ecx
        lea     eax, [esp+0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x1d0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xc
    L_689811:
        mov     ecx, dword ptr [g_007f2464]
        push    ecx
        call    FUN_006f4950
        cmp     edi, 9
        ja      L_689861
        jmp     dword ptr [edi*4 + 0x689904]
    L_689829:
        mov     edi, 0x10
        jmp     L_689863
    L_689830:
        mov     edi, 0x11
        jmp     L_689863
    L_689837:
        mov     edi, 2
        jmp     L_689863
    L_68983e:
        mov     edi, 8
        jmp     L_689863
    L_689845:
        mov     edi, 4
        jmp     L_689863
    L_68984c:
        mov     edi, 0x20
        jmp     L_689863
    L_689853:
        mov     edi, 0x40
        jmp     L_689863
    L_68985a:
        mov     edi, 0x100
        jmp     L_689863
    L_689861:
        xor     edi, edi
    L_689863:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x168]
        push    eax
        push    ebx
        push    edi
        sub     esp, 0xc
        lea     eax, [esp+0x30]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        sub     esp, 0xc
        lea     edx, [esp+0x48]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        push    ebp
        push    0
        call    FUN_00707e70
        mov     ecx, dword ptr [g_007f2438]
        sub     esp, 8
        fstp    qword ptr [esp]
        call    FUN_005d9ac0
        mov     dword ptr [esi+0x14], eax
        call    FUN_006f49a0
        mov     eax, dword ptr [esp+0x18]
        mov     ecx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esp+0x20]
        mov     dword ptr [esi+0x34], eax
        mov     eax, dword ptr [esp+0x5c]
        mov     dword ptr [esi+0x38], ecx
        mov     ecx, dword ptr [esp+0x60]
        mov     dword ptr [esi+0x2c], eax
        mov     dword ptr [esi+0x3c], edx
        mov     dword ptr [esi+0x30], ecx
    L_6898d2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0xc
    }
}
