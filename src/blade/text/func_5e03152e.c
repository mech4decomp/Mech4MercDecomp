/*
 * FUN_5e03152e (78 B) - object teardown helper. If the object at
 * param_1 is non-null and its vtable/type pointer (offset 0xc) is not
 * the sentinel DAT_5e77ab04, releases 7 sub-object pointers (offsets
 * 0xc..0x24) via FUN_5e02b69c.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02b69c(int);

__declspec(naked) void FUN_5e03152e(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        test    esi, esi
        jz      L57a
        mov     eax, dword ptr [esi+0xc]
        cmp     eax, 0x5e77ab04
        jz      L57a
        push    eax
        call    FUN_5e02b69c
        push    dword ptr [esi+0x10]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x14]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x18]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x1c]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x20]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x24]
        call    FUN_5e02b69c
        add     esp, 0x1c
    L57a:
        pop     esi
        ret
    }
}
