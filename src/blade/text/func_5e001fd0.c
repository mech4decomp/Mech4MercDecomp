/*
 * FUN_5e001fd0 (77 B) — iterates a global table at 0x5e0380d8 (0x20-byte
 * entries) looking for a matching entry; calls a callback (param_2) per entry.
 *
 * __stdcall, RET 0xc (three stack params).
 *
 * Match: target 100%
 */

extern void __cdecl FUN_5e012cf0(void);

__declspec(naked) int __stdcall FUN_5e001fd0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, 0x5e0380d8
L1:
        cmp     dword ptr [esi + 0xc], 0x10
        jnz     L2
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     L2
        push    esi
        call    FUN_5e012cf0
        cmp     dword ptr [ebp + 0x4278], eax
        jnz     L3
L2:
        push    edi
        push    esi
        call    ebx
        cmp     eax, 0x1
        jnz     L4
L3:
        add     esi, 0x20
        cmp     esi, 0x5e038158
        jc      L1
L4:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
    }
}
