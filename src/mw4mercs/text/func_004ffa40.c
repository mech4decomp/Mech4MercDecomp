/*
 * FUN_004ffa40 (51 B) — MLR/Adept message-type dispatcher. Switches on the
 * object's first dword (0..3) and jumps through a 4-entry jump table
 * (at 0x4ffa74, outside this function's byte range) to one of three
 * handlers; returns 0 for out-of-range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_jumptable_004ffa74;       /* 4-entry jump table at 0x4ffa74 */
extern void __cdecl FUN_004ffb90(void);
extern void __cdecl FUN_004ffa90(void);
extern void __cdecl FUN_004ffd30(void);

__declspec(naked) void FUN_004ffa40(void)
{
    __asm {
        mov     ecx, dword ptr [esp+0x4]
        mov     eax, dword ptr [ecx]
        cmp     eax, 0x3
        ja      L4
        jmp     dword ptr [eax*4 + g_jumptable_004ffa74]
L1:
        push    ecx
        call    FUN_004ffb90
        add     esp, 0x4
        ret
L2:
        push    ecx
        call    FUN_004ffa90
        add     esp, 0x4
        ret
L3:
        push    ecx
        call    FUN_004ffd30
        add     esp, 0x4
        ret
L4:
        xor     eax, eax
        ret
    }
}
