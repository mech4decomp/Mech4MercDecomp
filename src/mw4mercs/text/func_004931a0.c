/*
 * FUN_004931A0 (30 B) — __cdecl, RET 8 (2 stack params).
 * Copies refcounted pointer from param_2[0] into param_1[0] with refcount
 * increment, copies param_2[1] into param_1[1].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_004931a0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        test    ecx, ecx
        jz      l_skip
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [edx]
        test    eax, eax
        mov     dword ptr [ecx], eax
        jz      l_skip_inc
        inc     byte ptr [eax - 1]
l_skip_inc:
        mov     eax, dword ptr [edx + 4]
        mov     dword ptr [ecx + 4], eax
l_skip:
        ret
    }
}
