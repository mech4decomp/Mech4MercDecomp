/*
 * FUN_005b6eb0 (40 B) — __thiscall (ECX = this), RET.
 *
 * Sets vtable 0x7867e8, calls FUN_00417980(this+0x9c),
 * FUN_00417980(this+0x94), FUN_004e7200(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00417980(void);
extern void FUN_004e7200(void);

__declspec(naked) void __stdcall FUN_005b6eb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x9c]
        mov     dword ptr [esi], 0x7867e8
        call    FUN_00417980
        lea     ecx, [esi + 0x94]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004e7200
        pop     esi
        ret
    }
}
