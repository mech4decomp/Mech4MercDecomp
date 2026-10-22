/*
 * FUN_0041e3c0 (64 B) — __thiscall scalar-deleting-destructor. Sets the
 * vtable pointer (0x76d650), decrements the refcount stored just before the
 * buffer at [esi+0x10] and frees it when it hits 0, calls base destructor
 * FUN_00415380, then frees the object if flags bit 0 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0041e3c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x76d650
        mov     eax, dword ptr [esi+0x10]
        test    eax, eax
        jz      L3E3
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L3E3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3E3:
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp+0x8], 0x1
        jz      L3FA
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L3FA:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
