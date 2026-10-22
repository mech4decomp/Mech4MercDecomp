/*
 * FUN_5e00ef10 (31 B) — __stdcall (RET 0x10), 4 args.
 * Calls virtual method at vtable+0x10 on the sub-object at [arg+0x20],
 * forwarding 3 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00ef10(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 4]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 0x20]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        ret     0x10
    }
}
