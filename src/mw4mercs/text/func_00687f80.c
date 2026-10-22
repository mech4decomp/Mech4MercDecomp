/*
 * FUN_00687F80 (65 B) — __cdecl, 3 params (dst, count, src).
 * Copies an array of 0x18-byte elements from src to dst, count times.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00687f80(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        test    ecx, ecx
        mov     eax, dword ptr [esp + 0x4]
        jbe     l_done
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
    l_loop:
        test    eax, eax
        jz      l_skip
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0xc], edx
        mov     dl, byte ptr [ecx + 0x10]
        mov     byte ptr [eax + 0x10], dl
        mov     edx, dword ptr [ecx + 0x14]
        mov     dword ptr [eax + 0x14], edx
    l_skip:
        add     eax, 0x18
        dec     esi
        jnz     l_loop
        pop     esi
    l_done:
        ret
    }
}
