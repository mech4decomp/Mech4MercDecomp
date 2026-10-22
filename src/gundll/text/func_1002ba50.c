/*
 * FUN_1002ba50 (292 B) — __stdcall, RET 0xC.
 * Allocates an array of param_3 0x14-byte records, deep-copies string
 * pointers from param_2, returns the array via *param_1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);
extern void __stdcall FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);
extern void __stdcall FUN_1002bb80(void);

__declspec(naked) void __stdcall FUN_1002ba50(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        xor     ebx, ebx
        xor     ebp, ebp
        xor     eax, eax
        test    esi, esi
        push    edi
        jnz     L_ba75
        mov     ecx, dword ptr [esp + 0x1c]
        pop     edi
        mov     dword ptr [ecx], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0xC
    L_ba75:
        lea     edi, [esi + esi*4]
        shl     edi, 2
        push    edi
        call    FUN_10001d50
        mov     edx, eax
        add     esp, 4
        test    edx, edx
        mov     dword ptr [esp + 0x10], edx
        jnz     L_ba98
        mov     edi, 0x8007000e
        jmp     L_bb5b
    L_ba98:
        mov     ecx, edi
        mov     edi, edx
        mov     edx, ecx
        shr     ecx, 2
        xor     eax, eax
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        test    esi, esi
        rep stosb
        mov     dword ptr [esp + 0x14], 0
        jbe     L_bb2b
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x20]
        lea     edi, [ecx + 0xc]
        sub     ecx, eax
        lea     esi, [eax + 0x4]
        mov     dword ptr [esp + 0x20], ecx
        __emit 0x8D   /* lea esp,[esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_bad0:
        mov     eax, dword ptr [esi - 4]
        test    eax, eax
        jz      L_bae3
        push    eax
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jz      L_bb41
    L_bae3:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_baf5
        push    eax
        call    FUN_10001dd0
        mov     ebp, eax
        test    ebp, ebp
        jz      L_bb41
    L_baf5:
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [edi - 4], eax
        mov     ecx, dword ptr [esi + 8]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [edi], ecx
        mov     edx, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [eax + esi], ebp
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [edi - 0xc], ebx
        xor     ebx, ebx
        xor     ebp, ebp
        inc     eax
        mov     dword ptr [edi + 4], edx
        add     esi, 0x14
        add     edi, 0x14
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], eax
        jc      L_bad0
    L_bb2b:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], edx
        xor     eax, eax
        pop     ebx
        add     esp, 8
        ret     0xC
    L_bb41:
        test    ebx, ebx
        mov     edi, 0x8007000e
        jz      L_bb53
        push    ebx
        call    FUN_10001d60
        add     esp, 4
    L_bb53:
        mov     esi, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x10]
    L_bb5b:
        test    edx, edx
        jz      L_bb68
        push    esi
        push    edx
        push    0
        call    FUN_1002bb80
    L_bb68:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0xC
    }
}
