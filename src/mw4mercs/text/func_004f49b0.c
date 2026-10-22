/*
 * FUN_004f49b0 (472 B) — Adept::Effect subsystem factory. Allocates the
 * main Effect object (0xa4 bytes) via FUN_00501a20, then builds several
 * sub-objects (VideoStatus, AudioStatus, StartsRunning, Translation,
 * Rotation, KillOnAttachedEntityDeath) via FUN_005013f0 / FUN_005008e0
 * and attaches them via FUN_005016b0 / FUN_00500ec0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc89c;
extern int g_007dc8c8;
extern int g_007dc8a0;
extern int g_007dc898;

extern void FUN_004084d0(void);
extern void FUN_00501a20(void);
extern void FUN_005013f0(void);
extern void FUN_005016b0(void);
extern void FUN_005008e0(void);
extern void FUN_00500ec0(void);

__declspec(naked) void FUN_004f49b0(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L4a0b
        mov     ecx, dword ptr [g_007dc89c]
        mov     edx, dword ptr [g_007dc8c8]
        push    0x502c60
        push    0x5028b0
        push    0x5078e0
        push    0x0
        push    0x507870
        push    ecx
        push    0x507810
        push    0x4f4bc0
        push    0x0
        push    0x0
        push    edx
        push    0x775490
        push    0x1d3
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_007dc8a0], eax
        jmp     L4a15
L4a0b:
        mov     dword ptr [g_007dc8a0], 0
L4a15:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L4a43
        push    0x250
        push    0xe
        push    0x775484
        push    0xa
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x775474
        jmp     L4a45
L4a43:
        xor     esi, esi
L4a45:
        mov     eax, dword ptr [g_007dc8a0]
        push    esi
        lea     ecx, [eax+0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L4a80
        push    0x254
        push    0x1
        push    0x775468
        push    0xb
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x773234
        jmp     L4a82
L4a80:
        xor     esi, esi
L4a82:
        mov     ecx, dword ptr [g_007dc8a0]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L4abb
        push    0x50
        push    0xe
        push    0x775458
        push    0xd
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L4abd
L4abb:
        xor     esi, esi
L4abd:
        mov     edx, dword ptr [g_007dc8a0]
        push    esi
        lea     ecx, [edx+0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L4af6
        push    0x54
        push    0x5
        push    0x77544c
        push    0xe
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x77543c
        jmp     L4af8
L4af6:
        xor     esi, esi
L4af8:
        mov     eax, dword ptr [g_007dc8a0]
        push    esi
        lea     ecx, [eax+0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L4b30
        push    0x60
        push    0x7
        push    0x775430
        push    0xf
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775420
        jmp     L4b32
L4b30:
        xor     esi, esi
L4b32:
        mov     ecx, dword ptr [g_007dc8a0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L4b6b
        push    0x70
        push    0xe
        push    0x775404
        push    0x10
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L4b6d
L4b6b:
        xor     esi, esi
L4b6d:
        mov     edx, dword ptr [g_007dc8a0]
        push    esi
        lea     ecx, [edx+0x74]
        call    FUN_00500ec0
        mov     dword ptr [g_007dc898], 0
        pop     esi
        ret
    }
}
