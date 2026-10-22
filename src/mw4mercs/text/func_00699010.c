/*
 * FUN_00699010 (50 B) — __thiscall. Indexes into a table via
 * *(this+0x18); if the byte at [entry+0xc] is zero returns 0, otherwise
 * computes a pointer into a sub-table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00699010(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + 0x2c]
        shl     eax, 0x4
        add     edx, eax
        xor     eax, eax
        mov     al, byte ptr [edx + 0xc]
        test    al, al
        jnz     L_cont
        xor     eax, eax
        ret     0x4
    L_cont:
        mov     edx, dword ptr [edx + 0x8]
        mov     ecx, dword ptr [ecx + 0x24]
        and     eax, 0xff
        lea     eax, [edx + eax*4]
        lea     eax, [eax + ecx*1 - 0x4]
        ret     0x4
    }
}
