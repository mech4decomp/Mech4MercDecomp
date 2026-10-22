/* src/modules/gundll/crt/func_1003ea57.c — FUN_1003ea57 (70 B) __stdcall, RET 0x4. */

extern void* g_100756b0;
extern void __cdecl FUN_1003990c(void);
extern void __cdecl FUN_1003eaf3(void);

__declspec(naked) void __stdcall FUN_1003ea57(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        cmp     dword ptr [eax], 0xe06d7363
        jnz     L1
        cmp     dword ptr [eax + 0x10], 0x3
        jnz     L1
        cmp     dword ptr [eax + 0x14], 0x19930520
        jnz     L1
        jmp     FUN_1003990c
    L1:
        mov     eax, dword ptr [g_100756b0]
        test    eax, eax
        jz      L2
        push    eax
        call    FUN_1003eaf3
        test    eax, eax
        pop     ecx
        jz      L2
        push    esi
        call    dword ptr [g_100756b0]
        jmp     L3
    L2:
        xor     eax, eax
    L3:
        pop     esi
        ret     0x4
    }
}
