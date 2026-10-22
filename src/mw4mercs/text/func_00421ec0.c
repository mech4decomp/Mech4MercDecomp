/*
 * FUN_00421ec0 (53 B) — MLR data version writer: writes the 'MLR#'
 * magic + version 0x12 through a virtual Write method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00421ec0(void)
{
    __asm {
        sub     esp, 0x8
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [ecx]
        push    0x4
        lea     edx, [esp + 0x4]
        push    edx
        mov     dword ptr [esp + 0xc], 0x12
        mov     dword ptr [esp + 0x8], 0x4d4c5223
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        add     esp, 0x8
        ret
    }
}
