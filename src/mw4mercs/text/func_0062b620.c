/*
 * FUN_0062b620 (951 B) — ABL/game-logic vector compaction routine.
 * Iterates a vector of 0x1c-byte records at [this+0x50..0x54], moving
 * records between several 0xc-byte sub-vectors on the stack, invoking
 * helper constructors/destructors (0x62baa0/0x62b9e0/0x62ba20/0x62bac0),
 * and compacting via 0x62bc30/0x62bc50/0x62be80/0x62bad0/0x62ba40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0062baa0(void);
extern void __cdecl FUN_0062b9e0(void);
extern void __cdecl FUN_0062bc30(void);
extern void __cdecl FUN_0062bc10(void);
extern void __cdecl FUN_0062bad0(void);
extern void __cdecl FUN_00624490(void);
extern void __cdecl FUN_0062ba40(void);
extern void __cdecl FUN_0062bc50(void);
extern void __cdecl FUN_0062be80(void);
extern void __cdecl FUN_00580520(void);
extern void __cdecl FUN_00580670(void);
extern void __cdecl FUN_0059db20(void);
extern void __cdecl FUN_0062bac0(void);
extern void __cdecl FUN_0062ba20(void);

__declspec(naked) void FUN_0062b620(void)
{
    __asm {
        sub     esp, 0x104
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x17]
        mov     edi, ecx
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0062baa0
        lea     esi, [esp + 0x38]
        mov     ebx, 0x9
L_62b643:
        mov     ecx, esi
        call    FUN_0062b9e0
        add     esi, 0xc
        dec     ebx
        jnz     L_62b643
        lea     esi, [esp + 0xa4]
        mov     ebx, 0x9
L_62b65c:
        mov     ecx, esi
        call    FUN_0062b9e0
        add     esi, 0xc
        dec     ebx
        jnz     L_62b65c
        mov     esi, dword ptr [edi + 0x50]
        mov     ebx, dword ptr [edi + 0x54]
        cmp     esi, ebx
        lea     ebp, [edi + 0x50]
        mov     dword ptr [esp + 0x30], ebp
        jz      L_62b73b
L_62b67e:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L_62b730
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        jge     L_62b6ef
        lea     ecx, [eax + eax*0x2 + 0x3]
        shl     ecx, 0x2
        lea     edi, [esp + 0x38]
        sub     edi, ecx
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, dword ptr [edi + 0x8]
        jz      L_62b6b9
        push    esi
        push    eax
        call    FUN_0062bc30
        mov     eax, dword ptr [edi + 0x4]
        add     esp, 0x8
        add     eax, 0x1c
        mov     dword ptr [edi + 0x4], eax
        jmp     L_62b6c4
L_62b6b9:
        push    0x1
        push    esi
        push    eax
        mov     ecx, edi
        call    FUN_0062bad0
L_62b6c4:
        mov     eax, dword ptr [esp + 0x28]
        cmp     eax, dword ptr [esp + 0x2c]
        jz      L_62b6e5
        push    esi
        push    eax
        call    FUN_0062bc30
        mov     eax, dword ptr [esp + 0x30]
        add     esp, 0x8
        add     eax, 0x1c
        mov     dword ptr [esp + 0x28], eax
        jmp     L_62b730
L_62b6e5:
        push    0x1
        push    esi
        push    eax
        lea     ecx, [esp + 0x30]
        jmp     L_62b72b
L_62b6ef:
        call    FUN_00624490
        lea     edx, [eax + eax*0x2]
        mov     eax, dword ptr [esp + edx*0x4 + 0xa8]
        mov     ecx, dword ptr [esp + edx*0x4 + 0xac]
        cmp     eax, ecx
        lea     edi, [esp + edx*0x4 + 0xa4]
        jz      L_62b725
        push    esi
        push    eax
        call    FUN_0062bc30
        mov     eax, dword ptr [edi + 0x4]
        add     esp, 0x8
        add     eax, 0x1c
        mov     dword ptr [edi + 0x4], eax
        jmp     L_62b730
L_62b725:
        push    0x1
        push    esi
        push    eax
        mov     ecx, edi
L_62b72b:
        call    FUN_0062bad0
L_62b730:
        add     esi, 0x1c
        cmp     esi, ebx
        jnz     L_62b67e
L_62b73b:
        mov     eax, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [ebp]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_0062ba40
        mov     esi, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0x24]
        cmp     edi, esi
        jz      L_62b793
        mov     ecx, esi
        sub     ecx, edi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        xor     eax, eax
        cmp     edx, 0x1
        jz      L_62b77c
L_62b774:
        sar     edx, 0x1
        inc     eax
        cmp     edx, 0x1
        jnz     L_62b774
L_62b77c:
        lea     ecx, [eax + eax*0x1]
        push    ecx
        push    0x0
        push    esi
        push    edi
        call    FUN_0062bc50
        push    esi
        push    edi
        call    FUN_0062be80
        add     esp, 0x18
L_62b793:
        lea     edx, [esp + 0x17]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_00580520
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edi, eax
        cmp     eax, ecx
        mov     eax, dword ptr [esp + 0x1c]
        jz      L_62b81b
L_62b7b3:
        mov     esi, dword ptr [edi]
        mov     ebp, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [esp + 0x18]
        or      edx, 0xffffffff
        sub     edx, ebp
        cmp     ecx, eax
        jz      L_62b7d4
L_62b7c5:
        cmp     dword ptr [ecx], edx
        jz      L_62b7d0
        add     ecx, 0x4
        cmp     ecx, eax
        jnz     L_62b7c5
L_62b7d0:
        cmp     ecx, eax
        jnz     L_62b810
L_62b7d4:
        mov     ebx, dword ptr [esi + 0x8]
        mov     edx, dword ptr [esp + 0x20]
        or      ecx, 0xffffffff
        sub     ecx, ebx
        cmp     eax, edx
        mov     dword ptr [esp + 0x10], ecx
        jz      L_62b7fb
        test    eax, eax
        jz      L_62b7f2
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [esp + 0x1c]
L_62b7f2:
        add     eax, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_62b810
L_62b7fb:
        push    0x1
        lea     ecx, [esp + 0x14]
        push    ecx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00580670
        mov     eax, dword ptr [esp + 0x1c]
L_62b810:
        mov     ecx, dword ptr [esp + 0x28]
        add     edi, 0x1c
        cmp     edi, ecx
        jnz     L_62b7b3
L_62b81b:
        cmp     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x10], 0x8
        jz      L_62b844
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_0062bc10
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x8
        add     eax, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_62b855
L_62b844:
        push    0x1
        lea     ecx, [esp + 0x14]
        push    ecx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00580670
L_62b855:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [esp + 0x1c]
        mov     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_62b976
L_62b869:
        mov     eax, dword ptr [ecx]
        lea     ebp, [eax + eax*0x2]
        shl     ebp, 0x2
        mov     ebx, dword ptr [esp + ebp*0x1 + 0x38]
        cmp     ebx, dword ptr [esp + ebp*0x1 + 0x3c]
        jz      L_62b8b6
L_62b87b:
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, dword ptr [ecx + 0x8]
        jz      L_62b8a2
        test    eax, eax
        jz      L_62b89a
        mov     ecx, 0x7
        mov     esi, ebx
        mov     edi, eax
        rep movsd
        mov     ecx, dword ptr [esp + 0x30]
L_62b89a:
        add     eax, 0x1c
        mov     dword ptr [ecx + 0x4], eax
        jmp     L_62b8ab
L_62b8a2:
        push    0x1
        push    ebx
        push    eax
        call    FUN_0062bad0
L_62b8ab:
        mov     eax, dword ptr [esp + ebp*0x1 + 0x3c]
        add     ebx, 0x1c
        cmp     ebx, eax
        jnz     L_62b87b
L_62b8b6:
        mov     esi, dword ptr [esp + ebp*0x1 + 0xa8]
        mov     edi, dword ptr [esp + ebp*0x1 + 0xa4]
        cmp     edi, esi
        lea     eax, [esp + ebp*0x1 + 0xa8]
        lea     ebp, [esp + ebp*0x1 + 0xa4]
        mov     dword ptr [esp + 0x34], eax
        jz      L_62b917
        mov     ecx, esi
        sub     ecx, edi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        xor     eax, eax
        cmp     edx, 0x1
        jz      L_62b900
L_62b8f8:
        sar     edx, 0x1
        inc     eax
        cmp     edx, 0x1
        jnz     L_62b8f8
L_62b900:
        lea     ecx, [eax + eax*0x1]
        push    ecx
        push    0x0
        push    esi
        push    edi
        call    FUN_0062bc50
        push    esi
        push    edi
        call    FUN_0062be80
        add     esp, 0x18
L_62b917:
        mov     ebx, dword ptr [ebp]
        mov     ebp, dword ptr [esp + 0x34]
        cmp     ebx, dword ptr [ebp]
        jz      L_62b95b
L_62b923:
        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [edx + 0x4]
        cmp     eax, dword ptr [edx + 0x8]
        jz      L_62b946
        test    eax, eax
        jz      L_62b93e
        mov     ecx, 0x7
        mov     esi, ebx
        mov     edi, eax
        rep movsd
L_62b93e:
        add     eax, 0x1c
        mov     dword ptr [edx + 0x4], eax
        jmp     L_62b951
L_62b946:
        push    0x1
        push    ebx
        push    eax
        mov     ecx, edx
        call    FUN_0062bad0
L_62b951:
        mov     eax, dword ptr [ebp]
        add     ebx, 0x1c
        cmp     ebx, eax
        jnz     L_62b923
L_62b95b:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x1c]
        add     ecx, 0x4
        cmp     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jnz     L_62b869
        mov     eax, dword ptr [esp + 0x18]
L_62b976:
        mov     edx, dword ptr [esp + 0x20]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0059db20
        lea     esi, [esp + 0x110]
        mov     edi, 0x9
L_62b996:
        mov     eax, dword ptr [esi + -0xc]
        sub     esi, 0xc
        mov     ecx, esi
        mov     dword ptr [esp + 0x34], eax
        call    FUN_0062bac0
        dec     edi
        jnz     L_62b996
        lea     esi, [esp + 0xa4]
        mov     edi, 0x9
L_62b9b6:
        sub     esi, 0xc
        mov     ecx, esi
        call    FUN_0062ba20
        dec     edi
        jnz     L_62b9b6
        lea     ecx, [esp + 0x24]
        call    FUN_0062ba20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x104
        ret
    }
}
