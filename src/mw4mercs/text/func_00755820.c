/*
 * FUN_00755820 (72 B) — DirectInput-style wrapper: calls a virtual method
 * (vtable+0x18) with (this, param_2, param_3); on failure logs
 * "FAILED (0x%x - %s) - SetParameters(0x%x, %s)" and __debugbreak().
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00753160(void *param);
extern int __cdecl FUN_0073e160(int param);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_00755820(void *param_1, void *param_2, void *param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x18]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        call    FUN_00753160
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae488
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
        ret     0xc
    }
}
