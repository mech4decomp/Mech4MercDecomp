/*
 * FUN_00750780 (1047 B) — Lookup a 16-byte key in a table of known
 * signatures (0x7a2ce0..0x7a3390) and return the matching result string
 * pointer (0x7ad144..0x7aceb4), or a default (0x79e7f8) if no match.
 *
 * __stdcall RET 4, one pointer param (EAX). Each candidate is compared
 * with `rep cmpsd` (4 dwords); on match the result address is returned.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__stdcall FUN_00750780(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     ecx, 0x4
        mov     edi, 0x7a2ce0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L2
        pop     edi
        mov     eax, 0x7ad144
        pop     esi
        ret     0x4
    L2:
        mov     ecx, 0x4
        mov     edi, 0x7a2cf0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L3
        pop     edi
        mov     eax, 0x7ad134
        pop     esi
        ret     0x4
    L3:
        mov     ecx, 0x4
        mov     edi, 0x7a2d00
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L4
        pop     edi
        mov     eax, 0x7ad124
        pop     esi
        ret     0x4
    L4:
        mov     ecx, 0x4
        mov     edi, 0x7a2d10
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L5
        pop     edi
        mov     eax, 0x7ad114
        pop     esi
        ret     0x4
    L5:
        mov     ecx, 0x4
        mov     edi, 0x7a2d20
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L6
        pop     edi
        mov     eax, 0x7ad100
        pop     esi
        ret     0x4
    L6:
        mov     ecx, 0x4
        mov     edi, 0x7a2d30
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L7
        pop     edi
        mov     eax, 0x7ad0ec
        pop     esi
        ret     0x4
    L7:
        mov     ecx, 0x4
        mov     edi, 0x7a2d40
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L8
        pop     edi
        mov     eax, 0x7ad0d8
        pop     esi
        ret     0x4
    L8:
        mov     ecx, 0x4
        mov     edi, 0x7a2d50
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L9
        pop     edi
        mov     eax, 0x7ad0c4
        pop     esi
        ret     0x4
    L9:
        mov     ecx, 0x4
        mov     edi, 0x7a2d60
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L10
        pop     edi
        mov     eax, 0x7ad0b0
        pop     esi
        ret     0x4
    L10:
        mov     ecx, 0x4
        mov     edi, 0x7a2d70
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L11
        pop     edi
        mov     eax, 0x7ad09c
        pop     esi
        ret     0x4
    L11:
        mov     ecx, 0x4
        mov     edi, 0x7a2d80
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L12
        pop     edi
        mov     eax, 0x7ad088
        pop     esi
        ret     0x4
    L12:
        mov     ecx, 0x4
        mov     edi, 0x7a2d90
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L13
        pop     edi
        mov     eax, 0x7ad070
        pop     esi
        ret     0x4
    L13:
        mov     ecx, 0x4
        mov     edi, 0x7afb20
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L14
        pop     edi
        mov     eax, 0x7ad05c
        pop     esi
        ret     0x4
    L14:
        mov     ecx, 0x4
        mov     edi, 0x7a2890
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L15
        pop     edi
        mov     eax, 0x7ad048
        pop     esi
        ret     0x4
    L15:
        mov     ecx, 0x4
        mov     edi, 0x7a28b0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L16
        pop     edi
        mov     eax, 0x7ad034
        pop     esi
        ret     0x4
    L16:
        mov     ecx, 0x4
        mov     edi, 0x7a28d0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L17
        pop     edi
        mov     eax, 0x7ad020
        pop     esi
        ret     0x4
    L17:
        mov     ecx, 0x4
        mov     edi, 0x7a2810
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L18
        pop     edi
        mov     eax, 0x7ad010
        pop     esi
        ret     0x4
    L18:
        mov     ecx, 0x4
        mov     edi, 0x7a2830
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L19
        pop     edi
        mov     eax, 0x7ad000
        pop     esi
        ret     0x4
    L19:
        mov     ecx, 0x4
        mov     edi, 0x7a2850
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L20
        pop     edi
        mov     eax, 0x7acff0
        pop     esi
        ret     0x4
    L20:
        mov     ecx, 0x4
        mov     edi, 0x7afbe0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L21
        pop     edi
        mov     eax, 0x7acfd8
        pop     esi
        ret     0x4
    L21:
        mov     ecx, 0x4
        mov     edi, 0x7a2b00
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L22
        pop     edi
        mov     eax, 0x7acfcc
        pop     esi
        ret     0x4
    L22:
        mov     ecx, 0x4
        mov     edi, 0x7a2b10
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L23
        pop     edi
        mov     eax, 0x7acfc0
        pop     esi
        ret     0x4
    L23:
        mov     ecx, 0x4
        mov     edi, 0x7a2b20
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L24
        pop     edi
        mov     eax, 0x7acfb4
        pop     esi
        ret     0x4
    L24:
        mov     ecx, 0x4
        mov     edi, 0x7a2b30
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L25
        pop     edi
        mov     eax, 0x7acfa8
        pop     esi
        ret     0x4
    L25:
        mov     ecx, 0x4
        mov     edi, 0x7a2c00
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L26
        pop     edi
        mov     eax, 0x7acf94
        pop     esi
        ret     0x4
    L26:
        mov     ecx, 0x4
        mov     edi, 0x7a3120
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L27
        pop     edi
        mov     eax, 0x7acf84
        pop     esi
        ret     0x4
    L27:
        mov     ecx, 0x4
        mov     edi, 0x7a2e70
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L28
        pop     edi
        mov     eax, 0x7acf70
        pop     esi
        ret     0x4
    L28:
        mov     ecx, 0x4
        mov     edi, 0x7a2ec0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L29
        pop     edi
        mov     eax, 0x7acf5c
        pop     esi
        ret     0x4
    L29:
        mov     ecx, 0x4
        mov     edi, 0x7a2e60
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L30
        pop     edi
        mov     eax, 0x7acf50
        pop     esi
        ret     0x4
    L30:
        mov     ecx, 0x4
        mov     edi, 0x7a2e00
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L31
        pop     edi
        mov     eax, 0x7acf40
        pop     esi
        ret     0x4
    L31:
        mov     ecx, 0x4
        mov     edi, 0x7a30d0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L32
        pop     edi
        mov     eax, 0x7acf28
        pop     esi
        ret     0x4
    L32:
        mov     ecx, 0x4
        mov     edi, 0x7a3120
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L33
        pop     edi
        mov     eax, 0x7acf18
        pop     esi
        ret     0x4
    L33:
        mov     ecx, 0x4
        mov     edi, 0x7a30c0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L34
        pop     edi
        mov     eax, 0x7acf00
        pop     esi
        ret     0x4
    L34:
        mov     ecx, 0x4
        mov     edi, 0x7a2da0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L35
        pop     edi
        mov     eax, 0x7acee8
        pop     esi
        ret     0x4
    L35:
        mov     ecx, 0x4
        mov     edi, 0x7afbb0
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L36
        pop     edi
        mov     eax, 0x7aced0
        pop     esi
        ret     0x4
    L36:
        mov     ecx, 0x4
        mov     edi, 0x7a3350
        mov     esi, eax
        xor     edx, edx
        rep     cmpsd
        jnz     L37
        pop     edi
        mov     eax, 0x7acec0
        pop     esi
        ret     0x4
    L37:
        mov     esi, eax
        xor     eax, eax
        mov     ecx, 0x4
        mov     edi, 0x7a3390
        rep     cmpsd
        mov     eax, 0x7aceb4
        jz      L38
        mov     eax, 0x79e7f8
    L38:
        pop     edi
        pop     esi
        ret     0x4
    }
}
