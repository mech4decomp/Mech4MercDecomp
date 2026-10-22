/*
 * FUN_007352D0 (63 B) — Virtual IsLost wrapper with error logging.
 *
 * Calls virtual method at vtable+0x60 on param_1. If the result is
 * negative and not the special -0x7789fe3e sentinel, formats an error
 * via FUN_006fabf0 and asserts.
 *
 * __stdcall, RET 4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_007352D0(int *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x60]
        mov     esi, eax
        test    esi, esi
        jge     done
        cmp     esi, 0x887601C2
        jz      done
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7A63CC
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     4
    }
}
