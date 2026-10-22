/*
 * FUN_0061EE80 (35 B) — __cdecl dword-array copy.
 *
 * Copies (end - src)/4 dwords from src to dest, returning dest + count*4.
 * Args: src=[esp+4], end=[esp+8], dest=[esp+0xC]. RET (no cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__cdecl FUN_0061ee80(void *src, void *end, void *dest)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     edx, esi
        sar     edx, 0x2
        test    edx, edx
        jle     l_done
        push    edi
        mov     edi, eax
        mov     ecx, edx
        rep     movsd
        lea     eax, [eax + edx*4]
        pop     edi
    l_done:
        pop     esi
        ret
    }
}
