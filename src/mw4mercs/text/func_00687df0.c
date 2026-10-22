/*
 * FUN_00687DF0 (66 B) — __cdecl, 3 params (dst, end, src).
 * Copies 0x18-byte elements from src to dst until dst == end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00687df0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        cmp     eax, ebx
        jz      l_done
        mov     ecx, dword ptr [esp + 0x10]
        mov     dl, byte ptr [ecx + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx + 0xc]
        push    edi
        mov     edi, dword ptr [ecx + 0x14]
    l_loop:
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], ebp
        mov     ebp, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], ebp
        mov     dword ptr [eax + 0xc], esi
        mov     byte ptr [eax + 0x10], dl
        mov     dword ptr [eax + 0x14], edi
        add     eax, 0x18
        cmp     eax, ebx
        jnz     l_loop
        pop     edi
        pop     esi
        pop     ebp
    l_done:
        pop     ebx
        ret
    }
}
