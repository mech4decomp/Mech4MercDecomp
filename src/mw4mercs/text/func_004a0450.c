/*
 * FUN_004a0450 (128 B) — MLR particle/shrapnel: clears the fragment ring
 * buffer (walks backwards calling FUN_004a0ea0 per slot), then resets the
 * buffer state and calls FUN_00494960. __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a0ea0(int idx);
extern void __cdecl FUN_00494960(void);

__declspec(naked) void FUN_004a0450(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xac]
        test    eax, eax
        push    edi
        mov     edi, dword ptr [esi+0x10]
        jle     L049d
L0461:
        mov     eax, dword ptr [esi+0xa0]
        lea     ecx, [eax-1]
        mov     dword ptr [esi+0xa0], ecx
        push    eax
        mov     ecx, esi
        call    FUN_004a0ea0
        mov     eax, dword ptr [esi+0xa0]
        test    eax, eax
        jge     L048f
        mov     edx, dword ptr [edi+0x228]
        dec     edx
        mov     dword ptr [esi+0xa0], edx
L048f:
        mov     eax, dword ptr [esi+0xa0]
        cmp     eax, dword ptr [esi+0xa4]
        jnz     L0461
L049d:
        or      eax, 0xffffffff
        mov     ecx, esi
        mov     dword ptr [esi+0xac], 0x0
        mov     dword ptr [esi+0xa0], eax
        mov     dword ptr [esi+0xa4], eax
        mov     dword ptr [esi+0xa8], eax
        mov     dword ptr [esi+0xb8], 0x0
        call    FUN_00494960
        pop     edi
        pop     esi
        ret
    }
}
