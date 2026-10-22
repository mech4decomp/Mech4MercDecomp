/*
 * FUN_005DC140 (138 B) — __thiscall (this in ECX), RET 0x4 (1 param).
 * Advances a counter [esi+0x1a4] by a value from FUN_00637A20 (or a
 * default path), with FPU-based growth logic and clamping against
 * [esi+0x17c]/[esi+0x1ac].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637B40(void);
extern void __cdecl FUN_00637A20(void);
extern void __cdecl FUN_0075DB4A(void);

__declspec(naked) void FUN_005DC140(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     eax, -1
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        jne     L5dc164
        push    0xed
        call    FUN_00637B40
        mov     ecx, eax
        call    FUN_00637A20
        call    FUN_0075DB4A
    L5dc164:
        mov     ecx, dword ptr [esi + 0x1a4]
        mov     ebx, dword ptr [esi + 0x17c]
        add     ecx, eax
        mov     edi, ecx
        cmp     edi, ebx
        mov     dword ptr [esi + 0x1a4], ecx
        jl      L5dc1c4
        mov     ecx, dword ptr [esi + 0x1ac]
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
        jne     L5dc1b7
        inc     ebx
        mov     dword ptr [esi + 0x17c], ebx
    L5dc1b7:
        sub     edi, dword ptr [esi + 0x17c]
        inc     edi
        mov     dword ptr [esi + 0x1a4], edi
    L5dc1c4:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
