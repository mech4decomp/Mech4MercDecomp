/*
 * FUN_004BCF70 (26 B) — __thiscall method.
 * Calls FUN_004bf3f0(param_1), then stores (short)param_1 at this+0x150.
 * RET 0x4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004bf3f0(int param);

__declspec(naked) void __fastcall FUN_004bcf70(int param_1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x0c]
        mov     esi, ecx
        push    edi
        call    FUN_004bf3f0
        mov     word ptr [esi + 0x150], di
        pop     edi
        pop     esi
        ret     4
    }
}
