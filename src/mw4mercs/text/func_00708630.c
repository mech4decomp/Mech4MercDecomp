/*
 * FUN_00708630 (145 B) — copies a string to the clipboard via the Win32
 * clipboard API (IAT calls). __stdcall RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b4b4;   /* IAT: OpenClipboard */
extern void *g_0076b4a8;   /* IAT: EmptyClipboard */
extern void *g_0076b234;   /* IAT: GlobalAlloc */
extern void *g_0076b4bc;   /* IAT: CloseClipboard */
extern void *g_0076b230;   /* IAT: GlobalLock */
extern void *g_0076b22c;   /* IAT: GlobalUnlock */
extern void *g_0076b4ac;   /* IAT: SetClipboardData */

extern int g_00858bf8;

__declspec(naked) void __stdcall FUN_00708630(void *param_1)
{
    __asm {
        mov     eax, dword ptr [g_00858bf8]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    dword ptr [g_0076b4b4]
        test    eax, eax
        jz      loc_86bb
        call    dword ptr [g_0076b4a8]
        mov     esi, dword ptr [esp + 0x10]
        cmp     byte ptr [esi], 0x0
        jz      loc_86bb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        push    0x2000
        call    dword ptr [g_0076b234]
        mov     ebx, eax
        test    ebx, ebx
        jnz     loc_867b
        call    dword ptr [g_0076b4bc]
        pop     edi
        pop     esi
        pop     ebx
        ret     4
loc_867b:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ebp
        dec     ecx
        mov     ebp, ecx
        push    ebx
        inc     ebp
        call    dword ptr [g_0076b230]
        mov     ecx, ebp
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        push    ebx
        rep     movsb
        call    dword ptr [g_0076b22c]
        push    ebx
        push    0x1
        call    dword ptr [g_0076b4ac]
        call    dword ptr [g_0076b4bc]
        pop     ebp
loc_86bb:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
