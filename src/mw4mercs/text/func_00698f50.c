/*
 * FUN_00698f50 (48 B) - __thiscall lookup. Reads a byte index from
 * this->0x1c[param]; if 0xff returns 0. Otherwise computes an address
 * from this->0x18's tables and returns it.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: index).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00698f50(void *param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x1c]
        mov     edx, dword ptr [esp + 0x4]
        mov     al, byte ptr [eax + edx*1]
        cmp     al, 0xff
        jnz     L_ok
        xor     eax, eax
        ret     4
L_ok:
        mov     ecx, dword ptr [ecx + 0x18]
        push    esi
        mov     esi, dword ptr [ecx + 0x2c]
        shl     edx, 0x4
        mov     edx, dword ptr [esi + edx*1 + 0x8]
        and     eax, 0xff
        lea     eax, [edx + eax*4]
        add     eax, dword ptr [ecx + 0x24]
        pop     esi
        ret     4
    }
}
