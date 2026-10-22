/*
 * FUN_00698b60 (37 B) - __cdecl, 3 params (src, end, dst), RET (no cleanup).
 *
 * Copies dwords from src to dst while src != end; skips the store
 * when dst == 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00698b60(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xc]
        jz      L_done
        push    esi
L_loop:
        test    eax, eax
        jz      L_skip
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
L_skip:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edx
        jnz     L_loop
        pop     esi
L_done:
        ret
    }
}
