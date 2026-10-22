/*
 * FUN_10011810 (23 B) - virtual dispatch: calls method at vtable+0x28 of
 * object at this+0x78 with two args, returns 0.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_10011810(void)
{
    __asm {
        mov     edx, dword ptr [esp+8]
        mov     ecx, dword ptr [ecx+0x78]
        push    edx
        mov     edx, dword ptr [esp+8]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax+0x28]
        xor     eax, eax
        ret     0x8
    }
}
