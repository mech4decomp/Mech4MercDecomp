/*
 * FUN_005b2030 (97 B) — __thiscall (ECX = this), RET 0xc (3 stack args).
 * Calls vtable method, compares two 16-bit values, conditionally calls
 * FUN_005fa7a0 / FUN_0041fcd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __fastcall FUN_0041fd80(void);
extern int  __fastcall FUN_005fa7a0(int, int);
extern void __fastcall FUN_0041fcd0(int);

__declspec(naked) void __fastcall FUN_005b2030(void)
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
        mov     cx, word ptr [eax+0x338]
        cmp cx, word ptr [DAT_007db0ac]
        lea     edi, [eax+0x338]
        jnz     l_61
        mov     dx, word ptr [edi+0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      l_8b
    l_61:
        lea     ebx, [esi+0x5c4]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jnz     l_8b
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_005fa7a0
        test    eax, eax
        jz      l_8b
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
    l_8b:
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    }


}
