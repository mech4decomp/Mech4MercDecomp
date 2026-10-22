/*
 * FUN_004ebcf0 (231 B) — Adept channel lookup/creation. Builds a name string
 * via FUN_00412570/FUN_004125e0, allocates via FUN_004d2000, frees two
 * refcounted buffers (FUN_004084e0), then either returns 0 or looks up a
 * channel via FUN_00416110 and dispatches to FUN_004ebde0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern int __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_004d21c0(void);
extern int __cdecl FUN_00416110(void);
extern int __cdecl FUN_004ebde0(void);

extern int g_007dc7d4;
extern int g_007dc7d0;

__declspec(naked) void FUN_004ebcf0(void)
{
    __asm {
        sub     esp, 0x4c
        push    0x77471c
        lea     ecx, [esp + 0x8]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [eax]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x8]
        call    FUN_004125e0
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (8B 04 24 vs ref 8B 44 24 00) */
        __emit  0x8B
        __emit  0x44
        __emit  0x24
        __emit  0x00
        push    0x0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004d2000
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (8B 04 24 vs ref 8B 44 24 00) */
        __emit  0x8B
        __emit  0x44
        __emit  0x24
        __emit  0x00
        test    eax, eax
        jz      L1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L2
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        jz      L3
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        ja      L4
L3:
        lea     ecx, [esp + 0x8]
        call    FUN_004d21c0
        xor     eax, eax
        add     esp, 0x4c
        ret
L4:
        mov     ecx, dword ptr [g_007dc7d4]
        push    esi
        call    FUN_00416110
        test    eax, eax
        jz      L5
        mov     ecx, dword ptr [esp + 0x68]
        mov     edx, dword ptr [esp + 0x64]
        push    ecx
        mov     ecx, dword ptr [esp + 0x64]
        push    edx
        mov     edx, dword ptr [esp + 0x64]
        push    ecx
        push    edx
        mov     edx, dword ptr [esp + 0x64]
        lea     ecx, [esp + 0x5c]
        push    ecx
        mov     ecx, dword ptr [g_007dc7d0]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_004ebde0
        lea     ecx, [esp + 0xc]
        mov     esi, eax
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x4c
        ret
L5:
        lea     ecx, [esp + 0xc]
        xor     esi, esi
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x4c
        ret
    }
}
