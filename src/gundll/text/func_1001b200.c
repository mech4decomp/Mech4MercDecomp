/* src/modules/gundll/hashlist/func_1001b200.c — FUN_1001b200 (71 B) __thiscall, RET 0x4. */

extern void __cdecl FUN_1003791a(void);
extern void __cdecl FUN_10037ef1(void);

__declspec(naked) void FUN_1001b200(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        push    ebx
        mov     edi, ecx
        call    FUN_1003791a
        add     esp, 0x4
        mov     esi, eax
        inc     esi
        cmp     esi, 0x80
        jbe     L1
        pop     edi
        pop     esi
        mov     eax, 0xc1120005
        pop     ebx
        ret     0x4
    L1:
        push    esi
        lea     eax, [edi + 0x84]
        push    ebx
        push    eax
        call    FUN_10037ef1
        add     esp, 0xc
        mov     dword ptr [edi + 0x80], esi
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x4
    }
}
