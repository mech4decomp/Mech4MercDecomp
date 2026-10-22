/*
 * FUN_100064f0 (190 B) - __cdecl. Parses a wide-char token stream
 * (wcstok/wcstod) from param_2's string, feeding pairs of doubles to
 * FUN_10001a60, then frees and finalizes via FUN_10005a30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021130; /* IAT: _wcsdup */
extern void *g_1002112c; /* IAT: wcstok */
extern void *g_10021124; /* IAT: wcstod */
extern void *g_100210ec; /* IAT: free */
extern unsigned short g_100252fc[]; /* delimiter wide string */
extern void __cdecl FUN_10001a60(void);
extern void __cdecl FUN_10005a30(void);

__declspec(naked) void __cdecl FUN_100064f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xc
        mov     ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        push    ebx
        push    esi
        push    edi
        jz      L_a0
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax]
        push    eax
        call    dword ptr [g_10021130]
        mov     ebx, eax
        add     esp, 0x4
        test    ebx, ebx
        jnz     L_24
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_24:
        mov     esi, dword ptr [g_1002112c]
        push    offset g_100252fc
        push    ebx
        call    esi
        mov     edi, dword ptr [ebp + 8]
        add     esp, 0x8
        test    eax, eax
        jz      L_8c
    L_3c:
        lea     ecx, [esp + 0xc]
        push    ecx
        push    eax
        call    dword ptr [g_10021124]
        fstp    qword ptr [esp + 0x18]
        push    offset g_100252fc
        push    0
        call    esi
        add     esp, 0x10
        test    eax, eax
        jz      L_8c
        lea     edx, [esp + 0xc]
        push    edx
        push    eax
        call    dword ptr [g_10021124]
        fstp    qword ptr [esp]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_10001a60
        push    offset g_100252fc
        push    0
        call    esi
        add     esp, 0x8
        test    eax, eax
        jnz     L_3c
    L_8c:
        push    ebx
        call    dword ptr [g_100210ec]
        add     esp, 0x4
        mov     ecx, edi
        call    FUN_10005a30
        mov     ecx, dword ptr [ebp + 0xc]
    L_a0:
        pop     edi
        xor     eax, eax
        test    ecx, ecx
        pop     esi
        setnz   al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
