/*
 * FUN_004DAD40 (19 B) — Indexed getter: calls vtable method at
 * offset 4 on [ECX+0x34], then returns [result + param2 * 4].
 *
 * __thiscall (ECX = this), RET 4 (one stack param: index).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_004dad40(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x34]
        add     ecx, 0x34
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esp + 4]
        lea     eax, [eax + ecx * 4]
        ret     4
    }
}
