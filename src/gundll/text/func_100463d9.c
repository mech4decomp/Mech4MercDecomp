/*
 * FUN_100463d9 (781 B) -- __cdecl.
 * SEH-guarded realloc: dispatches on allocator mode DAT_10076a94 (3/2/other),
 * using the buddy allocator (FUN_1003da8b/FUN_1003d5d6/FUN_1003ca70/
 * FUN_1003d2ad) or HeapAlloc/HeapReAlloc, with a retry loop via
 * FUN_100426ef.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076a94;
extern unsigned int g_10076860;
extern unsigned int g_10076a90;
extern unsigned int g_10075728;
extern unsigned int g_10053f94;
extern void *g_10049074;
extern void *g_10049080;
extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_1003c2dc(void);
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_1003d282(void);
extern void __cdecl FUN_1003da8b(void);
extern void __cdecl FUN_1003d5d6(void);
extern void __cdecl FUN_1003ca70(void);
extern void __cdecl FUN_1003d2ad(void);
extern void __cdecl FUN_10046564(void);
extern void __cdecl FUN_100426ef(void);
extern void __cdecl FUN_1003e3ff(void);
extern void __cdecl FUN_1003e7c7(void);
extern void __cdecl FUN_1003e49b(void);
extern void __cdecl FUN_1003e456(void);
extern void __cdecl FUN_100466b2(void);

__declspec(naked) void FUN_100463d9(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1004c118
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x28
        push    ebx
        push    esi
        push    edi
        mov     ebx, dword ptr [ebp + 0x8]
        xor     edi, edi
        cmp     ebx, edi
        jnz     L_413
        push    dword ptr [ebp + 0xc]
        call    FUN_1003c3c5
        pop     ecx
        jmp     L_6f9
    L_413:
        mov     esi, dword ptr [ebp + 0xc]
        cmp     esi, edi
        jnz     L_426
        push    ebx
        call    FUN_1003c2dc
        pop     ecx
        jmp     L_6f7
    L_426:
        mov     eax, dword ptr [g_10076a94]
        cmp     eax, 0x3
        jnz     L_56d
    L_434:
        mov     dword ptr [ebp - 0x24], edi
        cmp     esi, -0x20
        ja      L_531
        push    0x9
        call    FUN_10039b19
        pop     ecx
        mov     dword ptr [ebp - 0x4], edi
        push    ebx
        call    FUN_1003d282
        pop     ecx
        mov     dword ptr [ebp - 0x28], eax
        cmp     eax, edi
        jz      L_501
        cmp     esi, dword ptr [g_10076860]
        ja      L_4b1
        push    esi
        push    ebx
        push    eax
        call    FUN_1003da8b
        add     esp, 0xc
        test    eax, eax
        jz      L_479
        mov     dword ptr [ebp - 0x24], ebx
        jmp     L_4b1
    L_479:
        push    esi
        call    FUN_1003d5d6
        pop     ecx
        mov     dword ptr [ebp - 0x24], eax
        cmp     eax, edi
        jz      L_4b1
        mov     eax, dword ptr [ebx - 0x4]
        dec     eax
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, esi
        jc      L_494
        mov     eax, esi
    L_494:
        push    eax
        push    ebx
        push    dword ptr [ebp - 0x24]
        call    FUN_1003ca70
        push    ebx
        call    FUN_1003d282
        mov     dword ptr [ebp - 0x28], eax
        push    ebx
        push    eax
        call    FUN_1003d2ad
        add     esp, 0x18
    L_4b1:
        cmp     dword ptr [ebp - 0x24], edi
        jnz     L_501
        cmp     esi, edi
        jnz     L_4c0
        push    0x1
        pop     esi
        mov     dword ptr [ebp + 0xc], esi
    L_4c0:
        add     esi, 0xf
        and     esi, 0xfffffff0
        mov     dword ptr [ebp + 0xc], esi
        push    esi
        push    edi
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049074]
        mov     dword ptr [ebp - 0x24], eax
        cmp     eax, edi
        jz      L_501
        mov     eax, dword ptr [ebx - 0x4]
        dec     eax
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, esi
        jc      L_4eb
        mov     eax, esi
    L_4eb:
        push    eax
        push    ebx
        push    dword ptr [ebp - 0x24]
        call    FUN_1003ca70
        push    ebx
        push    dword ptr [ebp - 0x28]
        call    FUN_1003d2ad
        add     esp, 0x14
    L_501:
        or      dword ptr [ebp - 0x4], 0xffffffff
        call    FUN_10046564
        cmp     dword ptr [ebp - 0x28], edi
        jnz     L_531
        cmp     esi, edi
        jnz     L_516
        push    0x1
        pop     esi
    L_516:
        add     esi, 0xf
        and     esi, 0xfffffff0
        mov     dword ptr [ebp + 0xc], esi
        push    esi
        push    ebx
        push    edi
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049080]
        mov     dword ptr [ebp - 0x24], eax
    L_531:
        mov     eax, dword ptr [ebp - 0x24]
        cmp     eax, edi
        jnz     L_6f9
        cmp     dword ptr [g_10075728], edi
        jz      L_6f9
        push    esi
        call    FUN_100426ef
        pop     ecx
        test    eax, eax
        jnz     L_434
        jmp     L_6f7
        mov     esi, dword ptr [ebp + 0xc]
        mov     ebx, dword ptr [ebp + 0x8]
        xor     edi, edi
        push    0x9
        call    FUN_10039b7a
        pop     ecx
        ret
    L_56d:
        cmp     eax, 0x2
        jnz     L_6bd
        cmp     esi, -0x20
        ja      L_58d
        cmp     esi, edi
        jbe     L_587
        add     esi, 0xf
        and     esi, 0xfffffff0
        jmp     L_58a
    L_587:
        push    0x10
        pop     esi
    L_58a:
        mov     dword ptr [ebp + 0xc], esi
    L_58d:
        mov     dword ptr [ebp - 0x24], edi
        cmp     esi, -0x20
        ja      L_68c
        push    0x9
        call    FUN_10039b19
        pop     ecx
        mov     dword ptr [ebp - 0x4], 0x1
        lea     eax, [ebp - 0x2c]
        push    eax
        lea     eax, [ebp - 0x38]
        push    eax
        push    ebx
        call    FUN_1003e3ff
        add     esp, 0xc
        mov     edi, eax
        mov     dword ptr [ebp - 0x30], edi
        test    edi, edi
        jz      L_670
        cmp     esi, dword ptr [g_10053f94]
        jnc     L_62a
        mov     ebx, esi
        shr     ebx, 0x4
        push    ebx
        push    edi
        push    dword ptr [ebp - 0x2c]
        push    dword ptr [ebp - 0x38]
        call    FUN_1003e7c7
        add     esp, 0x10
        test    eax, eax
        jz      L_5ef
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x24], eax
        jmp     L_627
    L_5ef:
        push    ebx
        call    FUN_1003e49b
        pop     ecx
        mov     dword ptr [ebp - 0x24], eax
        test    eax, eax
        jz      L_627
        movzx   eax, byte ptr [edi]
        shl     eax, 0x4
        mov     dword ptr [ebp - 0x34], eax
        cmp     eax, esi
        jc      L_60c
        mov     eax, esi
    L_60c:
        push    eax
        push    dword ptr [ebp + 0x8]
        push    dword ptr [ebp - 0x24]
        call    FUN_1003ca70
        push    edi
        push    dword ptr [ebp - 0x2c]
        push    dword ptr [ebp - 0x38]
        call    FUN_1003e456
        add     esp, 0x18
    L_627:
        mov     ebx, dword ptr [ebp + 0x8]
    L_62a:
        cmp     dword ptr [ebp - 0x24], 0
        jnz     L_683
        push    esi
        push    0x0
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049074]
        mov     dword ptr [ebp - 0x24], eax
        test    eax, eax
        jz      L_683
        movzx   eax, byte ptr [edi]
        shl     eax, 0x4
        mov     dword ptr [ebp - 0x34], eax
        cmp     eax, esi
        jc      L_655
        mov     eax, esi
    L_655:
        push    eax
        push    ebx
        push    dword ptr [ebp - 0x24]
        call    FUN_1003ca70
        push    edi
        push    dword ptr [ebp - 0x2c]
        push    dword ptr [ebp - 0x38]
        call    FUN_1003e456
        add     esp, 0x18
        jmp     L_683
    L_670:
        push    esi
        push    ebx
        push    0x0
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049080]
        mov     dword ptr [ebp - 0x24], eax
    L_683:
        or      dword ptr [ebp - 0x4], 0xffffffff
        call    FUN_100466b2
    L_68c:
        mov     eax, dword ptr [ebp - 0x24]
        cmp     eax, edi
        jnz     L_6f9
        cmp     dword ptr [g_10075728], edi
        jz      L_6f9
        push    esi
        call    FUN_100426ef
        pop     ecx
        test    eax, eax
        jnz     L_58d
        jmp     L_6f7
        mov     esi, dword ptr [ebp + 0xc]
        mov     ebx, dword ptr [ebp + 0x8]
        push    0x9
        call    FUN_10039b7a
        pop     ecx
        xor     edi, edi
        ret
    L_6bd:
        xor     eax, eax
        cmp     esi, -0x20
        ja      L_6e0
        cmp     esi, edi
        jnz     L_6cb
        push    0x1
        pop     esi
    L_6cb:
        add     esi, 0xf
        and     esi, 0xfffffff0
        push    esi
        push    ebx
        push    edi
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049080]
    L_6e0:
        cmp     eax, edi
        jnz     L_6f9
        cmp     dword ptr [g_10075728], edi
        jz      L_6f9
        push    esi
        call    FUN_100426ef
        pop     ecx
        test    eax, eax
        jnz     L_6bd
    L_6f7:
        xor     eax, eax
    L_6f9:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
