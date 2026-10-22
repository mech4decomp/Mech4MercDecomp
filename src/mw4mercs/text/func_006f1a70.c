/*
 * FUN_006F1A70 (164 B) — Compare/set object fields.
 *
 * __fastcall (ECX = this), RET 0x8 (2 stack params).
 * Compares this+0x40 and this+0x48 against param1/param2.
 * If both match, returns 1. Otherwise copies param1/param2 into
 * the object fields via string operations.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fcb0(void);
extern int  __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcd0(int);

__declspec(naked) int __fastcall FUN_006F1A70(int param1, int param2)
{
    __asm {
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x40]
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ebp, [esp + 0x10]
        cmp     eax, ebp
        jnz     l_not_equal
        lea     ecx, [edi + 0x48]
        call    FUN_0041fd80
        cmp     eax, [esp + 0x14]
        jnz     l_not_equal
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebp
        ret     8

    l_not_equal:
        push    ebx
        lea     ebx, [edi + 0x50]
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_skip1
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
    l_skip1:
        mov     ecx, esi
        call    FUN_0041fcb0
        push    ebp
        mov     ecx, esi
        call    FUN_0041fcd0
        lea     ebx, [edi + 0x58]
        mov     ecx, ebx
        call    FUN_0041fcb0
        lea     esi, [edi + 0x48]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_skip2
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
    l_skip2:
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_0041fcd0
        pop     ebx
        pop     edi
        pop     esi
        xor     al, al
        pop     ebp
        ret     8
    }
}
