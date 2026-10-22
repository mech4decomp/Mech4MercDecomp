/*
 * FUN_10014b70 (184 B) — __stdcall, RET 0x1c.
 * Object init helper: validates [esi+0xc]==0, allocates three buffers via
 * FUN_10001dd0, stores into object fields, returns 0 on success.
 */

extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10014b70(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        xor     edi, edi
        test    eax, eax
        jz      L_b8d
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x1c
    L_b8d:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_c21
        mov     ebp, dword ptr [esp + 0x1c]
        push    ebp
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_bb4
        test    ebp, ebp
        jnz     L_c00
    L_bb4:
        mov     ebp, dword ptr [esp + 0x20]
        push    ebp
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jnz     L_bc8
        test    ebp, ebp
        jnz     L_c00
    L_bc8:
        mov     ebp, dword ptr [esp + 0x2c]
        push    ebp
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jnz     L_bdc
        test    ebp, ebp
        jnz     L_c00
    L_bdc:
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 0x28], edx
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x24], edi
        pop     edi
        mov     dword ptr [esi + 0x20], ebx
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x2c], edx
        mov     dword ptr [esi + 0x30], ecx
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x1c
    L_c00:
        test    ebx, ebx
        mov     esi, 0x8007000e
        jz      L_c12
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_c12:
        test    edi, edi
        jz      L_c1f
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_c1f:
        mov     eax, esi
    L_c21:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x1c
    }
}
