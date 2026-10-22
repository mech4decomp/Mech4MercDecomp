// FUN_00531F00 (64 bytes)
extern void __cdecl FUN_00417ad0(void);

__declspec(naked) void func_00531f00(void)
{
    __asm {
        sub     esp, 0x0C
        lea     eax, [ecx + 0xD0]
        mov     dword ptr [esp + 4], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 8], eax
        /* __emit: MSVC6 encodes mov dword ptr [esp],imm as C7 04 24, not C7 44 24 00 (zero-disp [esp]) */
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x04 __asm _emit 0xB3 __asm _emit 0x77 __asm _emit 0x00
loop0:
        test    eax, eax
        jz      done
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      done
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xA8]
        /* __emit: MSVC6 encodes lea ecx,[esp] as 8D 0C 24, not 8D 4C 24 00 */
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x00
        call    FUN_00417ad0
        mov     eax, dword ptr [esp + 8]
        jmp     loop0
done:
        add     esp, 0x0C
        ret
    }
}
