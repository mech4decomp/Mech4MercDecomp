/*
 * FUN_00676910 (72 B) — Object teardown / cleanup.
 *
 * __fastcall (ECX = this). Calls FUN_00676520(i) for i in [0, this+0x10),
 * then FUN_006f4230(this[0]), then walks a linked list at this+0x4
 * (next at +0x2c) calling FUN_00416130 on each non-null node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00676520(int param);
extern void __cdecl FUN_006f4230(int param);
extern void __cdecl FUN_00416130(int param);

extern int DAT_0080daa4;

__declspec(naked) void __fastcall FUN_00676910(void *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        push    edi
        xor     edi, edi
        test    eax, eax
        jle     l_after_loop
    l_loop:
        push    edi
        mov     ecx, esi
        call    FUN_00676520
        mov     eax, dword ptr [esi + 0x10]
        inc     edi
        cmp     edi, eax
        jl      l_loop
    l_after_loop:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        mov     esi, dword ptr [esi + 0x4]
        test    esi, esi
        jz      l_done
    l_outer:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi + 0x2c]
        jz      l_check
        mov     ecx, dword ptr [DAT_0080daa4]
        push    eax
        call    FUN_00416130
    l_check:
        test    esi, esi
        jnz     l_outer
    l_done:
        pop     edi
        pop     esi
        ret
    }
}
