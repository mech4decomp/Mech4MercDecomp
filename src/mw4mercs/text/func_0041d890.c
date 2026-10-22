/*
 * FUN_0041d890 (558 B) — __thiscall object/collection constructor. Sets up
 * vtable pointers, iterates two string lists (via FUN_006fb800/006fb880 and
 * FUN_006fb920/006fbab0), builds child objects, and stores them into the
 * object at [ECX]. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8810; /* 0x007b8810 — allocator arg */
extern int g_7b8c10; /* 0x007b8c10 — allocator arg */

extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412980(void);
extern void __cdecl FUN_006fb800(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_006fb880(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006fb900(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_006fb920(void);
extern void __cdecl FUN_006fbab0(void);
extern void __cdecl FUN_006fbc40(void);

__declspec(naked) void FUN_0041d890(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        xor     ebx, ebx
        push    ebx
        lea     ebp, [edi+0x8]
        lea     esi, [edi+0x4]
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esp+0x1c], edi
        mov     dword ptr [esi], ebx
        call    FUN_00416990
        push    ebx
        add     edi, 0x1c
        push    ebx
        mov     ecx, edi
        mov     dword ptr [ebp], 0x76d654
        call    FUN_00416990
        mov     ebp, dword ptr [esp+0x1c]
        push    ebp
        lea     ecx, [esp+0x14]
        mov     dword ptr [edi], 0x76d654
        call    FUN_00412570
        push    ebp
        mov     ecx, esi
        call    FUN_00412780
        mov     ecx, esi
        call    FUN_00412980
        mov     eax, dword ptr [esp+0x10]
        push    eax
        call    FUN_006fb800
        mov     esi, eax
        cmp     esi, ebx
        jz      L_d983
    L_d8fa:
        push    esi
        lea     ecx, [esp+0x20]
        call    FUN_00412570
        mov     ecx, dword ptr [g_7b8810]
        push    ecx
        push    0x14
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 0x8
        cmp     esi, ebx
        jz      L_d94a
        mov     edx, dword ptr [g_7b8c10]
        push    edx
        mov     ecx, esi
        call    FUN_00415180
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esi+0x10]
        mov     dword ptr [esi+0x8], ebx
        mov     dword ptr [esi+0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0040f060
        mov     dword ptr [esi], 0x76d650
        jmp     L_d94c
    L_d94a:
        xor     esi, esi
    L_d94c:
        lea     ecx, [esp+0x1c]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_00416a90
        call    FUN_006fb880
        mov     esi, eax
        mov     eax, dword ptr [esp+0x1c]
        cmp     eax, ebx
        jz      L_d97b
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_d97b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_d97b:
        cmp     esi, ebx
        jnz     L_d8fa
    L_d983:
        call    FUN_006fb900
        mov     edx, dword ptr [g_7b8810]
        push    edx
        push    0x14
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 0x8
        cmp     esi, ebx
        jz      L_d9af
        push    edi
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x76d610
        jmp     L_d9b1
    L_d9af:
        xor     esi, esi
    L_d9b1:
        mov     edi, dword ptr [esp+0x14]
        cmp     byte ptr [esp+0x20], bl
        mov     dword ptr [edi+0x34], esi
        mov     dword ptr [edi+0x30], ebx
        jz      L_da97
        mov     eax, dword ptr [esp+0x10]
        push    eax
        call    FUN_006fb920
        mov     esi, eax
        cmp     esi, ebx
        jz      L_da63
    L_d9d9:
        push    esi
        lea     ecx, [esp+0x24]
        call    FUN_00412570
        mov     ecx, dword ptr [g_7b8810]
        push    ecx
        push    0x14
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 0x8
        cmp     esi, ebx
        jz      L_da29
        mov     edx, dword ptr [g_7b8c10]
        push    edx
        mov     ecx, esi
        call    FUN_00415180
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esi+0x10]
        mov     dword ptr [esi+0x8], ebx
        mov     dword ptr [esi+0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0040f060
        mov     dword ptr [esi], 0x76d650
        jmp     L_da2b
    L_da29:
        xor     esi, esi
    L_da2b:
        lea     ecx, [esp+0x20]
        push    ecx
        push    esi
        lea     ecx, [edi+0x8]
        call    FUN_00416a90
        call    FUN_006fbab0
        mov     esi, eax
        mov     eax, dword ptr [esp+0x20]
        cmp     eax, ebx
        jz      L_da5b
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_da5b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_da5b:
        cmp     esi, ebx
        jnz     L_d9d9
    L_da63:
        call    FUN_006fbc40
        mov     edx, dword ptr [g_7b8810]
        push    edx
        push    0x14
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 0x8
        cmp     esi, ebx
        jz      L_da92
        lea     eax, [edi+0x8]
        push    eax
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x76d610
        jmp     L_da94
    L_da92:
        xor     esi, esi
    L_da94:
        mov     dword ptr [edi+0x30], esi
    L_da97:
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, ebx
        jz      L_dab2
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_dab2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_dab2:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
