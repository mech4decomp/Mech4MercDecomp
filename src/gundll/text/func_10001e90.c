/*
 * FUN_10001E90 (119 B) - __stdcall, RET 0x14.
 * WideCharToMultiByte wrapper (5-arg variant): converts a wide string to
 * multibyte using local default-char/used-default-char slots. On failure
 * returns a formatted HRESULT from GetLastError; on success stores the
 * byte count through the 5th arg.
 *
 * CFLAGS: /O1
 */

extern void *g_100490fc;   /* IAT: WideCharToMultiByte */
extern void *g_100490e4;   /* IAT: GetLastError */

__declspec(naked) void __stdcall FUN_10001E90(void)
{
    __asm {
        sub     esp, 0x8
        mov     edx, dword ptr [esp + 0x18]
        push    esi
        lea     eax, [esp + 0x8]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0xb]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        xor     esi, esi
        push    edx
        push    esi
        push    esi
        mov     byte ptr [esp + 0x27], 0x58
        mov     dword ptr [esp + 0x28], esi
        call    dword ptr [g_100490fc]
        cmp     eax, esi
        jne     L_e66
        call    dword ptr [g_100490e4]
        cmp     eax, esi
        jl      L_f00
        jle     L_f00
        and     eax, 0xffff
        or      eax, 0x80070000
        pop     esi
        add     esp, 0x8
        ret     0x14
    L_e66:
        cmp     dword ptr [esp + 0x8], esi
        je      L_ef8
        mov     eax, 0xc112000c
        pop     esi
        add     esp, 0x8
        ret     0x14
    L_ef8:
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [ecx], eax
        mov     eax, esi
    L_f00:
        pop     esi
        add     esp, 0x8
        ret     0x14
    }
}
