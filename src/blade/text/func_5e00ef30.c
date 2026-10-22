/*
 * FUN_5e00ef30 (36 B) — __stdcall (RET 0x14), 5 args.
 * Calls virtual method at vtable+0x14 on the sub-object at [arg+0x20],
 * forwarding 4 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00ef30(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 4]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax + 0x20]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        ret     0x14
    }
}
