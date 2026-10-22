/*
 * FUN_10040531 (230 B) — __stdcall, RET 0x10 (4 params).
 * Binary search over a 0x2c-stride locale table at 0x10053fa0; on match
 * copies a per-LCTYPE string via FUN_10037f30, else falls back to
 * GetLocaleInfoA (IAT 0x10049170).
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10053fa0[];
extern unsigned int g_10053fb4;
extern unsigned int g_10053fac;
extern void *g_10049170;
extern void __cdecl FUN_10037f30(void);

__declspec(naked) void __stdcall FUN_10040531(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        push    0x1a
        xor     esi, esi
        pop     edi
    L_4053c:
        lea     eax, [edi + esi*1]
        mov     ebx, dword ptr [ebp + 0x14]
        cdq
        sub     eax, edx
        sar     eax, 0x1
        mov     ecx, eax
        imul    ecx, ecx, 0x2c
        mov     ecx, dword ptr [ecx + g_10053fa0]
        cmp     dword ptr [ebp + 0x8], ecx
        jz      L_4057f
        cmp     dword ptr [ebp + 0x8], ecx
        jnc     L_40561
        lea     edi, [eax - 0x1]
        jmp     L_40564
    L_40561:
        lea     esi, [eax + 0x1]
    L_40564:
        cmp     esi, edi
        jle     L_4053c
    L_40568:
        push    ebx
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_10049170]
    L_40578:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x10
    L_4057f:
        mov     ecx, dword ptr [ebp + 0xc]
        dec     ecx
        jz      L_405e0
        dec     ecx
        dec     ecx
        jz      L_405d6
        sub     ecx, 0x4
        jz      L_405cc
        sub     ecx, 0x4
        jz      L_405c2
        sub     ecx, 0xff6
        jz      L_405b7
        dec     ecx
        jz      L_405ac
        dec     ecx
        dec     ecx
        jnz     L_40568
        imul    eax, eax, 0x2c
        add     eax, 0x10053fc4
        jmp     L_405e8
    L_405ac:
        imul    eax, eax, 0x2c
        mov     eax, dword ptr [eax + g_10053fb4]
        jmp     L_405e8
    L_405b7:
        imul    eax, eax, 0x2c
        mov     eax, dword ptr [eax + g_10053fac]
        jmp     L_405e8
    L_405c2:
        imul    eax, eax, 0x2c
        add     eax, 0x10053fbc
        jmp     L_405e8
    L_405cc:
        imul    eax, eax, 0x2c
        add     eax, 0x10053fb8
        jmp     L_405e8
    L_405d6:
        imul    eax, eax, 0x2c
        add     eax, 0x10053fb0
        jmp     L_405e8
    L_405e0:
        imul    eax, eax, 0x2c
        add     eax, 0x10053fa4
    L_405e8:
        test    eax, eax
        jz      L_40568
        cmp     ebx, 0x1
        jl      L_40568
        mov     esi, dword ptr [ebp + 0x10]
        lea     ecx, [ebx - 0x1]
        push    ecx
        push    eax
        push    esi
        call    FUN_10037f30
        add     esp, 0xc
        and     byte ptr [esi + ebx*1 - 0x1], 0x0
        push    0x1
        pop     eax
        jmp     L_40578
    }
}
