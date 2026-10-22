/*
 * FUN_004AB750 (205 B) — __fastcall destructor (ECX=this).
 * Sets vtable to 0x007704ac, then frees 10 non-null pointers at
 * various offsets, then calls FUN_004937f0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *ptr);
extern void __fastcall FUN_004937f0(void *this);

__declspec(naked) void __fastcall FUN_004ab750(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x007704ac
        mov     eax, dword ptr [esi + 0x250]
        test    eax, eax
        jz      l_skip_250
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_250:
        mov     eax, dword ptr [esi + 0x230]
        test    eax, eax
        jz      l_skip_230
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_230:
        mov     eax, dword ptr [esi + 0x210]
        test    eax, eax
        jz      l_skip_210
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_210:
        mov     eax, dword ptr [esi + 0x1f0]
        test    eax, eax
        jz      l_skip_1f0
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_1f0:
        mov     eax, dword ptr [esi + 0x1dc]
        test    eax, eax
        jz      l_skip_1dc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_1dc:
        mov     eax, dword ptr [esi + 0x1d0]
        test    eax, eax
        jz      l_skip_1d0
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_1d0:
        mov     eax, dword ptr [esi + 0xdc]
        test    eax, eax
        jz      l_skip_dc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_dc:
        mov     eax, dword ptr [esi + 0xc8]
        test    eax, eax
        jz      l_skip_c8
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_c8:
        mov     eax, dword ptr [esi + 0xbc]
        test    eax, eax
        jz      l_skip_bc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_bc:
        mov     eax, dword ptr [esi + 0x6c]
        test    eax, eax
        jz      l_skip_6c
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_6c:
        mov     ecx, esi
        call    FUN_004937f0
        pop     esi
        ret
    }
}
