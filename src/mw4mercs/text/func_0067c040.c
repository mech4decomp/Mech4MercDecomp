/*
 * FUN_0067c040 (98 B) — __thiscall (this in ECX), RET 0x8, 2 params.
 *
 * Allocates a buffer of size (param_2 - param_1 + 1) via FUN_004084d0,
 * stores pointers in this[0..2], then memcpy's param_2-param_1 bytes from
 * param_1 into the buffer and NUL-terminates.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void *p);

__declspec(naked) void FUN_0067c040(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        sub     ebx, edi
        lea     esi, [ebx + 0x1]
        cmp     esi, -0x2
        mov     ebp, ecx
        ja      L_c074
        test    esi, esi
        jz      L_c067
        push    esi
        call    FUN_004084d0
        add     esp, 0x4
        jmp     L_c069
    L_c067:
        xor     eax, eax
    L_c069:
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x4], eax
        add     eax, esi
        mov     dword ptr [ebp + 0x8], eax
    L_c074:
        test    ebx, ebx
        mov     eax, dword ptr [ebp]
        jle     L_c095
        mov     esi, eax
        sub     esi, eax
        add     esi, edi
        mov     ecx, ebx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, eax
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        add     eax, ebx
    L_c095:
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x4], eax
        pop     ebp
        mov     byte ptr [eax], 0x0
        pop     ebx
        ret     0x8
    }
}
