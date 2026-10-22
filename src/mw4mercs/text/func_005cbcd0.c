/*
 * FUN_005cbcd0 (41 B) — __cdecl. Copies an array of dword elements from
 * [esp+8] to [esp+0x10], count = (end - start) >> 2. Returns destination
 * (or [esp+0x10] if count <= 0). Identical to FUN_005cbca0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005cbcd0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     eax, esi
        sar     eax, 0x2
        test    eax, eax
        jle     L_F3
        mov     edx, dword ptr [esp + 0x10]
        push    edi
        mov     ecx, eax
        mov     edi, edx
        rep movsd
        pop     edi
        lea     eax, [edx + eax*0x4]
        pop     esi
        ret
L_F3:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        ret
    }
}
