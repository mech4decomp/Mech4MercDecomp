/*
 * FUN_10042c87 (143 B) - __stdcall, RET.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1003c5f0(void);   /* rel32 call (strlen) */
extern void __cdecl FUN_1003c3c5(void);   /* rel32 call (malloc) */
extern void __cdecl FUN_1003c500(void);   /* rel32 call */
extern int *g_10054b48;                   /* mov reg,[g] */

__declspec(naked) void __stdcall FUN_10042c87(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [g_10054b48]
        push    edi
        mov     dword ptr [ebp - 8], esi
        xor     ebx, ebx
        mov     dword ptr [ebp - 4], 7
L_a1:
        push    dword ptr [esi + 0x1c]
        call    FUN_1003c5f0
        push    dword ptr [esi]
        mov     edi, eax
        call    FUN_1003c5f0
        add     eax, ebx
        pop     ecx
        add     esi, 4
        dec     dword ptr [ebp - 4]
        pop     ecx
        lea     ebx, [eax + edi*1 + 2]
        jnz     L_a1
        inc     ebx
        push    ebx
        call    FUN_1003c3c5
        mov     esi, eax
        pop     ecx
        test    esi, esi
        mov     dword ptr [ebp - 4], esi
        jz      L_0e
        mov     edi, dword ptr [ebp - 8]
        push    7
        pop     ebx
L_d9:
        mov     byte ptr [esi], 0x3a
        push    dword ptr [edi]
        inc     esi
        push    esi
        call    FUN_1003c500
        push    eax
        call    FUN_1003c5f0
        add     esi, eax
        mov     byte ptr [esi], 0x3a
        push    dword ptr [edi + 0x1c]
        inc     esi
        push    esi
        call    FUN_1003c500
        push    eax
        call    FUN_1003c5f0
        add     esp, 0x18
        add     esi, eax
        add     edi, 4
        dec     ebx
        jnz     L_d9
        and     byte ptr [esi], 0
L_0e:
        mov     eax, dword ptr [ebp - 4]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
