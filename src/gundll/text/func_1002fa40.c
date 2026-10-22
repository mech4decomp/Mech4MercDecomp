/*
 * FUN_1002fa40 (104 B) — __stdcall, RET 0x4 (1 param).
 * CoCreateInstance a service, call its method, release on failure.
 */

extern void *g_10049234;   /* IAT: CoCreateInstance */
extern void __stdcall FUN_10033890(void);

__declspec(naked) void __stdcall FUN_1002fa40(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        lea     edi, [ebx + 0xc]
        push    edi
        push    0x1004ae3c
        push    0x17
        push    0x0
        push    0x1004ae6c
        call    dword ptr [g_10049234]   /* CoCreateInstance */
        mov     esi, eax
        test    esi, esi
        push    0x0
        jge     L1
        push    0x0
        push    0xc0000008
        push    0x1005153c
        call    FUN_10033890
        jmp     L2
    L1:
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [eax]
        push    0x10030d50
        push    ebx
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     esi, eax
    L2:
        test    esi, esi
        jge     L3
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L3
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [edi], 0x0
    L3:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
