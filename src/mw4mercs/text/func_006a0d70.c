/*
 * FUN_006a0d70 (59 B) — __fastcall helper.
 *
 * Searches a range [begin,end) of 4-byte entries for one equal to
 * [*(this+4)+0x170]+0x30, returning its index (or 0 if not found).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064e100(void);

__declspec(naked) int FUN_006a0d70(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x170]
        push    esi
        mov     esi, dword ptr [ecx + 0xc]
        push    edi
        mov     ecx, esi
        call    FUN_0064e100
        mov     edi, dword ptr [eax + 0x4]
        mov     ecx, esi
        call    FUN_0064e100
        mov     ecx, dword ptr [eax]
        xor     eax, eax
        cmp     ecx, edi
        jz      L_done
        mov     ebx, dword ptr [ebx + 0x30]
    L_loop:
        cmp     dword ptr [ecx], ebx
        jz      L_done
        add     ecx, 0x4
        inc     eax
        cmp     ecx, edi
        jnz     L_loop
    L_done:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
