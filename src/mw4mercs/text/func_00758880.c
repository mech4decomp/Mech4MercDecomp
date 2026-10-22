/*
 * FUN_00758880 (62 B) — __stdcall (RET 8). Calls FUN_0075e0d6(param2, param1).
 * If the result is negative, formats an error via FUN_0073e160 +
 * FUN_006fabf0 (with string 0x7aed68) and INT3 if that returns non-zero.
 * Returns the FUN_0075e0d6 result.
 *
 * __stdcall (RET 8), two params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7aed68[];   /* format string */
extern int __cdecl FUN_0075e0d6(void *a, void *b);
extern int __cdecl FUN_0073e160(void *a, void *b, int c);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_00758880(void *param1, void *param2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        call    FUN_0075e0d6
        mov     esi, eax
        test    esi, esi
        jge     L_done
        push    edi
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_7aed68
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      L_done
        int     3
    L_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     8
    }
}
