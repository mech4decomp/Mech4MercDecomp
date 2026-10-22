/*
 * FUN_1001c600 (96 B) — __stdcall, RET 0x10.
 * Validates a flag byte; copies a buffer (rep movsd/movsb) and stores size.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c490(void);

__declspec(naked) void __stdcall FUN_1001c600(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     cl, byte ptr [ebx + 0x4]
        xor     eax, eax
        test    cl, cl
        jnz     L1
        mov     eax, 0xc1120008
        pop     ebx
        ret     0x10
    L1:
        mov     ecx, dword ptr [ebx + 0x10]
        test    ecx, ecx
        jnz     L2
        push    ebx
        call    FUN_1001c490
        test    eax, eax
        jl      L3
    L2:
        mov     ecx, dword ptr [ebx + 0x18]
        cmp     dword ptr [esp + 0x10], ecx
        jnc     L4
        mov     eax, 0xc1120002
        pop     ebx
        ret     0x10
    L4:
        push    esi
        mov     esi, dword ptr [ebx + 0x10]
        mov     edx, ecx
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        mov     edx, dword ptr [esp + 0x1c]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [ebx + 0x18]
        pop     edi
        mov     dword ptr [edx], ecx
        pop     esi
    L3:
        pop     ebx
        ret     0x10
    }
}
