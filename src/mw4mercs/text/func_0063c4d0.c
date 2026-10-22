/*
 * FUN_0063c4d0 (66 B) — __thiscall. Iterates 0x1e times over a list at
 * [this+0x15c], calling FUN_00417a10 / FUN_004179b0 per element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00417a10(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_0063c4d0(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        push    edi
        lea     edi, [ebx+0x15c]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_c50f
        push    esi
        xor     esi, esi
    L_c4e8:
        mov     ecx, edi
        call    FUN_0041fd80
        push    esi
        lea     ecx, [eax+0x14]
        call    FUN_00417a10
        test    eax, eax
        jz      L_c508
        push    eax
        lea     ecx, [ebx+0x154]
        call    FUN_004179b0
    L_c508:
        inc     esi
        cmp     esi, 0x1e
        jl      L_c4e8
        pop     esi
    L_c50f:
        pop     edi
        pop     ebx
        ret
    }
}
