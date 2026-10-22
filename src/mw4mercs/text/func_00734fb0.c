/*
 * FUN_00734FB0 (63 B) — Virtual GetFourCCCodes wrapper with error logging.
 *
 * Calls virtual method at vtable+0x34 on param_1 with param_2, param_3.
 * If the result is negative, formats an error via FUN_006fabf0 and asserts.
 *
 * __stdcall, RET 0xC (3 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_00734FB0(int *param_1, int param_2, int param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x34]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7A61E0
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
        ret     0xC
    }
}
