/*
 * FUN_007471d0 (61 B) — Reads the CPU performance counters (RDPMC) into a
 * 16-byte buffer if a global flag is set and the buffer pointer is non-null.
 * Returns 1 on success, 0 otherwise.
 *
 * __stdcall (RET 4), one pointer param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008b27e0;   /* DAT_008b27e0 */

__declspec(naked) int __stdcall FUN_007471d0(void *param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_008b27e0]
        test    eax, eax
        jz      L_ret0
        mov     eax, dword ptr [ebp + 8]
        test    eax, eax
        jz      L_ret0
        push    esi
        mov     esi, dword ptr [ebp + 8]
        xor     ecx, ecx
        rdpmc
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 4], edx
        mov     ecx, 1
        rdpmc
        mov     dword ptr [esi + 8], eax
        mov     dword ptr [esi + 0xc], edx
        mov     eax, 1
        pop     esi
        pop     ebp
        ret     4
    L_ret0:
        xor     eax, eax
        pop     ebp
        ret     4
    }
}
