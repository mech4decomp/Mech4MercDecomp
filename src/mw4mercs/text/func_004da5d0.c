/*
 * FUN_004da5d0 (60 B) — __thiscall, RET 0x4. MLR/Adept core: invokes
 * virtual method at vtable+0x98, recursively walks a linked list at
 * [this+0xbc] calling itself with the arg, then calls FUN_004da620
 * with (arg, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004da620(void);

__declspec(naked) void FUN_004da5d0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        call    dword ptr [eax + 0x98]
        mov     esi, dword ptr [edi + 0xbc]
        mov     ebx, dword ptr [esp + 0x10]
L2:
        test    esi, esi
        jz      L1
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L1
        push    ebx
        call    FUN_004da5d0
        __emit 0xEB  /* __emit: backward jmp after call-reloc miscomputed off-by-4; ref needs EB EB */
        __emit 0xEB
L1:
        push    0x0
        push    ebx
        mov     ecx, edi
        call    FUN_004da620
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
