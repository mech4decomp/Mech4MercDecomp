/*
 * FUN_005c03e0 (82 B) — __thiscall (ECX = this, two dword params, RET 8).
 *
 * Calls FUN_005c1cd0(this, p1, p2). If this->[0x364] is non-null and its
 * [0x8] == 1, calls FUN_005d3050(this, p1, p2); otherwise sets
 * [0x007f1f70] = this, calls FUN_005dc4a0(this, p1, p2), then clears
 * [0x007f1f70].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c1cd0(void);
extern void FUN_005d3050(void);
extern void FUN_005dc4a0(void);

__declspec(naked) void __stdcall FUN_005c03e0(void)
{
    

extern int DAT_007f1f70;
__asm {
push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_005c1cd0
        mov     eax, dword ptr [esi + 0x364]
        test    eax, eax
        jz      L_413
        cmp     dword ptr [eax + 8], 1
        jnz     L_413
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_005d3050
        pop     edi
        pop     esi
        pop     ebx
        ret     8
L_413:
        push    edi
        push    ebx
        mov     ecx, esi
        mov dword ptr [DAT_007f1f70], esi
        call    FUN_005dc4a0
        pop     edi
        pop     esi
        mov dword ptr [DAT_007f1f70], 0x0
        pop     ebx
        ret     8
    }


}
