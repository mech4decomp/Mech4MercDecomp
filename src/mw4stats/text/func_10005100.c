/*
 * FUN_10005100 (720 B) - __thiscall. Writes a large set of ZS_* stat fields
 * via FUN_100047d0 / FUN_100053d0 / FUN_10004aa0 / FUN_10005490 / FUN_100054f0,
 * then dispatches on the value at this+0xb0 (via FUN_10004140) to write
 * team-win / objective fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10004c40(void);
extern void __cdecl FUN_10004140(void);
extern void __cdecl FUN_10004aa0(void);
extern void __cdecl FUN_10005490(void);
extern void __cdecl FUN_100047d0(void);
extern void __cdecl FUN_100053d0(void);
extern void __cdecl FUN_100054f0(void);

__declspec(naked) void __cdecl FUN_10005100(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        push    edi
        call    FUN_10004c40
        lea     ecx, [esi + 0xb4]
        call    FUN_10004140
        cmp     eax, 4
        jnz     L1
        lea     eax, [esi + 0xc4]
        push    eax
        push    0x10024af0
        push    edi
        call    FUN_10004aa0
        add     esp, 0xc
L1:
        lea     ecx, [esi + 0x15c]
        push    ecx
        push    0x10024b00
        push    edi
        call    FUN_10005490
        lea     edx, [esi + 0x224]
        push    edx
        push    0x10024b20
        push    edi
        call    FUN_10004aa0
        mov     eax, dword ptr [esi + 0x2bc]
        push    eax
        push    0x10024b38
        push    edi
        call    FUN_100047d0
        mov     ecx, dword ptr [esi + 0x2c4]
        mov     edx, dword ptr [esi + 0x2c0]
        push    ecx
        push    edx
        push    0x10024b68
        push    edi
        call    FUN_100053d0
        mov     eax, dword ptr [esi + 0x2c8]
        push    eax
        push    0x10024b98
        push    edi
        call    FUN_100047d0
        mov     ecx, dword ptr [esi + 0x2cc]
        add     esp, 0x40
        push    ecx
        push    0x10024bd0
        push    edi
        call    FUN_100047d0
        mov     edx, dword ptr [esi + 0x2d0]
        push    edx
        push    0x10024c00
        push    edi
        call    FUN_100047d0
        mov     eax, dword ptr [esi + 0x2d8]
        mov     ecx, dword ptr [esi + 0x2d4]
        push    eax
        push    ecx
        push    0x10024c20
        push    edi
        call    FUN_100053d0
        mov     edx, dword ptr [esi + 0x2dc]
        push    edx
        push    0x10024c40
        push    edi
        call    FUN_100047d0
        mov     eax, dword ptr [esi + 0x2e0]
        push    eax
        push    0x10024c64
        push    edi
        call    FUN_100047d0
        mov     ecx, dword ptr [esi + 0x2e4]
        add     esp, 0x40
        push    ecx
        push    0x10024c80
        push    edi
        call    FUN_100047d0
        mov     edx, dword ptr [esi + 0x2e8]
        push    edx
        push    0x10024c94
        push    edi
        call    FUN_100047d0
        mov     eax, dword ptr [esi + 0x2ec]
        push    eax
        push    0x10024cb0
        push    edi
        call    FUN_100047d0
        mov     ecx, dword ptr [esi + 0x2f0]
        push    ecx
        push    0x10024cc4
        push    edi
        call    FUN_100047d0
        mov     edx, dword ptr [esi + 0x2f8]
        mov     eax, dword ptr [esi + 0x2f4]
        push    edx
        push    eax
        push    0x10024cd4
        push    edi
        call    FUN_100053d0
        mov     ecx, dword ptr [esi + 0x2fc]
        add     esp, 0x40
        push    ecx
        push    0x10024cf8
        push    edi
        call    FUN_100047d0
        mov     edx, dword ptr [esi + 0x300]
        push    edx
        push    0x10024d0c
        push    edi
        call    FUN_100047d0
        lea     eax, [esi + 0x304]
        push    eax
        push    0x10024d2c
        push    edi
        call    FUN_100054f0
        mov     ecx, dword ptr [esi + 0x334]
        push    ecx
        push    0x10024d4c
        push    edi
        call    FUN_100047d0
        lea     edx, [esi + 0x338]
        push    edx
        push    0x10024d64
        push    edi
        call    FUN_10004aa0
        mov     eax, dword ptr [esi + 0x3d0]
        push    eax
        push    0x10024d74
        push    edi
        call    FUN_100047d0
        mov     ecx, dword ptr [esi + 0x3d4]
        add     esp, 0x48
        push    ecx
        push    0x10024d90
        push    edi
        call    FUN_100047d0
        lea     edx, [esi + 0x3d8]
        push    edx
        push    0x10024dac
        push    edi
        call    FUN_100054f0
        mov     eax, dword ptr [esi + 0x408]
        push    eax
        push    0x10024dd4
        push    edi
        call    FUN_100047d0
        lea     ecx, [esi + 0x40c]
        push    ecx
        push    0x10024e04
        push    edi
        call    FUN_10004aa0
        mov     edx, dword ptr [esi + 0x4a4]
        push    edx
        push    0x10024e1c
        push    edi
        call    FUN_100047d0
        lea     ebx, [esi + 0xb0]
        add     esp, 0x3c
        mov     ecx, ebx
        call    FUN_10004140
        test    eax, eax
        jnz     L2
        mov     eax, dword ptr [esi + 0x4a8]
        push    eax
        push    0x10024e2c
        push    edi
        call    FUN_100047d0
        add     esp, 0xc
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L2:
        mov     ecx, ebx
        call    FUN_10004140
        cmp     eax, 2
        jnz     L3
        mov     ecx, dword ptr [esi + 0x4a8]
        push    ecx
        push    0x10024e44
        push    edi
        call    FUN_100047d0
        add     esp, 0xc
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L3:
        mov     ecx, ebx
        call    FUN_10004140
        cmp     eax, 4
        jnz     L4
        mov     edx, dword ptr [esi + 0x4ac]
        push    edx
        push    0x10024e5c
        push    edi
        call    FUN_100047d0
        mov     eax, dword ptr [esi + 0x4a8]
        push    eax
        push    0x10024e90
        push    edi
        call    FUN_100047d0
        mov     ecx, dword ptr [esi + 0x4b0]
        push    ecx
        push    0x10024ea8
        push    edi
        call    FUN_100047d0
        add     esp, 0x24
L4:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
