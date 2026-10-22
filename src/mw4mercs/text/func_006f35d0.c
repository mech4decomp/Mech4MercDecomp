/*
 * FUN_006F35D0 (85 B) — Scalar deleting destructor for singleton pool.
 * Calls FUN_004169C0, then if (flags & 1), returns this to pool,
 * decrements global counter at 0x00848D80, and if zero, destroys
 * the singleton at 0x00848D84.
 *
 * __thiscall (ECX = this), RET 4 (1 param: flags).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004169c0(void);
extern void FUN_00416130(void *);
extern void FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __stdcall FUN_006f35d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        jz      l_done
        _emit   0x8B
        _emit   0x0D
        _emit   0x84
        _emit   0x8D
        _emit   0x84
        _emit   0x00
        push    esi
        call    FUN_00416130
        _emit   0xFF
        _emit   0x0D
        _emit   0x80
        _emit   0x8D
        _emit   0x84
        _emit   0x00
        jnz     l_done
        push    edi
        _emit   0x8B
        _emit   0x3D
        _emit   0x84
        _emit   0x8D
        _emit   0x84
        _emit   0x00
        test    edi, edi
        jz      l_zero_ptr
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_zero_ptr:
        pop     edi
        mov     eax, esi
        _emit   0xC7
        _emit   0x05
        _emit   0x84
        _emit   0x8D
        _emit   0x84
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        pop     esi
        ret     4
    l_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
