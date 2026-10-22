/*
 * FUN_00563710 (172 B) — wide-char (wchar_t) MAC/hardware address
 * formatter. Iterates 5 length groups, swprintf's each byte as "%02x"
 * and wcscat's it onto the destination wide string.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_77e81c[];
extern int (__cdecl *g_swprintf)(unsigned short *, const unsigned short *, ...);
extern unsigned short *(__cdecl *g_wcscat)(unsigned short *, const unsigned short *);

__declspec(naked) void FUN_00563710(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        mov     eax, 0x2
        push    ebp
        mov     ebp, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], eax
        push    esi
        xor     ebx, ebx
        lea     eax, [esp + 0x1c]
        push    edi
        mov     dword ptr [esp + 0x20], 0x4
        mov     dword ptr [esp + 0x30], 0x6
        mov     word ptr [ebp], 0x0
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x14], 0x5
L_758:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edi, dword ptr [ecx]
        xor     esi, esi
        test    edi, edi
        jbe     L_794
L_76a:
        mov     edx, dword ptr [esp + 0x38]
        add     ebx, edx
        xor     eax, eax
        mov     al, byte ptr [ebx + esi]
        lea     ecx, [esp + 0x18]
        push    eax
        push    offset g_str_77e81c
        push    ecx
        call    dword ptr [g_swprintf]
        lea     edx, [esp + 0x24]
        push    edx
        push    ebp
        call    dword ptr [g_wcscat]
        add     esp, 0x14
        inc     esi
        cmp     esi, edi
        __emit 0x72  /* __emit: MSVC6 miscomputes backward jcc rel-offset (call-reloc sits between branch and target) */
        __emit 0xD6
L_794:
        mov     ebx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esp + 0x14]
        add     ebx, edi
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x3c], ecx
        mov     dword ptr [esp + 0x14], eax
        jnz     L_758
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret
    }
}
