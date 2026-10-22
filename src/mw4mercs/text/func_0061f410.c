/*
 * FUN_0061f410 (116 B) - __thiscall. Mission/pilot-save options subsystem.
 * Inserts a record into a free-list/array structure (ECX = container,
 * [esp+4] = record). Returns the inserted slot pointer or 0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_0061f410(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        mov     eax, dword ptr [edx+0x18]
        cmp     eax, 1
        push    ebx
        push    esi
        jz      L_428
        cmp     eax, 2
        jle     L_47d
        cmp     eax, 5
        jg      L_47d
L_428:
        mov     eax, dword ptr [edx+0x14]
        xor     ebx, ebx
        cmp     eax, ebx
        jnz     L_47f
        mov     eax, dword ptr [ecx+4]
        cmp     eax, dword ptr [ecx]
        jge     L_47d
        mov     esi, dword ptr [ecx+8]
        lea     eax, [esi+eax*8]
        mov     dword ptr [edx+0x14], eax
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [ecx+4]
        mov     edx, dword ptr [ecx+8]
        mov     byte ptr [edx+eax*8+4], bl
        mov     eax, dword ptr [ecx+4]
        mov     edx, dword ptr [ecx+8]
        mov     byte ptr [edx+eax*8+5], bl
        mov     eax, dword ptr [ecx+4]
        mov     edx, dword ptr [ecx+8]
        mov     byte ptr [edx+eax*8+6], bl
        mov     eax, dword ptr [ecx+4]
        mov     edx, dword ptr [ecx+8]
        mov     byte ptr [edx+eax*8+7], bl
        mov     edx, dword ptr [ecx+4]
        mov     eax, dword ptr [ecx+8]
        lea     eax, [eax+edx*8]
        inc     edx
        pop     esi
        mov     dword ptr [ecx+4], edx
        pop     ebx
        ret     4
L_47d:
        xor     eax, eax
L_47f:
        pop     esi
        pop     ebx
        ret     4
    }
}
