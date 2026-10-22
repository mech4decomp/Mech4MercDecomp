/*
 * FUN_005b75c0 (71 B) — __cdecl switch returning a slot-name string.
 * Jump table at 0x5b7608 (data, outside function range). Default case
 * asserts via FUN_006fabf0 then returns a fallback string.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_006fabf0(const char *);

__declspec(naked) void *__cdecl FUN_005b75c0(int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, 0x3
        ja      L_75ee
        jmp     dword ptr [eax*4 + 0x5b7608]
    L_75d2:
        mov     eax, 0x786884
        pop     ebp
        ret
    L_75d9:
        mov     eax, 0x786874
        pop     ebp
        ret
    L_75e0:
        mov     eax, 0x786868
        pop     ebp
        ret
    L_75e7:
        mov     eax, 0x78685c
        pop     ebp
        ret
    L_75ee:
        push    0x786840
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_7600
        int     3
    L_7600:
        mov     eax, 0x783164
        pop     ebp
        ret
    }
}
