/*
 * FUN_0040bc30 (34 B) — __fastcall destructor: sets vtable 0x76d034, calls
 * FUN_00417980 on sub-objects at +0x1c and +0x14, then FUN_00415380(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00417980(void);
extern void FUN_00415380(void);

__declspec(naked) void FUN_0040bc30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi+0x1c]
        mov     dword ptr [esi], 0x76d034
        call    FUN_00417980
        lea     ecx, [esi+0x14]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
