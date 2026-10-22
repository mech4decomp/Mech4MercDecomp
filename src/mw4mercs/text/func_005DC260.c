/*
 * FUN_005DC260 (138 B) — __thiscall (this in ECX), RET 0x4 (1 param).
 * Same shape as FUN_005DC140/FUN_005DC1D0 but operates on
 * [esi+0x1a8]/[esi+0x184]/[esi+0x1b4] and uses push 0xee on the default
 * path.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637B40(void);
extern void __cdecl FUN_00637A20(void);
extern void __cdecl FUN_0075DB4A(void);

__declspec(naked) void FUN_005DC260(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     eax, -1
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        jne     L5dc284
        push    0xee
        call    FUN_00637B40
        mov     ecx, eax
        call    FUN_00637A20
        call    FUN_0075DB4A
    L5dc284:
        mov     ecx, dword ptr [esi + 0x1a8]
        mov     ebx, dword ptr [esi + 0x184]
        add     ecx, eax
        mov     edi, ecx
        cmp     edi, ebx
        mov     dword ptr [esi + 0x1a8], ecx
        jl      L5dc2e4
        mov     ecx, dword ptr [esi + 0x1b4]
        mov     eax, ebx
        sub     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        push    0xef
        fstp    dword ptr [esp + 0x14]
        call    FUN_00637B40
        mov     ecx, eax
        call    FUN_00637A20
        fcomp   dword ptr [esp + 0x10]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jne     L5dc2d7
        inc     ebx
        mov     dword ptr [esi + 0x184], ebx
    L5dc2d7:
        sub     edi, dword ptr [esi + 0x184]
        inc     edi
        mov     dword ptr [esi + 0x1a8], edi
    L5dc2e4:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
