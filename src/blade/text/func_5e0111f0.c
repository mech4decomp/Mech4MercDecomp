/*
 * FUN_5e0111f0 (28 B) — forwards to inner object's vtable[0x60/4] method.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e0111f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jz      loc_1204
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x60]
        ret     0x4
loc_1204:
        mov     eax, 0x80004005
        ret     0x4
    }
}
