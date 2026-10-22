/*
 * FUN_005d83f0 (103 B) — Find a node in the array at +0x10 whose two
 * sub-list pointers match (param1,param2) in either order; return the
 * node's first field, or -1 if not found.
 *
 * __fastcall (ECX = this), two stack params, RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_005d83f0(void *param)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x14]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        sub     edx, edi
        sar     edx, 0x2
        xor     esi, esi
        test    edx, edx
        jle     L8435
        mov     ebx, dword ptr [esp + 0x14]
        mov     ecx, edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, ecx
L8411:
        mov     ebp, dword ptr [eax]
        test    ebp, ebp
        jz      L842D
        cmp     dword ptr [ebp + 0x4], edi
        jnz     L8421
        cmp     dword ptr [ebp + 0x8], ebx
        jz      L843F
L8421:
        mov     ebp, dword ptr [eax]
        cmp     dword ptr [ebp + 0x4], ebx
        jnz     L842D
        cmp     dword ptr [ebp + 0x8], edi
        jz      L844B
L842D:
        inc     esi
        add     eax, 0x4
        cmp     esi, edx
        jl      L8411
L8435:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret     0x8
L843F:
        mov     eax, dword ptr [ecx + esi*0x4]
        mov     eax, dword ptr [eax]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
L844B:
        mov     ecx, dword ptr [ecx + esi*0x4]
        mov     eax, dword ptr [ecx]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
