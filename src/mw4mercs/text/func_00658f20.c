/*
 * FUN_00658f20 (41 B) — builds two stack buffers, calls FUN_006584d0
 * (thiscall, ecx=stack buffer) on each, then calls FUN_006594f0().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006584d0(void);
extern void __cdecl FUN_006594f0(void);

__declspec(naked) void FUN_00658f20(void)
{
    __asm {
        push    0x0
        sub     esp, 0x10
        lea     eax, [esp + 0x28]
        mov     ecx, esp
        push    eax
        call    FUN_006584d0
        sub     esp, 0x10
        lea     edx, [esp + 0x28]
        mov     ecx, esp
        push    edx
        call    FUN_006584d0
        call    FUN_006594f0
        add     esp, 0x24
        ret
    }
}
