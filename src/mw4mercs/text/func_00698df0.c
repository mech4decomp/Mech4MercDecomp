/*
 * FUN_00698df0 (53 B) — Look up a 16-byte-per-entry table row by index;
 * if the byte at +0xC is 0 return 0, else return
 * (byte-1)*row[0] + row[1] + base.
 *
 * __thiscall (ECX = this), RET 4 (one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00698df0(int index)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [edx + 0x2C]
        shl     eax, 0x4
        add     ecx, eax
        xor     eax, eax
        mov     al, byte ptr [ecx + 0xC]
        test    al, al
        jnz     L_ok
        xor     eax, eax
        ret     0x4
L_ok:
        and     eax, 0xFF
        dec     eax
        imul    eax, dword ptr [ecx]
        push    esi
        mov     esi, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [edx + 0x1C]
        add     eax, esi
        add     eax, ecx
        pop     esi
        ret     0x4
    }
}
