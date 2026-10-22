/*
 * FUN_005d6680 (186 B) — Vector reserve/grow.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * this layout: [0]=begin, [4]=end, [8]=capacity_end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005d6680(void *param)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [edi + 0x8]
        sub     eax, esi
        sar     eax, 0x2
        cmp     eax, edx
        jnc     L6734
        push    ebx
        push    ebp
        mov     ebp, dword ptr [edi + 0x4]
        mov     ebx, ebp
        sub     ebx, esi
        sar     ebx, 0x2
        test    esi, esi
        mov     dword ptr [esp + 0x10], ebx
        jz      L670A
        test    edx, edx
        jz      L66C9
        lea     ecx, [edx*0x4 + 0x0]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0x4
        jmp     L66CB
L66C9:
        xor     eax, eax
L66CB:
        cmp     esi, ebp
        mov     ecx, esi
        jz      L66EF
        mov     ebx, eax
        sub     ebx, esi
L66D5:
        lea     edx, [ebx + ecx*0x1]
        test    edx, edx
        jz      L66E0
        mov     esi, dword ptr [ecx]
        mov     dword ptr [edx], esi
L66E0:
        add     ecx, 0x4
        cmp     ecx, ebp
        jnz     L66D5
        mov     ebx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
L66EF:
        mov     esi, eax
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      L6724
        push    eax
        call    FUN_004084e0
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0x4
        jmp     L6724
L670A:
        test    edx, edx
        jz      L6722
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0x4
        mov     esi, eax
        jmp     L6724
L6722:
        xor     esi, esi
L6724:
        lea     eax, [esi + ebx*0x4]
        lea     ecx, [esi + edx*0x4]
        pop     ebp
        mov     dword ptr [edi], esi
        mov     dword ptr [edi + 0x4], eax
        mov     dword ptr [edi + 0x8], ecx
        pop     ebx
L6734:
        pop     edi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
