/*
 * FUN_00412470 (84 B) — __thiscall destructor-style helper. Decrements a
 * refcount byte stored just before two owned buffers ([this+0x18] and
 * [this+0x14]); frees each when the count hits zero. Then calls a thiscall
 * teardown (FUN_00415380) and, if the low bit of the stack flag is set,
 * frees the object itself. Returns `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00415380(void *);

__declspec(naked) void FUN_00412470(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jz      L2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L2
        push    eax
        call    FUN_004084e0
        add     esp, 4
L2:
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        jz      L3
        push    esi
        call    FUN_004084e0
        add     esp, 4
L3:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
