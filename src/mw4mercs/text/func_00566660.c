/*
 * FUN_00566660 (35 B) — Dword-aligned copy: copies (end - src) / 4 dwords
 * from src to dst, returns dst + count.
 * __cdecl (plain ret, no stack cleanup).
 * CFLAGS: /O1
 */

__declspec(naked) int * __cdecl FUN_00566660(void *src, void *end, int *dst)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 0xC]
        push    esi
        mov     esi, dword ptr [esp + 8]
        sub     edx, esi
        sar     edx, 2
        test    edx, edx
        jle     skip
        push    edi
        mov     edi, eax
        mov     ecx, edx
        rep     movsd
        lea     eax, [eax + edx*4]
        pop     edi
    skip:
        pop     esi
        ret
    }
}
