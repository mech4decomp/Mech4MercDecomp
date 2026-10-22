/*
 * FUN_1001c2d0 (108 B) — __stdcall, RET 0x8 (2 params).
 * Validate + call helper, store result, free on failure.
 */

extern void __stdcall FUN_1001c280(void);
extern void __stdcall FUN_1001c190(void);
extern void __stdcall FUN_1001c2a0(void);

__declspec(naked) void __stdcall FUN_1001c2d0(void)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [esp + 0x8]
        push    edi
        push    edx
        mov     dword ptr [esp + 0x8], 0x0
        call    FUN_1001c280
        test    al, al
        jnz     L1
        mov     eax, 0x80070057
        pop     edi
        pop     ecx
        ret     0x8
    L1:
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        jnz     L2
        mov     eax, 0x80070057
        pop     edi
        pop     ecx
        ret     0x8
    L2:
        push    esi
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [edx + 0x4]
        mov     edx, dword ptr [edx]
        push    ecx
        push    edx
        call    FUN_1001c190
        mov     esi, eax
        test    esi, esi
        mov     eax, dword ptr [esp + 0x8]
        jl      L3
        mov     dword ptr [edi], eax
        mov     eax, esi
        pop     esi
        pop     edi
        pop     ecx
        ret     0x8
    L3:
        test    eax, eax
        jz      L4
        push    eax
        call    FUN_1001c2a0
    L4:
        mov     eax, esi
        pop     esi
        pop     edi
        pop     ecx
        ret     0x8
    }
}
