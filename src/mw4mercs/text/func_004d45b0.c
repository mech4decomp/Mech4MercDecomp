/*
 * FUN_004d45b0 (49 B) — MLR network/server subsystem. __thiscall (ECX=this),
 * RET 0x4. Constructor: calls a base ctor, initializes a sub-object at
 * this+0x5c, and installs two vtable pointers (0x7729a0 / 0x772994).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491de0(void);
extern void __cdecl FUN_00416280(void);

__declspec(naked) void FUN_004d45b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00491de0
        push    0x1
        push    0x0
        lea     edi, [esi + 0x5c]
        push    0x17
        mov     ecx, edi
        call    FUN_00416280
        mov     dword ptr [edi], 0x7729a0
        pop     edi
        mov     dword ptr [esi], 0x772994
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
