/*
 * FUN_006F33B0 (79 B) — Iterator over a container, calling vtable[0xC] on each item.
 *
 * __thiscall (ECX = this), 1 stack param. Creates an iterator from this+0x10,
 * then iterates calling vtable[0xC] on each item with the param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416bc0(void);
extern int * FUN_00416cc0(void *);
extern void FUN_00416c60(void);

__declspec(naked) void __stdcall FUN_006f33b0(void)
{
    __asm {
        sub     esp, 0x14
        add     ecx, 0x10
        push    ecx
        lea     ecx, [esp + 4]
        call    FUN_00416bc0
        ; lea ecx, [esp]  -- force 4-byte encoding
        _emit   0x8D
        _emit   0x4C
        _emit   0x24
        _emit   0x00
        ; mov dword ptr [esp], 0x79F6F0  -- force 4-byte encoding
        _emit   0xC7
        _emit   0x44
        _emit   0x24
        _emit   0x00
        _emit   0xF0
        _emit   0xF6
        _emit   0x79
        _emit   0x00
        call    FUN_00416cc0
        test    eax, eax
        jz      l_done
        push    esi
        mov     esi, dword ptr [esp + 0x1C]
    l_loop:
        mov     edx, dword ptr [eax]
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0xC]
        lea     ecx, [esp + 4]
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_loop
        pop     esi
    l_done:
        ; lea ecx, [esp]  -- force 4-byte encoding
        _emit   0x8D
        _emit   0x4C
        _emit   0x24
        _emit   0x00
        call    FUN_00416c60
        add     esp, 0x14
        ret     4
    }
}
