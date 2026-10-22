/*
 * FUN_006503D0 (107 B @ 0x6503d0) - __cdecl. Inserts a node into a sorted
 * linked list keyed by a string comparison. (Block 0x6503C6 is 280 B and
 * contains a second function at 0x650440.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_006503D0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [ecx]
        xor     edx, edx
        cmp     edi, eax
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 4], eax
        mov     dword ptr [ebp + 8], eax
        je      L_650431
        push    ebx
        push    esi
L_6503ef:
        mov     esi, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [ebp + 0x10]
L_6503f5:
        mov     bl, byte ptr [ecx]
        mov     dl, bl
        cmp     bl, byte ptr [esi]
        jne     L_650419
        cmp     dl, al
        je      L_650415
        mov     bl, byte ptr [ecx + 1]
        mov     dl, bl
        cmp     bl, byte ptr [esi + 1]
        jne     L_650419
        add     ecx, 2
        add     esi, 2
        cmp     dl, al
        jne     L_6503f5
L_650415:
        xor     ecx, ecx
        jmp     L_65041e
L_650419:
        sbb     ecx, ecx
        sbb     ecx, -1
L_65041e:
        cmp     ecx, eax
        mov     ecx, edi
        jl      L_650427
        lea     ecx, [edi + 8]
L_650427:
        mov     edx, edi
        mov     edi, dword ptr [ecx]
        cmp     edi, eax
        jne     L_6503ef
        pop     esi
        pop     ebx
L_650431:
        pop     edi
        mov     dword ptr [ebp + 4], edx
        mov     dword ptr [ecx], ebp
        mov     eax, ebp
        pop     ebp
        ret
    }
}
