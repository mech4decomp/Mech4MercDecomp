/*
 * FUN_004B9970 (40 B) — __thiscall method (ECX=this), RET 8.
 * If param_2 > 3, clamps it via FUN_00421e60(param_1).
 * Then calls FUN_00491440(param_1, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00421e60(int param_1);
extern void __cdecl FUN_00491440(int param_1, int param_2);

__declspec(naked) void __stdcall FUN_004b9970(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        cmp     eax, 3
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        jle     l_call_dispatch
        push    edi
        call    FUN_00421e60
        add     esp, 4
    l_call_dispatch:
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00491440
        pop     edi
        pop     esi
        ret     8
    }
}
