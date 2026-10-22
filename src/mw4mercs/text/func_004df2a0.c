/*
 * FUN_004df2a0 (52 B) — MLR/Adept input-binding reset. __thiscall
 * (ECX = this). Resets the 0x3b78 sub-object and clears the 0x3b75/76/77
 * state bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void FUN_004df2a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x3b78]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L2BC
        mov     ecx, edi
        call    FUN_0041fcb0
L2BC:
        mov     al, 0x1
        pop     edi
        mov     byte ptr [esi + 0x3b75], 0x0
        mov     byte ptr [esi + 0x3b76], al
        mov     byte ptr [esi + 0x3b77], al
        pop     esi
        ret
    }
}
