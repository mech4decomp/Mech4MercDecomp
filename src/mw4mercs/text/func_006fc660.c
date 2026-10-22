/*
 * FUN_006fc660 (413 B) — __thiscall file-open wrapper. Copies the filename
 * into the object, then loops on the open mode (0/1/2) calling CreateFileA
 * (IAT 0x76b0e8) with the appropriate access/share/disposition flags. On
 * failure it formats an error string via sprintf (IAT 0x76b420) + FUN_0072d830
 * and logs it through FUN_006f91d0, trapping with int 3 if logging succeeds.
 * Invalid modes go through FUN_006fab90 (assert).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * g_0076b0e8;   /* CreateFileA IAT */
extern void * g_0076b420;   /* sprintf IAT */
extern int g_00896c88;
extern void * __cdecl FUN_0072d830(int, int);
extern int __cdecl FUN_006f91d0(int, char *);
extern int __cdecl FUN_006fab90(char *);

__declspec(naked) void FUN_006fc660(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x300
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        push    ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        push    esi
        push    edi
        mov     dword ptr [ebx], eax
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [ebx + 0x8]
        mov     dword ptr [ebp + 0xc], esi
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0xc]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [g_0076b0e8]
        mov     edi, dword ptr [g_0076b420]
        xor     eax, eax
        mov     dword ptr [ebx + 0x110], eax
        mov     dword ptr [ebx + 0x10c], eax
        mov     dword ptr [ebx + 0x4], eax
        jmp     L_c6be
L_c6bb:
        mov     edx, dword ptr [ebp + 0x8]
L_c6be:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jnz     L_c724
        push    eax
        push    0x8000000
        push    0x3
        push    eax
        push    0x1
        push    0x80000000
        push    edx
        call    esi
        cmp     eax, -0x1
        mov     dword ptr [ebx + 0x4], eax
        jnz     L_c7f1
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [g_00896c88]
        push    ecx
        push    0x274d
        push    edx
        call    FUN_0072d830
        push    eax
        lea     eax, [ebp + 0xfffffe00]
        push    eax
        call    edi
        add     esp, 0xc
        lea     ecx, [ebp + 0xfffffe00]
        push    ecx
        push    0x982
        call    FUN_006f91d0
        test    eax, eax
        jz      L_c7f1
        int     3
        jmp     L_c7f1
L_c724:
        cmp     eax, 0x1
        jnz     L_c783
        push    0x0
        push    0x80
        push    0x2
        push    0x0
        push    0x0
        push    0xc0000000
        push    edx
        call    esi
        cmp     eax, -0x1
        mov     dword ptr [ebx + 0x4], eax
        jnz     L_c7f1
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [g_00896c88]
        push    edx
        push    0x274f
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [ebp + 0xffffff00]
        push    ecx
        call    edi
        add     esp, 0xc
        lea     edx, [ebp + 0xffffff00]
        push    edx
        push    0x982
        call    FUN_006f91d0
        test    eax, eax
        jz      L_c7f1
        int     3
        jmp     L_c7f1
L_c783:
        cmp     eax, 0x2
        jnz     L_c7df
        push    0x0
        push    0x80
        push    0x4
        push    0x0
        push    0x0
        push    0xc0000000
        push    edx
        call    esi
        cmp     eax, -0x1
        mov     dword ptr [ebx + 0x4], eax
        jnz     L_c7f1
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [g_00896c88]
        push    eax
        push    0x2750
        push    ecx
        call    FUN_0072d830
        push    eax
        lea     edx, [ebp + 0xfffffd00]
        push    edx
        call    edi
        add     esp, 0xc
        lea     eax, [ebp + 0xfffffd00]
        push    eax
        push    0x982
        call    FUN_006f91d0
        test    eax, eax
        jz      L_c7f1
        int     3
        jmp     L_c7f1
L_c7df:
        push    0x7a02cc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_c7f1
        int     3
L_c7f1:
        cmp     dword ptr [ebx + 0x4], -0x1
        jz      L_c6bb
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
