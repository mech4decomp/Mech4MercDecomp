/*
 * FUN_10006480 (96 B) - __fastcall.
 * Frees every node in each list of the array (param_1 in ECX) via
 * FUN_1000c4c0, frees the array itself (FUN_10001d60) if count > 1, then
 * tail-jumps to FUN_1001aee0.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 */

extern int  g_10055050;                       /* DAT_10055050 */
extern void __cdecl FUN_1000c4c0(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_10001d60(void);       /* rel32 call, 1 arg */
extern void __cdecl FUN_1001aee0(void);       /* tail jmp */

__declspec(naked) void __fastcall FUN_10006480(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebx, ecx
        xor     ebp, ebp
        cmp     word ptr [ebx], bp
        jbe     L_64c0
        push    esi
        push    edi
        /* __emit: 3-byte NOP (LEA ECX,[ECX+0]); MSVC6 emits 2-byte 8D 09 */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
    L_6490:
        mov     edx, dword ptr [ebx + 0x4]
        xor     esi, esi
        mov     si, bp
        shl     esi, 0x4
        mov     eax, dword ptr [esi + edx]
        add     esi, edx
        cmp     eax, esi
        jz      L_64b8
    L_64a4:
        mov     edi, dword ptr [eax]
        push    eax
        mov     eax, dword ptr [g_10055050]
        push    eax
        call    FUN_1000c4c0
        cmp     edi, esi
        mov     eax, edi
        jnz     L_64a4
    L_64b8:
        inc     ebp
        cmp     bp, word ptr [ebx]
        jc      L_6490
        pop     edi
        pop     esi
    L_64c0:
        cmp     word ptr [ebx], 0x1
        jbe     L_64d2
        mov     ecx, dword ptr [ebx + 0x4]
        push    ecx
        call    FUN_10001d60
        add     esp, 0x4
    L_64d2:
        pop     ebp
        mov     dword ptr [ebx + 0x4], 0x0
        pop     ebx
        jmp     FUN_1001aee0
    }
}
