/*
 * FUN_100303e0 (39 B) — __stdcall, RET 0x8, 2 args.
 * Calls FUN_10033680(param_2, param_1+0x1c, (param_1? param_1+4 : 0), 0,
 * *(param_1+0x10)).
 */

extern void __cdecl FUN_10033680(void);

__declspec(naked) void FUN_100303e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L1
        lea     ecx, [eax + 0x4]
        jmp     L2
    L1:
        xor     ecx, ecx
    L2:
        mov     edx, dword ptr [eax + 0x10]
        push    edx
        push    0
        push    ecx
        add     eax, 0x1c
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_10033680
        ret     0x8
    }
}
