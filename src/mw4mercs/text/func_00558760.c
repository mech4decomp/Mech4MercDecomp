/*
 * FUN_00558760 (66 B) — Object method dispatcher. Loads global,
 * XORs with another global, checks flags, dispatches call.
 *
 * __thiscall (ECX = this), 1 param (byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00558760(void)
{
    __asm {
        _emit   0xA1
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     edx, dword ptr [eax]
        _emit   0x33
        _emit   0x15
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     eax, dword ptr [edx + 0x0C]
        xor     eax, 0x85739531
        mov     dl, byte ptr [eax + 0x16]
        test    dl, dl
        je      L_else
        mov     al, byte ptr [esp + 4]
        test    al, al
        mov     ecx, dword ptr [ecx + 0xE0]
        je      L_call2
        mov     edx, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [edx + 4]
        ret     4
L_call2:
        mov     eax, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [eax + 4]
L_else:
        ret     4
    }
}
