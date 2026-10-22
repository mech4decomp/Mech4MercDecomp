/*
 * FUN_10002b50 (87 B) - __stdcall, RET 0x8. Object re-init: checks the 0x28
 * flag, stores param2 into 0x34, frees 0x3c via FUN_100089c0, then drains
 * the object at 0x30 via a virtual call until it returns non-zero.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100089c0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10002b50(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     al, byte ptr [esi + 0x28]
        test    al, al
        jnz     L_b6c
        mov     dword ptr [esi + 0x34], 0
        mov     eax, 0xc1120008
        pop     esi
        ret     8
L_b6c:
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x34], eax
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        jz      L_b80
        push    eax
        call    FUN_100089c0
L_b80:
        push    edi
        lea     edi, [esi + 0x20]
L_b84:
        mov     eax, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L_b84
        cmp     eax, 0x8000000a
        pop     edi
        jnz     L_b9c
        xor     eax, eax
L_b9c:
        mov     dword ptr [esi + 0x34], 0
        pop     esi
        ret     8
    }
}
