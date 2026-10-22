/*
 * FUN_006f2700 (1213 B) — MSR spectator settings loader.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Looks up the "MSR Spectator" object via FUN_0040ecc0. If found, walks a
 * table of named settings (FUN_00411bf0) and applies each via FUN_006f2420
 * with an index. If not found, applies a fixed default table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_006f2420(void);

__declspec(naked) void __cdecl FUN_006f2700(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    0x7b6a7c
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        push    0x0
        jz      L_2a78
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6a8c
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2741
        mov     ecx, dword ptr [esp + 0xc]
        push    0x0
        push    ecx
        mov     ecx, esi
        call    FUN_006f2420
L_2741:
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7b6a94
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2766
        mov     eax, dword ptr [esp + 0xc]
        push    0x1
        push    eax
        mov     ecx, esi
        call    FUN_006f2420
L_2766:
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7b6aa8
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_278b
        mov     edx, dword ptr [esp + 0xc]
        push    0x2
        push    edx
        mov     ecx, esi
        call    FUN_006f2420
L_278b:
        push    0x0
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6abc
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_27b0
        mov     ecx, dword ptr [esp + 0xc]
        push    0x3
        push    ecx
        mov     ecx, esi
        call    FUN_006f2420
L_27b0:
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7b6ad8
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_27d5
        mov     eax, dword ptr [esp + 0xc]
        push    0x4
        push    eax
        mov     ecx, esi
        call    FUN_006f2420
L_27d5:
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7b6af4
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_27fa
        mov     edx, dword ptr [esp + 0xc]
        push    0x5
        push    edx
        mov     ecx, esi
        call    FUN_006f2420
L_27fa:
        push    0x0
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6b10
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_281f
        mov     ecx, dword ptr [esp + 0xc]
        push    0x6
        push    ecx
        mov     ecx, esi
        call    FUN_006f2420
L_281f:
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7b6b2c
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2844
        mov     eax, dword ptr [esp + 0xc]
        push    0x7
        push    eax
        mov     ecx, esi
        call    FUN_006f2420
L_2844:
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7b6b48
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2869
        mov     edx, dword ptr [esp + 0xc]
        push    0x8
        push    edx
        mov     ecx, esi
        call    FUN_006f2420
L_2869:
        push    0x0
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6b64
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_288e
        mov     ecx, dword ptr [esp + 0xc]
        push    0x9
        push    ecx
        mov     ecx, esi
        call    FUN_006f2420
L_288e:
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7b6b74
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_28b3
        mov     eax, dword ptr [esp + 0xc]
        push    0xa
        push    eax
        mov     ecx, esi
        call    FUN_006f2420
L_28b3:
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7b6b84
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_28d8
        mov     edx, dword ptr [esp + 0xc]
        push    0xb
        push    edx
        mov     ecx, esi
        call    FUN_006f2420
L_28d8:
        push    0x0
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6b94
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_28fd
        mov     ecx, dword ptr [esp + 0xc]
        push    0xc
        push    ecx
        mov     ecx, esi
        call    FUN_006f2420
L_28fd:
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7b6ba4
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2922
        mov     eax, dword ptr [esp + 0xc]
        push    0xd
        push    eax
        mov     ecx, esi
        call    FUN_006f2420
L_2922:
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7b6bb4
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2947
        mov     edx, dword ptr [esp + 0xc]
        push    0xe
        push    edx
        mov     ecx, esi
        call    FUN_006f2420
L_2947:
        push    0x0
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6bc4
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_296c
        mov     ecx, dword ptr [esp + 0xc]
        push    0xf
        push    ecx
        mov     ecx, esi
        call    FUN_006f2420
L_296c:
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7b6bd4
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2991
        mov     eax, dword ptr [esp + 0xc]
        push    0x10
        push    eax
        mov     ecx, esi
        call    FUN_006f2420
L_2991:
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7b6be4
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_29b6
        mov     edx, dword ptr [esp + 0xc]
        push    0x11
        push    edx
        mov     ecx, esi
        call    FUN_006f2420
L_29b6:
        push    0x0
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6bf4
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_29db
        mov     ecx, dword ptr [esp + 0xc]
        push    0x12
        push    ecx
        mov     ecx, esi
        call    FUN_006f2420
L_29db:
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7b6c00
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2a00
        mov     eax, dword ptr [esp + 0xc]
        push    0x13
        push    eax
        mov     ecx, esi
        call    FUN_006f2420
L_2a00:
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7b6c0c
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2a25
        mov     edx, dword ptr [esp + 0xc]
        push    0x14
        push    edx
        mov     ecx, esi
        call    FUN_006f2420
L_2a25:
        push    0x0
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7b6c18
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2a4a
        mov     ecx, dword ptr [esp + 0xc]
        push    0x15
        push    ecx
        mov     ecx, esi
        call    FUN_006f2420
L_2a4a:
        push    0x0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7b6c28
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_2bb8
        mov     eax, dword ptr [esp + 0xc]
        push    0x16
        push    eax
        mov     ecx, esi
        call    FUN_006f2420
        pop     edi
        pop     esi
        ret     0x4
L_2a78:
        push    0x7b6c38
        mov     ecx, esi
        call    FUN_006f2420
        push    0x1
        push    0x7b6c4c
        mov     ecx, esi
        call    FUN_006f2420
        push    0x2
        push    0x7b6c50
        mov     ecx, esi
        call    FUN_006f2420
        push    0x3
        push    0x7b6c54
        mov     ecx, esi
        call    FUN_006f2420
        push    0x4
        push    0x7b6c58
        mov     ecx, esi
        call    FUN_006f2420
        push    0x5
        push    0x7b6c5c
        mov     ecx, esi
        call    FUN_006f2420
        push    0x6
        push    0x7b6c64
        mov     ecx, esi
        call    FUN_006f2420
        push    0x7
        push    0x7b6c6c
        mov     ecx, esi
        call    FUN_006f2420
        push    0x8
        push    0x7b6c74
        mov     ecx, esi
        call    FUN_006f2420
        push    0x9
        push    0x7b6c78
        mov     ecx, esi
        call    FUN_006f2420
        push    0xa
        push    0x7b6c7c
        mov     ecx, esi
        call    FUN_006f2420
        push    0xb
        push    0x7b6c80
        mov     ecx, esi
        call    FUN_006f2420
        push    0xc
        push    0x7b6c88
        mov     ecx, esi
        call    FUN_006f2420
        push    0xd
        push    0x7b6c8c
        mov     ecx, esi
        call    FUN_006f2420
        push    0xe
        push    0x7b6c90
        mov     ecx, esi
        call    FUN_006f2420
        push    0xf
        push    0x7b6c98
        mov     ecx, esi
        call    FUN_006f2420
        push    0x10
        push    0x7b6c9c
        mov     ecx, esi
        call    FUN_006f2420
        push    0x11
        push    0x7b6ca4
        mov     ecx, esi
        call    FUN_006f2420
        push    0x12
        push    0x7b6cac
        mov     ecx, esi
        call    FUN_006f2420
        push    0x13
        push    0x7b6cb0
        mov     ecx, esi
        call    FUN_006f2420
        push    0x14
        push    0x7b6cb4
        mov     ecx, esi
        call    FUN_006f2420
        push    0x15
        push    0x7b6cbc
        mov     ecx, esi
        call    FUN_006f2420
        push    0x16
        push    0x7b6cc0
        mov     ecx, esi
        call    FUN_006f2420
L_2bb8:
        pop     edi
        pop     esi
        ret     0x4
    }
}
