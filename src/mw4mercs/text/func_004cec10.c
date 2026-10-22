/*
 * FUN_004cec10 (86 B) — MLR network subsystem: connection-slot allocator
 * (__thiscall). Increments a counter, probes FUN_004ced60 for a free slot,
 * loops with an assert guard, returns &this->slot[0x34].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004ced60(void);
extern void FUN_006fab90(void);

__declspec(naked) void FUN_004cec10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        inc     word ptr [esi + 0x36]
        xor     eax, eax
        mov     ax, word ptr [esi + 0x36]
        push    edi
        xor     edi, edi
        and     eax, 0xffff
        push    eax
        call    FUN_004ced60
        test    al, al
        jz      loc_60
loc_2f:
        inc     word ptr [esi + 0x36]
        cmp     edi, 0x10001
        jle     loc_4d
        push    0x771c0c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      loc_4d
        int     3
loc_4d:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x36]
        mov     ecx, esi
        inc     edi
        push    eax
        call    FUN_004ced60
        test    al, al
        jnz     loc_2f
loc_60:
        pop     edi
        lea     eax, [esi + 0x34]
        pop     esi
        ret
    }
}
