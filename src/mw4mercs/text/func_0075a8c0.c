/*
 * FUN_0075A8C0 (63 B) — Destructor.
 *
 * Sets vtable to 0x7AF0A0, frees this+0x4 (if non-null) and this+0xC
 * (if this+0x8 == 1 and this+0xC non-null) via FUN_004084E0.
 *
 * __thiscall (ECX = this), RET (no stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __fastcall FUN_0075a8c0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        mov     dword ptr [esi], 0x7af0a0
        jz      skip1
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 4], 0
skip1:
        cmp     dword ptr [esi + 8], 1
        jnz     skip2
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      skip2
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0xc], 0
skip2:
        pop     esi
        ret
    }
}
