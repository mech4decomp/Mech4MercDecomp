/*
 * FUN_0065a680 (49 B) — __cdecl. Copies 12-byte elements from src to dst
 * (if dst non-null) while src != end, stepping both by 12 bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065a680(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xc]
        jz      L_end
        push    esi
    L_loop:
        test    eax, eax
        jz      L_skip
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], esi
        mov     esi, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], esi
    L_skip:
        add     ecx, 0xc
        add     eax, 0xc
        cmp     ecx, edx
        jnz     L_loop
        pop     esi
    L_end:
        ret
    }
}
