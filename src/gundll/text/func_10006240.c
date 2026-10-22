/*
 * FUN_10006240 (96 B) - __fastcall.
 * List teardown: frees each node (FUN_1000c4c0), frees the bucket array
 * (FUN_10001d60), resets +0x4, and tail-calls FUN_1001aee0.
 *
 * __fastcall (this in ECX).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000c4c0(void);   /* rel32 call, 2 args */
extern void __cdecl FUN_10001d60(void);   /* rel32 call, 1 arg */
extern void __cdecl FUN_1001aee0(void);   /* rel32 call, 0 args */
extern void *g_10055050;                  /* abs data @ 0x10055050 */

__declspec(naked) void __fastcall FUN_10006240(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebx, ecx
        xor     ebp, ebp
        cmp     word ptr [ebx], bp
        jbe     L_6280
        push    esi
        push    edi
        /* __emit: 3-byte alignment NOP (LEA ECX,[ECX+0]); MSVC6 drops the 00 disp */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
    L_6250:
        mov     edx, dword ptr [ebx + 0x4]
        xor     esi, esi
        mov     si, bp
        shl     esi, 0x4
        mov     eax, dword ptr [esi + edx]
        add     esi, edx
        cmp     eax, esi
        jz      L_6278
    L_6264:
        mov     edi, dword ptr [eax]
        push    eax
        mov     eax, dword ptr [g_10055050]
        push    eax
        call    FUN_1000c4c0
        cmp     edi, esi
        mov     eax, edi
        jnz     L_6264
    L_6278:
        inc     ebp
        cmp     bp, word ptr [ebx]
        jc      L_6250
        pop     edi
        pop     esi
    L_6280:
        cmp     word ptr [ebx], 0x1
        jbe     L_6292
        mov     ecx, dword ptr [ebx + 0x4]
        push    ecx
        call    FUN_10001d60
        add     esp, 0x4
    L_6292:
        pop     ebp
        mov     dword ptr [ebx + 0x4], 0x0
        pop     ebx
        jmp     FUN_1001aee0
    }
}
