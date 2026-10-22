/*
 * FUN_007571c0 (88 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Stores param into this+0xd8, then iterates a global array (0x00856a8c,
 * count 0x00856a88) calling FUN_00756590 on each element's +0x5c, then
 * walks a linked list from 0x00857f34 calling FUN_00749a00 on each node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856a88;
extern int g_00857f34;
extern void __cdecl FUN_00756590(void);
extern void __cdecl FUN_00749a00(void);

__declspec(naked) void __stdcall FUN_007571c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0xd8], eax
        mov     eax, dword ptr [g_00856a88]
        push    esi
        xor     esi, esi
        test    eax, eax
        jle     L1
        push    edi
        mov     edi, 0x856a8c
loop1:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [ecx + 0x5c]
        push    edx
        call    FUN_00756590
        mov     eax, dword ptr [g_00856a88]
        inc     esi
        add     edi, 0x4
        cmp     esi, eax
        jl      loop1
        pop     edi
L1:
        mov     esi, dword ptr [g_00857f34]
        test    esi, esi
        jz      L2
loop2:
        mov     eax, dword ptr [esi + 0x20]
        push    0x0
        push    eax
        push    0x2
        push    esi
        call    FUN_00749a00
        mov     esi, dword ptr [esi + 0x38]
        test    esi, esi
        jnz     loop2
L2:
        pop     esi
        ret     0x4
    }
}
