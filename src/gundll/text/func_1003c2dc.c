/*
 * FUN_1003c2dc (215 B) -- __cdecl.
 * SEH-guarded cleanup/registration dispatcher. Depending on DAT_10076a94
 * (3 or 2) it runs one of two conversion paths (FUN_1003d282/FUN_1003d2ad
 * or FUN_1003e3ff/FUN_1003e456), otherwise frees param_1 via HeapFree
 * (DAT_10076a90, 0, param_1). The two 9-byte helpers FUN_1003c346 and
 * FUN_1003c39e are physically embedded in this function's body and are
 * reached via local-label calls.
 *
 * CFLAGS: /O1
 */

extern int g_10076a94;
extern int g_10076a90;
extern void *g_10049084;
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_1003d282(void);
extern void __cdecl FUN_1003d2ad(void);
extern void __cdecl FUN_1003e3ff(void);
extern void __cdecl FUN_1003e456(void);

__declspec(naked) void FUN_1003c2dc(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1004b7b8
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     esi, dword ptr [ebp + 0x8]
        test    esi, esi
        jz      L_b6
        mov     eax, dword ptr [g_10076a94]
        cmp     eax, 0x3
        jnz     L_4f
        push    0x9
        call    FUN_10039b19
        pop     ecx
        and     dword ptr [ebp - 0x4], 0x0
        push    esi
        call    FUN_1003d282
        pop     ecx
        mov     dword ptr [ebp - 0x1c], eax
        test    eax, eax
        jz      L_37
        push    esi
        push    eax
        call    FUN_1003d2ad
        pop     ecx
        pop     ecx
    L_37:
        or      dword ptr [ebp - 0x4], 0xffffffff
        call    L_346
        cmp     dword ptr [ebp - 0x1c], 0x0
        jmp     L_97
    L_346:
        push    0x9
        call    FUN_10039b7a
        pop     ecx
        ret
    L_4f:
        cmp     eax, 0x2
        jnz     L_a7
        push    0x9
        call    FUN_10039b19
        pop     ecx
        mov     dword ptr [ebp - 0x4], 0x1
        lea     eax, [ebp - 0x20]
        push    eax
        lea     eax, [ebp - 0x28]
        push    eax
        push    esi
        call    FUN_1003e3ff
        add     esp, 0xc
        mov     dword ptr [ebp - 0x24], eax
        test    eax, eax
        jz      L_8a
        push    eax
        push    dword ptr [ebp - 0x20]
        push    dword ptr [ebp - 0x28]
        call    FUN_1003e456
        add     esp, 0xc
    L_8a:
        or      dword ptr [ebp - 0x4], 0xffffffff
        call    L_39e
        cmp     dword ptr [ebp - 0x24], 0x0
    L_97:
        jnz     L_b6
        push    dword ptr [ebp + 0x8]
        jmp     L_a8
    L_39e:
        push    0x9
        call    FUN_10039b7a
        pop     ecx
        ret
    L_a7:
        push    esi
    L_a8:
        push    0x0
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049084]
    L_b6:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
