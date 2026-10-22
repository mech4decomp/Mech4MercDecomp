/*
 * FUN_100021d0 (136 B) - __stdcall, RET 0xC.
 * Multibyte-to-wide-string helper with caller-supplied size: allocates
 * param_2*2 bytes via FUN_10001d50, converts via MultiByteToWideChar,
 * and returns the wide buffer in *param_3. Frees on failure.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *g_10049100;          /* IAT: MultiByteToWideChar */
extern void *g_100490e4;          /* IAT: GetLastError */
extern void __cdecl FUN_10001d50(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100021d0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        xor     ebx, ebx
        test    ebp, ebp
        jnz     L_21e3
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
    L_21e3:
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        lea     eax, [esi + esi]
        push    edi
        push    eax
        call    FUN_10001d50
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jnz     L_2209
        pop     edi
        pop     esi
        mov     ebx, 0x8007000e
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0xc
    L_2209:
        push    esi
        push    edi
        push    -1
        push    ebp
        push    0x0
        push    0xfde9
        call    dword ptr [g_10049100]
        test    eax, eax
        jnz     L_2249
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_2235
        jle     L_2235
        and     eax, 0xffff
        or      eax, 0x80070000
    L_2235:
        push    edi
        mov     ebx, eax
        call    FUN_10001d60
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0xc
    L_2249:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0xc
    }
}
