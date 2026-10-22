/*
 * FUN_005005C0 (33 B) - Call through object's vtable at +0x18
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005005c0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern void __cdecl FUN_0050ddad(void);
__asm {
sub esp, 0x08
        mov eax, [esp+0x10]
        mov edx, [esp+0x0C]
        // __emit: MSVC6 drops displacement 0 for lea ecx,[esp+0]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        // __emit: MSVC6 encodes mov [esp+0],eax as 89 04 24 instead of 89 44 24 00
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, [edx+0x18]
        push ecx
        push eax
        // __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_0050ddad
        add esp, 0x10
        ret
    }


}
