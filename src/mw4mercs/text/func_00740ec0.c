/*
 * FUN_00740ec0 (52 B) — Close wrapper (__stdcall, RET 4).
 *
 * Calls virtual method at vtable+0x10 on the object; if the result is
 * negative, formats an error via FUN_006fabf0 and asserts (INT3) on
 * failure. Returns the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7a8ed0[];              /* "FAILED (0x%x - %s) - Close" */
extern char *__cdecl FUN_0073e160(int code);
extern int __cdecl FUN_006fabf0(const char *fmt, int a, char *b);

__declspec(naked) int __stdcall FUN_00740ec0(void *obj)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_7a8ed0
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      done
        int     3
done:
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     4
    }
}
