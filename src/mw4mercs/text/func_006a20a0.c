/*
 * FUN_006a20a0 (24 B) — __thiscall setter: stores param at [this+0x24], then
 * calls FUN_00707e70(0) and stores the returned double at [this+0x28].
 * RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e70(int);

__declspec(naked) void FUN_006a20a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    0x0
        mov     dword ptr [esi + 0x24], eax
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x28]
        pop     esi
        ret     0x4
    }
}
