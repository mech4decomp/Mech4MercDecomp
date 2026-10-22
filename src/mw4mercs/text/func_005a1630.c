/*
 * FUN_005a1630 (9 B) — Thunk: calls [this+0x78]->vtable[1].
 *
 * __thiscall (ECX = this), tail-calls through vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005a1630(int this_ptr)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x78]
        add     ecx, 0x78
        jmp     dword ptr [eax + 0x4]
    }
}
