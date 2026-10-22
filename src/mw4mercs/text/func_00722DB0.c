/*
 * In-.text data block 0x722DB0 (438 B) — single __stdcall function (RET 4,
 * 1 param). Indexes a per-slot table (0x857f48 / 0x8580a8 / 0x858068 /
 * 0x858184) by the slot index, accumulates a double, reads a 0x50-byte
 * record via FUN_007554A0, copies it into the slot table, and conditionally
 * copies a 0x20-byte name block (0x858484) either element-wise (calling
 * FUN_007238A0 for empty slots) or via rep movsd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707E70(void);
extern void __cdecl FUN_00755680(void);
extern void __cdecl FUN_007554A0(void);
extern void __cdecl FUN_006FAB90(void);
extern void __cdecl FUN_007238A0(void);
extern unsigned char g_87DD0A;
extern unsigned char g_8589D5;
extern unsigned char g_858894;

__declspec(naked) void FUN_00722DB0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x50
        push    ebx
        push    esi
        push    edi
        xor     eax, eax
        mov     ecx, 0x14
        lea     edi, [ebp - 0x50]
        rep     stosd
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi*4 + 0x857f48]
        test    eax, eax
        je      L722F5D
        mov     ebx, 1
        push    ebx
        call    FUN_00707E70
        fcomp   qword ptr [edi*8 + 0x8580a8]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0x84            /* test bl,ah: MSVC6 swaps operand order (84 DC) */
        __emit  0xE3
        jne     L722F5D
        push    ebx
        call    FUN_00707E70
        fadd    dword ptr [edi*4 + 0x858068]
        mov     byte ptr [g_87DD0A], bl
        fstp    qword ptr [edi*8 + 0x8580a8]
        mov     eax, dword ptr [edi*4 + 0x857f48]
        push    eax
        call    FUN_00755680
        test    eax, eax
        mov     byte ptr [g_87DD0A], 0
        je      L722E2D
        cmp     eax, ebx
        jne     L722F57
L722E2D:
        mov     edx, dword ptr [edi*4 + 0x857f48]
        lea     ecx, [ebp - 0x50]
        push    ecx
        push    0x50
        push    edx
        mov     byte ptr [g_87DD0A], bl
        call    FUN_007554A0
        cmp     eax, 0x8007001e
        mov     byte ptr [g_87DD0A], 0
        je      L722F57
        cmp     eax, 0x8007000c
        je      L722F57
        test    eax, eax
        je      L722E79
        push    0x7a5410
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L722E79
        int     3
L722E79:
        mov     ecx, dword ptr [ebp - 0x50]
        mov     edx, dword ptr [ebp - 0x4c]
        lea     eax, [edi + edi*2]
        shl     eax, 4
        mov     dword ptr [eax + 0x858184], ecx
        mov     ecx, dword ptr [ebp - 0x48]
        mov     dword ptr [eax + 0x858188], edx
        mov     edx, dword ptr [ebp - 0x44]
        mov     dword ptr [eax + 0x85818c], ecx
        mov     ecx, dword ptr [ebp - 0x40]
        mov     dword ptr [eax + 0x858190], edx
        mov     edx, dword ptr [ebp - 0x3c]
        mov     dword ptr [eax + 0x858194], ecx
        mov     ecx, dword ptr [ebp - 0x38]
        mov     dword ptr [eax + 0x858198], edx
        mov     edx, dword ptr [ebp - 0x34]
        mov     dword ptr [eax + 0x85819c], ecx
        mov     ecx, dword ptr [ebp - 0x30]
        mov     dword ptr [eax + 0x8581a0], edx
        mov     edx, dword ptr [ebp - 0x2c]
        mov     dword ptr [eax + 0x8581a4], ecx
        mov     ecx, dword ptr [ebp - 0x28]
        mov     dword ptr [eax + 0x8581a8], edx
        mov     edx, dword ptr [ebp - 0x24]
        mov     dword ptr [eax + 0x8581ac], ecx
        mov     dword ptr [eax + 0x8581b0], edx
        mov     al, byte ptr [g_8589D5]
        test    al, al
        je      L722F3B
        mov     eax, edi
        xor     esi, esi
        shl     eax, 5
        lea     ebx, [eax + 0x858484]
L722F01:
        mov     al, byte ptr [ebp + esi - 0x20]
        test    al, al
        je      L722F25
        cmp     byte ptr [ebx + esi], 0
        jne     L722F25
        mov     ecx, edi
        or      ecx, 0x100
        shl     ecx, 8
        or      ecx, esi
        shl     ecx, 8
        push    ecx
        call    FUN_007238A0
L722F25:
        mov     dl, byte ptr [ebp + esi - 0x20]
        mov     byte ptr [ebx + esi], dl
        inc     esi
        cmp     esi, 0x20
        jl      L722F01
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L722F3B:
        shl     edi, 5
        add     edi, 0x858484
        mov     ecx, 8
        lea     esi, [ebp - 0x20]
        rep     movsd
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L722F57:
        mov     byte ptr [g_858894], bl
L722F5D:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
