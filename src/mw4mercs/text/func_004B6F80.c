/*
 * FUN_004B6F80 (92 B) — iterates an array of objects, calling virtual methods
 * and returning a selected object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004B6F80(void)
{
    __asm {
        push    ecx
        push    ebp
        xor     eax, eax
        mov     ebp, ecx
        mov     ax, word ptr [ebp+0x14c]
        test    eax, eax
        jle     L_6fd7
        push    ebx
        mov     ebx, dword ptr [ebp+0x144]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x18]
        mov     dword ptr [esp+0x10], eax
    L_6fa2:
        mov     esi, dword ptr [ebx]
        push    edi
        mov     ecx, esi
        call    dword ptr [esi+0x138]
        test    al, 2
        je      L_6fbf
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax+0x1c]
        test    eax, eax
        je      L_6fbf
        mov     ebp, eax
    L_6fbf:
        mov     eax, dword ptr [esp+0x10]
        add     ebx, 4
        dec     eax
        mov     dword ptr [esp+0x10], eax
        jne     L_6fa2
        pop     edi
        pop     esi
        pop     ebx
        mov     eax, ebp
        pop     ebp
        pop     ecx
        ret     4
    L_6fd7:
        mov     eax, ebp
        pop     ebp
        pop     ecx
        ret     4
    }
}
