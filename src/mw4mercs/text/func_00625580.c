/*
 * FUN_00625580 (126 B) — Copy/allocate a vector-like structure.
 *
 * __cdecl, 2 stack params. Copies header fields from param_2 into
 * param_1, allocates a backing buffer via FUN_004084d0, and copies
 * the element array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);

__declspec(naked) void __cdecl FUN_00625580(void *param_1, void *param_2)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        xor     edx, edx
        cmp     esi, edx
        jz      l_fc
        mov     eax, dword ptr [esp + 0xc]
        mov     cl, byte ptr [eax]
        push    ebx
        mov     ebx, dword ptr [eax + 8]
        mov     byte ptr [esi], cl
        mov     cx, word ptr [eax + 2]
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        push    edi
        mov     word ptr [esi + 2], cx
        mov     cl, byte ptr [eax + 0xc]
        mov     edi, ebx
        sub     edi, ebp
        sar     edi, 2
        mov     dword ptr [esi + 4], edx
        mov     byte ptr [esi + 0xc], cl
        mov     dword ptr [esi + 8], edx
        mov     dword ptr [esi + 0xc], edx
        jz      l_d0
        lea     edx, [edi * 4 + 0]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        xor     edx, edx
        jmp     l_d2
    l_d0:
        xor     eax, eax
    l_d2:
        lea     ecx, [eax + edi * 4]
        mov     dword ptr [esi + 0xc], ecx
        mov     ecx, ebp
        cmp     ecx, ebx
        mov     dword ptr [esi + 4], eax
        mov     dword ptr [esi + 8], eax
        jz      l_f6
    l_e4:
        cmp     eax, edx
        jz      l_ec
        mov     edi, dword ptr [ecx]
        mov     dword ptr [eax], edi
    l_ec:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, ebx
        jnz     l_e4
    l_f6:
        pop     edi
        pop     ebp
        mov     dword ptr [esi + 8], eax
        pop     ebx
    l_fc:
        pop     esi
        ret
    }
}
