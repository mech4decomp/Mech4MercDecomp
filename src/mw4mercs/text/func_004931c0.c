/*
 * FUN_004931C0 (26 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Copies refcounted pointer from param_1[0] into this[0] with refcount
 * increment, copies param_1[1] into this[1].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004931c0(void)
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
        mov     ecx, dword ptr [ecx + 4]
        mov     dword ptr [eax + 4], ecx
        ret     4
    }
}
