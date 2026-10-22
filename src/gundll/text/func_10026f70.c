/*
 * FUN_10026f70 (166 B) — __stdcall, RET 0x14.
 * Object init: allocates up to three buffers, stores them into the object,
 * returns HRESULT-style status.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10026f70(void)
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
        jz      L_8d
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x14
    L_8d:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_0f
        mov     ebp, dword ptr [esp + 0x1c]
        push    ebp
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_b0
        test    ebp, ebp
        jnz     L_ee
    L_b0:
        mov     ebp, dword ptr [esp + 0x20]
        push    ebp
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jnz     L_c4
        test    ebp, ebp
        jnz     L_ee
    L_c4:
        mov     ebp, dword ptr [esp + 0x24]
        push    ebp
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jnz     L_d8
        test    ebp, ebp
        jnz     L_ee
    L_d8:
        mov     dword ptr [esi + 0x24], edi
        pop     edi
        mov     dword ptr [esi + 0x20], ebx
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x28], ecx
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x14
    L_ee:
        test    ebx, ebx
        mov     esi, 0x8007000e
        jz      L_00
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_00:
        test    edi, edi
        jz      L_0d
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_0d:
        mov     eax, esi
    L_0f:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    }
}
