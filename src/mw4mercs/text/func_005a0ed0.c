/*
 * FUN_005a0ed0 (44 B) — __thiscall function with 2 stack params. Calls an
 * assert-like check, then delegates to FUN_005f3760.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern void __cdecl FUN_005f3760(void);

void __declspec(naked) __cdecl FUN_005a0ed0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        push    esi

        push    0x76d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      skip_int3

        int     3

skip_int3:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005f3760

        pop     esi
        pop     ebp
        ret     0x8
    }


}
