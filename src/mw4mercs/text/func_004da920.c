/*
 * FUN_004da920 (54 B) — __thiscall. Constructs a temporary object via
 * FUN_004d1f10, calls FUN_004da8d0, reads a member, then teardown via
 * FUN_004d21c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_004da920(void)
{
    __asm {
        sub     esp, 0x44
        push    esi
        lea     ecx, [esp+0x4]
        call    FUN_004d1f10
        mov     eax, dword ptr [esp+0x4c]
        push    eax
        lea     ecx, [esp+0x8]
        push    ecx
        call    FUN_004da8d0
        mov     edx, dword ptr [esp+0x20]
        mov     esi, dword ptr [edx+0xc]
        add     esp, 0x8
        lea     ecx, [esp+0x4]
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
    }
}
