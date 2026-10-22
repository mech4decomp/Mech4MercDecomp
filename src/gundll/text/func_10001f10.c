/*
 * FUN_10001F10 (116 B) - __stdcall, RET 0x8.
 * WideCharToMultiByte wrapper (2-arg variant): converts a wide string to
 * multibyte via FUN_10001E10 into a caller buffer; on failure frees the
 * intermediate object (FUN_10001D60) and returns an HRESULT.
 *
 * CFLAGS: /O1
 */

extern void *g_100490fc;              /* IAT: WideCharToMultiByte */
extern void __cdecl FUN_10001d50(void);   /* rel32 call (alloc) */
extern void __stdcall FUN_10001e10(void); /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10001F10(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        test    ebx, ebx
        jne     L_1f1f
        xor     eax, eax
        pop     ebx
        ret     0x8
    L_1f1f:
        push    esi
        push    edi
        push    0
        push    0
        push    0
        push    0
        push    -1
        push    ebx
        push    0
        push    0
        call    dword ptr [g_100490fc]
        mov     edi, eax
        push    edi
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jne     L_1f54
        mov     edi, 0x8007000e
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    L_1f54:
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    esi
        push    ebx
        call    FUN_10001e10
        mov     edi, eax
        test    edi, edi
        jl      L_1f73
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [ecx], esi
        pop     esi
        pop     ebx
        ret     0x8
    L_1f73:
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
