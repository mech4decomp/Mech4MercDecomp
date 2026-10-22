/*
 * FUN_005d67d0 (67 B) — Allocate param_1 dwords, copy [param_2,param_3) into it.
 *
 * __cdecl, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void __cdecl FUN_005d67d0(int param_1, void *param_2, void *param_3)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L67E6
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        jmp     L67E8
L67E6:
        xor     eax, eax
L67E8:
        mov     ecx, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        cmp     ecx, edi
        jz      L680F
        push    ebx
        push    esi
        mov     esi, eax
        sub     esi, ecx
L67FB:
        lea     edx, [esi + ecx*0x1]
        test    edx, edx
        jz      L6806
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [edx], ebx
L6806:
        add     ecx, 0x4
        cmp     ecx, edi
        jnz     L67FB
        pop     esi
        pop     ebx
L680F:
        pop     edi
        ret     0xc
    }
}
