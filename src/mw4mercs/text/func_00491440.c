/*
 * FUN_00491440 (477 B) — MLR __thiscall (RET 0x8): reads a set of ints
 * from a stream object (virtual method at vtable+0x20), applies
 * version-dependent flag fixups, then resolves a texture/material name
 * via the global table and writes back a computed entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da848;

extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004128e0(void);
extern int __cdecl FUN_0048fac0(void);
extern int __cdecl FUN_0048f640(void);
extern int __cdecl FUN_0048f380(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00491440(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x4
        push    esi
        mov     ecx, edi
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ebx, [esi+0x8]
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ebp, [esi+0xc]
        push    ebp
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [edi]
        lea     eax, [esi+0x4]
        push    0x4
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi+0x10]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi+0x14]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [esp+0x18]
        cmp     eax, 0x6
        jge     L_4914be
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [esp+0x18]
L_4914be:
        cmp     eax, 0x3
        jle     L_4914e6
        cmp     eax, 0x6
        jge     L_491515
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        jmp     L_491515
L_4914e6:
        mov     eax, dword ptr [ebx]
        test    eax, 0x180000
        jz      L_4914f6
        or      eax, 0x180000
        mov     dword ptr [ebx], eax
L_4914f6:
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ebp]
        and     edx, 0xefdfffff
        and     ecx, 0xefdfffff
        or      eax, 0x10200000
        mov     dword ptr [esi], edx
        mov     dword ptr [ebx], ecx
        mov     dword ptr [ebp], eax
L_491515:
        mov     ebp, dword ptr [esi]
        test    ebp, 0x3fff
        jz      L_491616
        lea     edx, [esp+0x14]
        push    edx
        push    edi
        mov     dword ptr [esp+0x1c], 0x0
        call    FUN_00412a00
        mov     eax, dword ptr [edi]
        add     esp, 0x8
        push    0x4
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x20]
        lea     ecx, [esp+0x14]
        call    FUN_004128e0
        mov     edi, dword ptr [esp+0x14]
        cmp     byte ptr [edi], 0x5c
        jnz     L_49155a
        inc     edi
L_49155a:
        mov     eax, dword ptr [esi+0x4]
        mov     ecx, dword ptr [esp+0x18]
        mov     edx, eax
        and     edx, 0x10000
        cmp     edx, 0x10000
        jnz     L_49159f
        test    ecx, ecx
        jle     L_49159f
        mov     ecx, dword ptr [g_007da848]
        push    0x0
        push    edi
        call    FUN_0048fac0
        test    eax, eax
        jnz     L_4915e4
        mov     eax, dword ptr [esp+0x18]
        mov     ecx, dword ptr [g_007da848]
        push    0x3c23d70a
        push    eax
        push    edi
        call    FUN_0048f640
        jmp     L_4915e4
L_49159f:
        and     eax, 0xfffeffff
        mov     dword ptr [esi+0x4], eax
        mov     eax, dword ptr [esi+0x10]
        and     ecx, 0xf
        push    ecx
        mov     ecx, dword ptr [g_007da848]
        or      eax, 0x10000
        push    edi
        mov     dword ptr [esi+0x10], eax
        call    FUN_0048fac0
        test    eax, eax
        jnz     L_4915da
        mov     ecx, dword ptr [esp+0x18]
        and     ecx, 0xf
        push    ecx
        mov     ecx, dword ptr [g_007da848]
        push    edi
        call    FUN_0048f380
L_4915da:
        mov     edx, dword ptr [esp+0x18]
        sar     edx, 0x4
        mov     dword ptr [eax+0x20], edx
L_4915e4:
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [eax+0x1c]
        mov     eax, dword ptr [esp+0x14]
        and     ebp, 0xffffc000
        or      ecx, 0x3fff
        or      ebp, edx
        test    eax, eax
        mov     dword ptr [ebx], ecx
        mov     dword ptr [esi], ebp
        jz      L_491616
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_491616
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_491616:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
