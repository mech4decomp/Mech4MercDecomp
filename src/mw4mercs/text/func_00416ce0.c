/*
 * FUN_00416ce0 (20 B) — __fastcall: pop head of list at [this+0x10];
 * returns [head+0xc] and advances [this+0x10] to [head+0x14], or 0 if empty.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416ce0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x10]
        test    edx, edx
        jz      L1
        mov     eax, dword ptr [edx + 0xc]
        mov     edx, dword ptr [edx + 0x14]
        mov     dword ptr [ecx + 0x10], edx
        ret
L1:
        xor     eax, eax
        ret
    }
}
