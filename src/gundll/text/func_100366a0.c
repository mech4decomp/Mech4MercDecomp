/*
 * FUN_100366a0 (21 B) - __thiscall. Virtual dispatch through object at [this+0x14].
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_100366a0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [ecx + 0x4]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x10]
        ret     0x4
    }
}
