/*
 * FUN_005fd1c0 (40 B) — __thiscall. If this->[0x280] and [0x280]->[0x2fc]
 * are non-null, dispatch through the [0x2fc] object's vtable slot 0xd8
 * passing the stack arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005fd1c0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x280]
        test    eax, eax
        jz      L_e5
        mov     ecx, dword ptr [eax+0x2fc]
        test    ecx, ecx
        jz      L_e5
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0xd8]
L_e5:
        ret     4
    }
}
