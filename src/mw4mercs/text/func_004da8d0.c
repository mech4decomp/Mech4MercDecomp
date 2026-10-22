/*
 * FUN_004da8d0 (80 B) — __thiscall. Constructs a temporary object via
 * FUN_004d1f80, invokes a virtual method (vtable+0x20), then
 * FUN_004d21d0 / FUN_004d21c0 teardown.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21d0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_004da8d0(void)
{
    __asm {
        sub     esp, 0x44
        mov     eax, dword ptr [esp+0x4c]
        push    0x1
        push    eax
        lea     ecx, [esp+0x8]
        call    FUN_004d1f80
        __emit 0x8B   /* __emit: mov edx,[esp]; MSVC6 drops the 00 disp byte (8B 14 24 vs ref 8B 54 24 00) */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    0x4
        lea     ecx, [esp+0x50]
        push    ecx
        lea     ecx, [esp+0x8]
        mov     word ptr [esp+0x54], 0xffff
        mov     word ptr [esp+0x56], 0x0
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [esp+0x48]
        push    0x1
        lea     eax, [esp+0x50]
        push    eax
        call    FUN_004d21d0
        __emit 0x8D   /* __emit: lea ecx,[esp]; MSVC6 drops the 00 disp byte (8D 0C 24 vs ref 8D 4C 24 00) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_004d21c0
        add     esp, 0x44
        ret
    }
}
