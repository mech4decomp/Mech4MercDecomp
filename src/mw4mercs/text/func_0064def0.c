/*
 * FUN_0064def0 (41 B) — __thiscall with 3 args. If (this->[4] & ~3) != 0,
 * forwards the 3 args via a virtual call through the vtable at
 * (this->[4] & ~3) offset +8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0064def0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, 0xfffffffc
        jz      L_done
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        and     eax, 0xfffffffc
        mov     edx, dword ptr [eax]
        push    esi
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x8]
        pop     esi
    L_done:
        ret     0xc
    }
}
