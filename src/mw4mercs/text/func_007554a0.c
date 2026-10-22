/*
 * FUN_007554A0 (72 B) — DirectInput-style wrapper: calls a virtual method
 * (vtable+0x24) with (this, param_2, param_3); on failure logs
 * "FAILED (0x%x - %s) - GetDeviceState(0x%x: %s)" and __debugbreak().
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0074c6c0(void *param);
extern int __cdecl FUN_0073e160(int param);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_007554a0(void *param_1, void *param_2, void *param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ecx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x24]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        call    FUN_0074c6c0
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae28c
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
