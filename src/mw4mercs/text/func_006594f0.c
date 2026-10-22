/*
 * FUN_006594f0 (44 B) — ABL tree-node helper: constructs two temporary
 * records via FUN_006584d0 (__thiscall, ECX=ESP) then calls FUN_00659880.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006584d0(void *p);
extern void __cdecl FUN_00659880(void);

__declspec(naked) void FUN_006594f0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x14]
        push    eax
        sub     esp, 0x10
        lea     edx, [esp+0x28]
        mov     ecx, esp
        push    edx
        call    FUN_006584d0
        sub     esp, 0x10
        lea     eax, [esp+0x28]
        mov     ecx, esp
        push    eax
        call    FUN_006584d0
        call    FUN_00659880
        add     esp, 0x24
        ret
    }
}
