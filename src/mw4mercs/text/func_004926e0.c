/*
 * FUN_004926E0 (29 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 * Copies pointer from param_1 with refcount increment, copies value from param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004926e0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        test    edx, edx
        mov     dword ptr [eax], edx
        jz      l_skip_inc
        inc     byte ptr [edx - 1]
l_skip_inc:
        mov     edx, dword ptr [esp + 8]
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax + 4], ecx
        ret     8
    }
}
