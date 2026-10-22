/*
 * FUN_0055f430 (13 B) — Virtual call: calls method at vtable+4 on [ecx], returns [eax+0x1C].
 * Bytes: 8B 09 8B 01 6A 00 FF 50 04 8B 40 1C C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055f430(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx]
        push    0
        call    dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 0x1C]
        ret
    }
}
