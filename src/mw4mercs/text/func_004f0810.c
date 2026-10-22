/*
 * FUN_004f0810 (51 B) - __thiscall (RET 0x4). Adept/MLR helper: makes a
 * virtual call (vtable+0x20) on an object, then calls FUN_004f0e50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f0e50(void);

__declspec(naked) void func_004f0810(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        mov     word ptr [esp + 0x10], 0xffff
        mov     word ptr [esp + 0x12], 0x0
        call    dword ptr [eax + 0x20]
        push    esi
        mov     ecx, edi
        call    FUN_004f0e50
        pop     edi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
