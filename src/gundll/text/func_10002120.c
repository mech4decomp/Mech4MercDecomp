/*
 * FUN_10002120 (173 B) - __stdcall, RET 0x8.
 * Multibyte-to-wide-string helper: queries the required size via
 * MultiByteToWideChar, allocates via FUN_10001d50, converts, and
 * returns the wide buffer in *param_2. Frees the buffer on failure.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *g_10049100;          /* IAT: MultiByteToWideChar */
extern void *g_100490e4;          /* IAT: GetLastError */
extern void __cdecl FUN_10001d50(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10002120(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        test    ebx, ebx
        mov     dword ptr [esp + 0x4], 0
        jnz     L_2139
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x8
    L_2139:
        push    ebp
        mov     ebp, dword ptr [g_10049100]
        push    esi
        push    edi
        push    0x0
        push    0x0
        push    -1
        push    ebx
        push    0x0
        push    0xfde9
        call    ebp
        mov     esi, eax
        lea     eax, [esi + esi]
        push    eax
        call    FUN_10001d50
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jnz     L_217a
        pop     edi
        pop     esi
        mov     dword ptr [esp + 0x8], 0x8007000e
        mov     eax, dword ptr [esp + 0x8]
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    L_217a:
        push    esi
        push    edi
        push    -1
        push    ebx
        push    0x0
        push    0xfde9
        call    ebp
        test    eax, eax
        jnz     L_21bb
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_21a2
        jle     L_21a2
        and     eax, 0xffff
        or      eax, 0x80070000
    L_21a2:
        push    edi
        mov     dword ptr [esp + 0x14], eax
        call    FUN_10001d60
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    L_21bb:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
