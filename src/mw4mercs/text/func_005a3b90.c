/*
 * FUN_005a3b90 (39 B) — Internal Structure armor application helper.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: int index, float value).
 * Calls FUN_005a3a50 with adjusted value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005a3a50(void);

__declspec(naked) int __fastcall FUN_005a3b90(void)
{
    
__asm {
        fild    dword ptr [ecx + 0x17C]
        mov     eax, dword ptr [esp + 4]
        fdivr   dword ptr [ecx + eax*4 + 0x180]
        fsubr   dword ptr [esp + 8]
        fstp    dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 4]
        push    edx
        push    eax
        call    FUN_005a3a50
        ret     8
    }


}
