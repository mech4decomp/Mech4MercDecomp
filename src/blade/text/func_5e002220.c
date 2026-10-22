/*
 * FUN_5e002220 (276 B) — capability/format negotiation method. Queries a chain
 * of sub-objects and returns a status code; sets *param_2 to 1 on success.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * Match: target 100%
 */

extern void __cdecl FUN_5e00e630(void);
extern void __cdecl FUN_5e00e640(void);
extern void __cdecl FUN_5e00e650(void);
extern void __cdecl FUN_5e00e610(void);
extern void __cdecl FUN_5e00e620(void);
extern void __cdecl FUN_5e00e4e0(void);
extern void __cdecl FUN_5e00e3d0(void);
extern void __cdecl FUN_5e00e440(void);
extern void __cdecl FUN_5e00e480(void);
extern void __cdecl FUN_5e00e4b0(void);
extern void __cdecl FUN_5e00e400(void);

__declspec(naked) int __stdcall FUN_5e002220(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ecx, esi
        mov     dword ptr [edi], 0x0
        call    FUN_5e00e630
        test    eax, eax
        jz      L_295
        mov     ecx, esi
        call    FUN_5e00e640
        cmp     eax, 0x2
        mov     ecx, esi
        jnz     L_275
        call    FUN_5e00e650
        cmp     eax, 0x2
        jz      L_295
        mov     ecx, esi
        call    FUN_5e00e650
        cmp     eax, 0x6
        jz      L_295
        mov     ecx, esi
        call    FUN_5e00e650
        cmp     eax, 0x1
        jz      L_295
        pop     edi
        mov     eax, 0x8876081b
        pop     esi
        ret     8
L_275:
        call    FUN_5e00e640
        cmp     eax, 0x5
        jnz     L_28b
        mov     ecx, esi
        call    FUN_5e00e650
        cmp     eax, 0x6
        jz      L_295
L_28b:
        pop     edi
        mov     eax, 0x8876081b
        pop     esi
        ret     8
L_295:
        mov     ecx, esi
        call    FUN_5e00e610
        test    eax, eax
        jz      L_327
        mov     ecx, esi
        call    FUN_5e00e620
        cmp     eax, 0x613
        ja      L_2ca
        jz      L_2db
        sub     eax, 0x22b
        jz      L_2db
        sub     eax, 0xa
        jz      L_2db
        pop     edi
        mov     eax, 0x88760818
        pop     esi
        ret     8
L_2ca:
        cmp     eax, 0x115c
        jz      L_2db
        pop     edi
        mov     eax, 0x88760818
        pop     esi
        ret     8
L_2db:
        mov     ecx, esi
        call    FUN_5e00e4e0
        test    eax, eax
        jnz     L_327
        mov     ecx, esi
        call    FUN_5e00e3d0
        test    eax, eax
        jnz     L_327
        mov     ecx, esi
        call    FUN_5e00e440
        test    eax, eax
        jnz     L_327
        mov     ecx, esi
        call    FUN_5e00e480
        test    eax, eax
        jnz     L_327
        mov     ecx, esi
        call    FUN_5e00e4b0
        test    eax, eax
        jnz     L_327
        mov     ecx, esi
        call    FUN_5e00e400
        test    eax, eax
        jnz     L_327
        pop     edi
        mov     eax, 0x88760819
        pop     esi
        ret     8
L_327:
        mov     dword ptr [edi], 0x1
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
    }
}
