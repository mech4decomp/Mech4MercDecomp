/*
 * FUN_0061bf80 (36 B) — Computes two float products from this's fields
 * and stores them to param_1 and param_2; stores this+0x18 to *param_3.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0061bf80(void *param1, void *param2, void *param3)
{
    __asm {
        fild    dword ptr [ecx + 0x24]
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        fmul    dword ptr [ecx + 0x18]
        fstp    dword ptr [eax]
        mov     eax, dword ptr [ecx + 0x18]
        fild    dword ptr [ecx + 0x20]
        fmul    dword ptr [ecx + 0x18]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx], eax
        fstp    dword ptr [edx]
        ret     0xc
    }
}
