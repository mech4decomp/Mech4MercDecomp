/*
 * FUN_10038625 (444 B) __cdecl.
 * CRT std-handle table init: allocates a 0x480-byte handle table
 * (DAT_10076aa0, capacity DAT_10076ba0), reads STARTUPINFO reserved
 * handles, and fills the first 3 standard-handle slots via GetStdHandle.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076aa0;   /* DAT_10076aa0 handle table base */
extern unsigned int g_10076aa4;   /* DAT_10076aa4 (table + 4) */
extern unsigned int g_10076ba0;   /* DAT_10076ba0 handle count */
extern void *g_100490f8;          /* IAT: GetStartupInfoA */
extern void *g_100490f4;          /* IAT: GetFileType */
extern void *g_100490f0;          /* IAT: GetStdHandle */
extern void *g_100490ec;          /* IAT: SetHandleCount */
extern void __cdecl FUN_1003c3c5(void);   /* rel32 call (_malloc) */
extern void __cdecl FUN_100374e6(void);   /* rel32 call (__amsg_exit) */

__declspec(naked) void __cdecl FUN_10038625(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x48
        push    ebx
        push    esi
        push    edi
        push    0x480
        call    FUN_1003c3c5
        mov     esi, eax
        pop     ecx
        test    esi, esi
        jnz     L_10038647
        push    0x1b
        call    FUN_100374e6
        pop     ecx
    L_10038647:
        mov     dword ptr [g_10076aa0], esi
        mov     dword ptr [g_10076ba0], 0x20
        lea     eax, [esi + 0x480]
    L_1003865d:
        cmp     esi, eax
        jnc     L_1003867f
        and     byte ptr [esi + 0x4], 0
        or      dword ptr [esi], 0xffffffff
        and     dword ptr [esi + 0x8], 0
        mov     byte ptr [esi + 0x5], 0xa
        mov     eax, dword ptr [g_10076aa0]
        add     esi, 0x24
        add     eax, 0x480
        jmp     L_1003865d
    L_1003867f:
        lea     eax, [ebp - 0x48]
        push    eax
        call    dword ptr [g_100490f8]
        cmp     word ptr [ebp - 0x16], 0
        jz      L_10038765
        mov     eax, dword ptr [ebp - 0x14]
        test    eax, eax
        jz      L_10038765
        mov     edi, dword ptr [eax]
        lea     ebx, [eax + 0x4]
        lea     eax, [ebx + edi]
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, 0x800
        cmp     edi, eax
        jl      L_100386b5
        mov     edi, eax
    L_100386b5:
        cmp     dword ptr [g_10076ba0], edi
        jge     L_10038713
        mov     esi, offset g_10076aa4
    L_100386c2:
        push    0x480
        call    FUN_1003c3c5
        test    eax, eax
        pop     ecx
        jz      L_1003870d
        add     dword ptr [g_10076ba0], 0x20
        mov     dword ptr [esi], eax
        lea     ecx, [eax + 0x480]
    L_100386e0:
        cmp     eax, ecx
        jnc     L_10038700
        and     byte ptr [eax + 0x4], 0
        or      dword ptr [eax], 0xffffffff
        and     dword ptr [eax + 0x8], 0
        mov     byte ptr [eax + 0x5], 0xa
        mov     ecx, dword ptr [esi]
        add     eax, 0x24
        add     ecx, 0x480
        jmp     L_100386e0
    L_10038700:
        add     esi, 0x4
        cmp     dword ptr [g_10076ba0], edi
        jl      L_100386c2
        jmp     L_10038713
    L_1003870d:
        mov     edi, dword ptr [g_10076ba0]
    L_10038713:
        xor     esi, esi
        test    edi, edi
        jle     L_10038765
    L_10038719:
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [eax]
        cmp     ecx, -0x1
        jz      L_1003875b
        mov     al, byte ptr [ebx]
        test    al, 0x1
        jz      L_1003875b
        test    al, 0x8
        jnz     L_10038738
        push    ecx
        call    dword ptr [g_100490f4]
        test    eax, eax
        jz      L_1003875b
    L_10038738:
        mov     ecx, esi
        mov     eax, esi
        sar     ecx, 0x5
        and     eax, 0x1f
        mov     ecx, dword ptr [ecx*4 + g_10076aa0]
        lea     eax, [eax + eax*8]
        lea     eax, [ecx + eax*4]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
        mov     cl, byte ptr [ebx]
        mov     byte ptr [eax + 0x4], cl
    L_1003875b:
        add     dword ptr [ebp - 0x4], 0x4
        inc     esi
        inc     ebx
        cmp     esi, edi
        jl      L_10038719
    L_10038765:
        xor     ebx, ebx
    L_10038767:
        mov     ecx, dword ptr [g_10076aa0]
        lea     eax, [ebx + ebx*8]
        cmp     dword ptr [ecx + eax*4], -0x1
        lea     esi, [ecx + eax*4]
        jnz     L_100387c6
        test    ebx, ebx
        mov     byte ptr [esi + 0x4], 0x81
        jnz     L_10038786
        push    -0xa
        pop     eax
        jmp     L_10038790
    L_10038786:
        mov     eax, ebx
        dec     eax
        neg     eax
        sbb     eax, eax
        add     eax, -0xb
    L_10038790:
        push    eax
        call    dword ptr [g_100490f0]
        mov     edi, eax
        cmp     edi, -0x1
        jz      L_100387b5
        push    edi
        call    dword ptr [g_100490f4]
        test    eax, eax
        jz      L_100387b5
        and     eax, 0xff
        mov     dword ptr [esi], edi
        cmp     eax, 0x2
        jnz     L_100387bb
    L_100387b5:
        or      byte ptr [esi + 0x4], 0x40
        jmp     L_100387ca
    L_100387bb:
        cmp     eax, 0x3
        jnz     L_100387ca
        or      byte ptr [esi + 0x4], 0x8
        jmp     L_100387ca
    L_100387c6:
        or      byte ptr [esi + 0x4], 0x80
    L_100387ca:
        inc     ebx
        cmp     ebx, 0x3
        jl      L_10038767
        push    dword ptr [g_10076ba0]
        call    dword ptr [g_100490ec]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
