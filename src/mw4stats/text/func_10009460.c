/*
 * FUN_10009460 (64 B) - binary search over an array of 8-byte records
 * keyed by a ushort at offset 0. Returns 1 if found, else 0.
 *
 * __stdcall, 3 params (ushort key, uint lo, uint hi).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10009460 (64 B, __stdcall, 3 params) -- binary search over an array of
 * 4-byte range records (ushort lo at +0, ushort hi at +2), keyed by a ushort.
 * Returns 1 if a record with lo <= key <= hi is found, else 0.
 */

__declspec(naked) unsigned int __cdecl FUN_10009460(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0xc]
        cmp     ecx, edx
        push    esi
        ja      L_notfound
        mov     si, word ptr [esp + 0x8]
L_loop:
        mov     eax, edx
        sub     eax, ecx
        sar     eax, 0x3
        cmp     si, word ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        jnc     L_ge
        lea     edx, [eax - 4]
        jmp     L_check
L_ge:
        cmp     si, word ptr [eax + 2]
        jbe     L_found
        lea     ecx, [eax + 4]
L_check:
        cmp     ecx, edx
        jbe     L_loop
L_notfound:
        xor     al, al
        pop     esi
        ret     0xc
L_found:
        mov     al, 1
        pop     esi
        ret     0xc
    }
}
