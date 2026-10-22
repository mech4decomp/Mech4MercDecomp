/*
 * FUN_0075B7B0 (62 B) — Virtual get_CurrentPosition wrapper with error logging.
 *
 * Calls virtual method at vtable+0x24 on param_1 with param_2. If the
 * result is negative, formats an error via FUN_006fabf0 and asserts.
 *
 * __stdcall, RET 8 (2 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_0075B7B0(int *param_1, int param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x24]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7AF738
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     8
    }
}
