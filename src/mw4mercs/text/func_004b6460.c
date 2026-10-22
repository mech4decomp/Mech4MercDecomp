/*
 * FUN_004B6460 (26 B) — __thiscall method.
 * Stores param_1 at this+0x190, then calls param_1->vtable[2](this+0x144).
 * RET 0x4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004b6460(int param_1)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0x190], ecx
        add     eax, 0x144
        push    eax
        call    dword ptr [edx + 8]
        ret     4
    }
}
