/*
 * FUN_10015da0 (131 B) — __stdcall, RET 0x14.
 * Guarded init: rejects if member 0xc is set; calls FUN_1001c760,
 * allocates two short arrays via FUN_10001dd0, stores into members
 * 0x24/0x20/0x28, frees on failure. (Same shape as FUN_10015a20.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c760(void);
extern void __stdcall FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10015da0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        jz      loc_5db9
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x14
    loc_5db9:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      loc_5e1d
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebx
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jnz     loc_5ddc
        test    ebx, ebx
        jnz     loc_5e09
    loc_5ddc:
        mov     ebx, dword ptr [esp + 0x20]
        push    ebx
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jnz     loc_5df0
        test    ebx, ebx
        jnz     loc_5e09
    loc_5df0:
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x24], edi
        pop     edi
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x28], ecx
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x14
    loc_5e09:
        test    edi, edi
        mov     esi, 0x8007000e
        jz      loc_5e1b
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    loc_5e1b:
        mov     eax, esi
    loc_5e1d:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x14
    }
}
