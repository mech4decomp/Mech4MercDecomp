/*
 * FUN_1003fab4 (78 B) - __cdecl. Frees a chain of pointers at ESI+0xc..0x24
 * via FUN_1003c2dc, guarded by a vtable-pointer check.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1003c2dc(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_1003fab4(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jz      L_fb00
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, 0x10075748
        jz      L_fb00
        push    eax
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x10]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x14]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x18]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x1c]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x20]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x24]
        call    FUN_1003c2dc
        add     esp, 0x1c
L_fb00:
        pop     esi
        ret
    }
}
