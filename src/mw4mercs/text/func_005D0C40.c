/*
 * FUN_005D0C40 (82 B) — __thiscall (1 stack arg, RET 4). Iterates entries
 * [this+0x4C8 .. this+0x4CC), writing a 16-bit value into a global-derived
 * table at [g_7f2440->0x3C->0x8 + ((edx+0x100)*0x200 + (esi+0x100))*2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005D0740(void);
extern int g_7f2440;

__declspec(naked) void FUN_005D0C40(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [ecx + 0x4cc]
        push    edi
        mov     edi, dword ptr [ecx + 0x4c8]
        cmp     edi, ebx
        je      loc_5d0c88
        mov     eax, dword ptr [g_7f2440]
        mov     eax, dword ptr [eax + 0x3c]
        push    ebp
        mov     ebp, dword ptr [eax + 8]
        push    esi
loc_5d0c5f:
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edx + 4]
        mov     esi, dword ptr [edx]
        mov     dx, word ptr [edx + 8]
        add     eax, 0x100
        add     esi, 0x100
        shl     eax, 9
        add     eax, esi
        add     edi, 4
        cmp     edi, ebx
        mov     word ptr [ebp + eax*2], dx
        jne     loc_5d0c5f
        pop     esi
        pop     ebp
loc_5d0c88:
        call    FUN_005D0740
        pop     edi
        pop     ebx
        ret     4
    }
}
