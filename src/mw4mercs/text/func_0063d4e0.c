/*
 * FUN_0063D4E0 (34 B) — __thiscall initializer.
 *
 * Calls FUN_0041fcb0 on this+0x144, then if the stack param is non-null
 * calls FUN_0041fcd0(param) on this+0x144. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fcb0(void);
extern void FUN_0041fcd0(void *param);

__declspec(naked) void __stdcall FUN_0063d4e0(void *param)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0x144]
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      l_done
        push    eax
        mov     ecx, esi
        call    FUN_0041fcd0
    l_done:
        pop     esi
        ret     4
    }
}
