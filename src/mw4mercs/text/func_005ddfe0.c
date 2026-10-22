/*
 * FUN_005DDFE0 (30 B) — __thiscall (this in ECX), RET 0x4 (1 stack arg).
 * Scalar-deleting destructor: calls FUN_005DE000 (dtor), then frees via
 * FUN_004084E0 if the flag arg's bit 0 is set. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084e0(void *);
extern void __fastcall FUN_005de000(void);

__declspec(naked) void __fastcall FUN_005ddfe0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005de000
        test    byte ptr [esp + 0x8], 0x1
        jz      LDFF8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
LDFF8:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
