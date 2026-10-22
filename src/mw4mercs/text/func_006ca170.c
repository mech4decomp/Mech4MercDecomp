/*
 * FUN_006ca170 (170 B) — __stdcall memory-swap routine (RET 0x14).
 *
 * Allocates a 0x1008-byte temp buffer via _alloca_probe (FUN_0075dc00),
 * then swaps two memory regions of `count*4` bytes using the temp buffer,
 * iterating `outer>>1` times.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075dc00(void);

__declspec(naked) void __stdcall FUN_006ca170(void)
{
    __asm {
        mov     eax, 0x1008
        call    FUN_0075dc00
        mov     eax, dword ptr [esp + 0x1018]
        lea     edx, [eax*4]
        mov     eax, dword ptr [esp + 0x101c]
        push    esi
        mov     esi, eax
        shr     esi, 1
        jz      done
        push    ebx
        mov     ebx, dword ptr [esp + 0x1014]
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0x1024]
        mov     ecx, edi
        neg     ecx
        dec     eax
        imul    eax, edi
        mov     dword ptr [esp + 0x14], ecx
        add     eax, dword ptr [esp + 0x1020]
        mov     dword ptr [esp + 0x10], esi
loop_start:
        mov     ecx, edx
        mov     ebp, ecx
        shr     ecx, 2
        mov     esi, ebx
        lea     edi, [esp + 0x18]
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
        mov     ecx, edx
        shr     ecx, 2
        mov     esi, eax
        mov     edi, ebx
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
        mov     ecx, edx
        shr     ecx, 2
        mov     edi, eax
        lea     esi, [esp + 0x18]
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        add     ebx, edx
        add     eax, esi
        dec     ecx
        mov     dword ptr [esp + 0x10], ecx
        jnz     loop_start
        pop     edi
        pop     ebp
        pop     ebx
done:
        pop     esi
        add     esp, 0x1008
        ret     0x14
    }
}
