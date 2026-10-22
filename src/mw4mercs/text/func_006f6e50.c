/*
 * FUN_006F6E50 (86 B) — Destructor: sets vtable to 0x79FD24, frees three
 * allocations at +0x2C, +0x34, +0x3C, then calls FUN_006F6900.
 *
 * __fastcall (ECX = this). No return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006f6900(void);

__declspec(naked) void __fastcall FUN_006f6e50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x2C]
        test    eax, eax
        push    edi
        _emit   0x8B
        _emit   0x3D
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        mov     dword ptr [esi], 0x79FD24
        jz      l_free_34
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x2C], 0
    l_free_34:
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        jz      l_free_3c
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x34], 0
    l_free_3c:
        mov     eax, dword ptr [esi + 0x3C]
        test    eax, eax
        jz      l_call_dtor
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x3C], 0
    l_call_dtor:
        mov     ecx, esi
        call    FUN_006f6900
        pop     edi
        pop     esi
        ret
    }
}
