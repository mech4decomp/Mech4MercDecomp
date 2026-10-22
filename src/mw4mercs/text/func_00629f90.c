/*
 * FUN_00629F90 (122 B) — Sum over array of 0x1C-byte entries.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Iterates entries at this+0x50 (count = (this+0x54 - this+0x50)/0x1C),
 * and for each entry whose [*entry+4]==8 and [*entry+8]==param, calls
 * FUN_00624420 and accumulates the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00624420(void);

__declspec(naked) int __stdcall FUN_00629f90(int param)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [esi + 0x54]
        sub     ecx, eax
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        push    edi
        shr     eax, 0x1f
        xor     ebp, ebp
        xor     edi, edi
        add     edx, eax
        jz      l_done
        push    ebx
        mov     ebx, dword ptr [esi + 0x50]
    l_loop:
        mov     ecx, dword ptr [ebx]
        cmp     dword ptr [ecx + 0x4], 0x8
        jnz     l_next
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, ecx
        cmp     dword ptr [edx + 0x8], eax
        jnz     l_next
        mov     ecx, edx
        call    FUN_00624420
        add     ebp, eax
    l_next:
        mov     edx, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [esi + 0x54]
        sub     ecx, edx
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     ecx, edx
        shr     ecx, 0x1f
        inc     edi
        add     edx, ecx
        add     ebx, 0x1c
        cmp     edi, edx
        jc      l_loop
        pop     ebx
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
    l_done:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
    }
}
