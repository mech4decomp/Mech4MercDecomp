/*
 * FUN_005bf3d0 (19 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Calls FUN_004179b0(this+0xa8, param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004179b0(void);

__declspec(naked) void __stdcall FUN_005bf3d0(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        add     ecx, 0xa8
        call    FUN_004179b0
        ret     4
    }
}
