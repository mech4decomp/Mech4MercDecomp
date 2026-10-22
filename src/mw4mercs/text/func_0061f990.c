/*
 * FUN_0061f990 (112 B) - __thiscall (RET 0x4). Sorted-insert of a value
 * (EBX = [esp+4]) into an int array (ECX = container: [0]=cap, [4]=count,
 * [8]=array). Returns status (1=empty, 2=bad value, 0=ok).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_0061f990(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ecx+4]
        cmp     edi, eax
        jnz     L_9a7
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     4
L_9a7:
        mov     ebx, dword ptr [esp+0x10]
        test    ebx, ebx
        jg      L_9ba
        pop     edi
        pop     esi
        mov     eax, 2
        pop     ebx
        ret     4
L_9ba:
        xor     eax, eax
        test    edi, edi
        jle     L_9d3
        mov     esi, dword ptr [ecx+8]
L_9c3:
        mov     edx, dword ptr [esi]
        cmp     ebx, edx
        jz      L_9f8
        jl      L_9d3
        inc     eax
        add     esi, 4
        cmp     eax, edi
        jl      L_9c3
L_9d3:
        cmp     eax, edi
        jge     L_9ee
        mov     edx, dword ptr [ecx+8]
        mov     esi, edi
        push    ebp
        lea     edx, [edx+eax*4]
        sub     esi, eax
L_9e2:
        mov     ebp, dword ptr [edx]
        mov     dword ptr [edx+4], ebp
        add     edx, 4
        dec     esi
        jnz     L_9e2
        pop     ebp
L_9ee:
        mov     edx, dword ptr [ecx+8]
        inc     edi
        mov     dword ptr [edx+eax*4], ebx
        mov     dword ptr [ecx+4], edi
L_9f8:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     4
    }
}
