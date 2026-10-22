/*
 * FUN_004ADD70 (20 B) — __thiscall vtable dispatch.
 *   Calls param->vtable[0x24](this+4, 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004add70(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        push    4
        add     eax, 4
        push    eax
        call    dword ptr [edx + 0x24]
        ret     4
    }
}
