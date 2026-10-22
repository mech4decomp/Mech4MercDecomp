/*
 * FUN_0062a0b0 (142 B) — Iterates an array of 0x1C-byte entries at this+0x50,
 * count = (this+0x54 - this+0x50) / 0x1C. For each entry whose vtable
 * (entry[0]) has [4]==0x34 and [8]==0, calls FUN_00624490(); if it equals
 * -1-param, calls FUN_00624420() and keeps the max result in EBP.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00624490(void);
extern int __cdecl FUN_00624420(void);

__declspec(naked) int __stdcall FUN_0062a0b0(int param1)
{
    __asm {
        push    ebx
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
        shr     eax, 0x1f
        xor     ebp, ebp
        xor     ebx, ebx
        add     edx, eax
        jz      l_done
        push    edi
        mov     edi, dword ptr [esi + 0x50]
    l_loop:
        mov     ecx, dword ptr [edi]
        cmp     dword ptr [ecx + 0x4], 0x34
        jnz     l_next
        mov     edx, ecx
        mov     eax, dword ptr [edx + 0x8]
        test    eax, eax
        jnz     l_next
        call    FUN_00624490
        mov     edx, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        sub     ecx, edx
        cmp     eax, ecx
        jnz     l_next
        mov     ecx, dword ptr [edi]
        call    FUN_00624420
        cmp     eax, ebp
        jle     l_next
        mov     ebp, eax
    l_next:
        mov     edx, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [esi + 0x54]
        sub     ecx, edx
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        inc     ebx
        add     edx, eax
        add     edi, 0x1c
        cmp     ebx, edx
        jc      l_loop
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    l_done:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
