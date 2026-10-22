/*
 * FUN_00413DF0 (133 B) — __thiscall (this in ECX), RET (no args).
 * Archive member-fetch helper: reads a global hash-chain head
 * (g_007b8808), copies entry fields into the object, and walks the hash
 * chain (stride 4) to find the next entry, updating g_007b8808.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8808;

__declspec(naked) void FUN_00413DF0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        push    esi
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [g_007b8808]
        test    eax, eax
        jne     L413e05
        mov     dword ptr [ecx + 0x1c], eax
        xor     al, al
        pop     esi
        ret
    L413e05:
        mov     dx, word ptr [eax + 0x24]
        mov     word ptr [ecx + 4], dx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx + 0x14], edx
        lea     edx, [eax + 0x28]
        mov     dword ptr [ecx + 8], edx
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + 0xc], edx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [eax + 0xc]
        test    eax, eax
        mov     dword ptr [ecx + 0x18], 0
        mov     dword ptr [ecx + 0x10], edx
        mov     dword ptr [g_007b8808], eax
        jne     L413e71
        mov     ax, word ptr [ecx + 4]
        mov     ecx, 0x3fd
        cdq
        idiv    ecx
        inc     edx
        cmp     edx, ecx
        jae     L413e67
        lea     eax, [esi + edx*4 + 0x18]
    L413e4f:
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     dword ptr [g_007b8808], ecx
        jne     L413e71
        inc     edx
        add     eax, 4
        cmp     edx, 0x3fd
        jb      L413e4f
    L413e67:
        mov     dword ptr [g_007b8808], 0
    L413e71:
        mov     al, 1
        pop     esi
        ret
    }
}
