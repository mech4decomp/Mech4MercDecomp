/*
 * FUN_10001e10 (120 B) - __stdcall, RET 0x10.
 * WideCharToMultiByte wrapper: converts a wide string to multibyte,
 * using local default-char/used-default-char slots. On failure returns
 * a formatted HRESULT from GetLastError; on success checks the
 * used-default-char flag and stores the byte count.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *g_100490fc;   /* IAT: WideCharToMultiByte */
extern void *g_100490e4;   /* IAT: GetLastError */

__declspec(naked) void __stdcall FUN_10001e10(void)
{
    __asm {
        sub     esp, 0x8
        mov     edx, dword ptr [esp + 0x14]
        push    esi
        lea     eax, [esp + 0x8]
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        lea     ecx, [esp + 0xb]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    -1
        xor     esi, esi
        push    ecx
        push    esi
        push    esi
        mov     byte ptr [esp + 0x27], 0x58
        mov     dword ptr [esp + 0x28], esi
        call    dword ptr [g_100490fc]
        cmp     eax, esi
        jnz     L_e63
        call    dword ptr [g_100490e4]
        cmp     eax, esi
        jl      L_e81
        jle     L_e81
        and     eax, 0xffff
        or      eax, 0x80070000
        pop     esi
        add     esp, 0x8
        ret     0x10
    L_e63:
        cmp     dword ptr [esp + 0x8], esi
        jz      L_e75
        mov     eax, 0xc112000c
        pop     esi
        add     esp, 0x8
        ret     0x10
    L_e75:
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     ecx, esi
        jz      L_e7f
        mov     dword ptr [ecx], eax
    L_e7f:
        mov     eax, esi
    L_e81:
        pop     esi
        add     esp, 0x8
        ret     0x10
    }
}
