/*
 * FUN_006FEEC0 (86 B) — Walk a linked list of objects, check conditions,
 * and call FUN_006FFEB0 on matching objects.
 *
 * __cdecl, RET 4 (1 param: pointer to linked list node).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006fd260(void);
extern double __cdecl FUN_00707e90(void);
extern void __cdecl FUN_006ffeb0(void *, int);

__declspec(naked) void __cdecl FUN_006feec0(void)
{
    __asm {
        _emit   0x8B
        _emit   0x0D
        _emit   0x60
        _emit   0x68
        _emit   0x85
        _emit   0x00
        push    esi
        call    FUN_006fd260
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jz      l_done
    l_loop:
        cmp     byte ptr [esi + 0xC], 1
        jnz     l_advance
        call    FUN_00707e90
        fsub    qword ptr [esi + 0x28]
        _emit   0xDC
        _emit   0x1D
        _emit   0x30
        _emit   0x03
        _emit   0x7A
        _emit   0x00
        fnstsw  ax
        test    ah, 0x41
        jnz     l_advance
        cmp     esi, 0x8567F8
        jz      l_advance
        cmp     esi, 0x8567B8
        jnz     l_call
    l_advance:
        mov     esi, dword ptr [esi + 0x34]
        test    esi, esi
        jnz     l_loop
        pop     esi
        ret     4
    l_call:
        push    1
        push    esi
        call    FUN_006ffeb0
    l_done:
        pop     esi
        ret     4
    }
}
