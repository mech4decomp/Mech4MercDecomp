/*
 * FUN_005cb390 (13 B) — this[0] = *param_1.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005cb390(void *this, void *param1)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     4
    }
}
