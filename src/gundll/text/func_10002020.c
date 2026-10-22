/*
 * FUN_10002020 (94 B) - __stdcall, RET 0x10.
 * WideCharToMultiByte wrapper (code page 0xfde9). On failure maps
 * ERROR_INSUFFICIENT_BUFFER (0x7a) to 0xc1120002 and other errors to
 * a formatted HRESULT; on success stores the byte count in *param_4.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *g_100490fc;   /* IAT: WideCharToMultiByte */
extern void *g_100490e4;   /* IAT: GetLastError */

__declspec(naked) void __stdcall FUN_10002020(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        xor     esi, esi
        push    esi
        push    esi
        push    eax
        push    ecx
        push    -1
        push    edx
        push    esi
        push    0xfde9
        call    dword ptr [g_100490fc]
        test    eax, eax
        jnz     L_2072
        mov     esi, dword ptr [g_100490e4]
        call    esi
        cmp     eax, 0x7a
        jnz     L_205c
        mov     eax, 0xc1120002
        pop     esi
        ret     0x10
    L_205c:
        call    esi
        test    eax, eax
        jl      L_207a
        jle     L_207a
        and     eax, 0xffff
        or      eax, 0x80070000
        pop     esi
        ret     0x10
    L_2072:
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx], eax
        mov     eax, esi
    L_207a:
        pop     esi
        ret     0x10
    }
}
