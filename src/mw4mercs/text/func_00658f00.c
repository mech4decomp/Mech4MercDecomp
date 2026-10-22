/*
 * FUN_00658f00 (23 B) — ABL tree-node helper: if dst non-null, copy an
 * 8-byte record (two dwords) from src to dst.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00658f00(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        test    eax, eax
        jz      skip
        mov     ecx, dword ptr [esp+8]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx+4]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+4], ecx
skip:
        ret
    }
}
