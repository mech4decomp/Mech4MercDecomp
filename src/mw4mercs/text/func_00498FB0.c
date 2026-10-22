/*
 * FUN_00498FB0 (55 B) — __thiscall (RET 0x4). Iterates over a count at
 * [ebx+0x170] (ebx = [this+0x10]), calling FUN_004994C0(this, i) for each
 * index i in [0, count).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004941d0(void);
extern void __cdecl FUN_004994c0(void);

__declspec(naked) void FUN_00498FB0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_004941d0
        mov     ebx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [ebx + 0x170]
        xor     esi, esi
        test    eax, eax
        jle     L_498fe1
L_498fce:
        push    esi
        mov     ecx, edi
        call    FUN_004994c0
        mov     eax, dword ptr [ebx + 0x170]
        inc     esi
        cmp     esi, eax
        jl      L_498fce
L_498fe1:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
