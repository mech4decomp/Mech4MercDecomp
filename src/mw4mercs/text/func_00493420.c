/*
 * FUN_00493420 (53 B) — __cdecl.
 * Writes a version struct (0x19, 0x47465823) via vtable method +0x24,
 * then reads back 4 bytes via the returned stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00493420(int *param_1)
{
    __asm {
        sub     esp, 8
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [ecx]
        push    4
        lea     edx, [esp + 4]
        push    edx
        mov     dword ptr [esp + 0xc], 0x19
        mov     dword ptr [esp + 8], 0x47465823
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esp + 8]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        add     esp, 8
        ret
    }
}
