/*
 * FUN_006581c0 (59 B) — __thiscall helper: zeroes an array of buffers
 * (each of this+0xC bytes) for this+0x10 entries.
 *
 * __thiscall (ECX = this). No stack params, RET (no cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006581c0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        xor     edx, edx
        test    eax, eax
        jbe     L_out
        push    ebx
        mov     ebx, dword ptr [esi + 0xc]
        push    ebp
        push    edi
        test    ebx, ebx
        jbe     L_next
    L_loop:
        mov     eax, dword ptr [esi + 0x8]
        mov     edi, dword ptr [eax + edx*0x4]
        mov     ecx, ebx
        mov     ebp, ecx
        shr     ecx, 0x2
        xor     eax, eax
        rep stosd
        mov     ecx, ebp
        and     ecx, 0x3
        rep stosb
    L_next:
        mov     eax, dword ptr [esi + 0x10]
        inc     edx
        cmp     edx, eax
        /* __emit: backward jcc rel-offset miscomputed by 4 (MSVC6 inline-asm quirk) */
        __emit 0x72
        __emit 0xDC
        pop     edi
        pop     ebp
        pop     ebx
    L_out:
        pop     esi
        ret
    }
}
