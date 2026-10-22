/*
 * FUN_004BCF30 (35 B) — __thiscall method (ECX=this), RET 4.
 * Calls FUN_004bf310(param_1), then calls param_1->vtable[0x24](this+0x150, 2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004bf310(int *param_1);

__declspec(naked) void __stdcall FUN_004bcf30(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_004bf310
        mov     eax, dword ptr [edi]
        push    2
        add     esi, 0x150
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        pop     edi
        pop     esi
        ret     4
    }
}
