/*
 * FUN_00698d20 (53 B) — Look up a byte in a table (this+0x1C) by index;
 * if 0xFF return 0, else compute an offset into a 16-byte-per-entry
 * table and return a weighted value.
 *
 * __thiscall (ECX = this), RET 4 (one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00698d20(int index)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x1C]
        mov     edx, dword ptr [esp + 0x4]
        mov     al, byte ptr [eax + edx*0x1]
        cmp     al, 0xFF
        jnz     L_ok
        xor     eax, eax
        ret     0x4
L_ok:
        mov     ecx, dword ptr [ecx + 0x18]
        push    esi
        mov     esi, dword ptr [ecx + 0x2C]
        shl     edx, 0x4
        add     edx, esi
        mov     esi, dword ptr [edx + 0x4]
        and     eax, 0xFF
        imul    eax, dword ptr [edx]
        mov     edx, dword ptr [ecx + 0x1C]
        add     eax, esi
        add     eax, edx
        pop     esi
        ret     0x4
    }
}
