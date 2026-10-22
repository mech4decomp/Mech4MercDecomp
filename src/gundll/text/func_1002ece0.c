/*
 * FUN_1002ece0 (118 B) — __thiscall, RET 0x4.
 * Adds an entry (this+0x2c / this+0x30) into two parallel arrays at
 * this+0x34 / this+0x234 indexed by this+0x434 (bounded at 0x7e).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002e750(void);
extern void __cdecl FUN_1002ed60(void);

__declspec(naked) void FUN_1002ece0(void)
{
    __asm {
        cmp     dword ptr [esp + 0x4], 0x7
        push    esi
        mov     esi, ecx
        jz      L_f8
        push    0xc1121c00
        call    FUN_1002e3a0
        pop     esi
        ret     0x4
    L_f8:
        mov     ecx, dword ptr [esi + 0x434]
        push    ebx
        mov     ebx, dword ptr [esi + 0x2c]
        xor     eax, eax
        cmp     ecx, 0x7e
        push    edi
        mov     edi, dword ptr [esi + 0x30]
        jc      L_1d
        push    0xc1121c01
        mov     ecx, esi
        call    FUN_1002e3a0
        test    eax, eax
        jl      L_3a
    L_1d:
        mov     ecx, dword ptr [esi + 0x434]
        mov     dword ptr [esi + ecx*4 + 0x34], ebx
        mov     edx, dword ptr [esi + 0x434]
        mov     dword ptr [esi + edx*4 + 0x234], edi
        inc     dword ptr [esi + 0x434]
    L_3a:
        test    eax, eax
        pop     edi
        pop     ebx
        jl      L_52
        mov     ecx, esi
        call    FUN_1002e750
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x24], eax
        call    FUN_1002ed60
    L_52:
        pop     esi
        ret     0x4
    }
}
