/*
 * FUN_005b1f00 (93 B) — __thiscall (ECX = this), RET (no stack args).
 * Calls vtable method, compares two 16-bit values, conditionally calls
 * FUN_005fa610 / FUN_0041fcd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __fastcall FUN_0041fd80(void);
extern int  __fastcall FUN_005fa610(int, int, int);
extern void __fastcall FUN_0041fcd0(int);

__declspec(naked) void __fastcall FUN_005b1f00(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, [esi+0x78]
        lea     ecx, [esi+0x78]
        push    edi
        call    dword ptr [eax+0x4]
        mov     cx, word ptr [eax+0x32c]
        cmp cx, word ptr [DAT_007db0ac]
        lea     edi, [eax+0x32c]
        jnz     l_31
        mov     dx, word ptr [edi+0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      l_59
    l_31:
        lea     ebx, [esi+0x5ac]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jnz     l_59
        push    1
        push    esi
        push    edi
        mov     ecx, esi
        call    FUN_005fa610
        test    eax, eax
        jz      l_59
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
    l_59:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }


}
