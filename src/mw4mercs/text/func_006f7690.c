/*
 * FUN_006F7690 (103 B) — __fastcall destructor: free buffers, clear list.
 *
 * Sets vtable to 0x79fd34, frees buffers at +0x10 and +0x40 via free()
 * (IAT 0x0076b2d0), sets +0x14/+0x18 to -1, then walks a linked list
 * at +0x1c freeing each node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006f7690(void)
{
    __asm {
        push    ebx
        _emit   0x8B
        _emit   0x1D
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esi], 0x79fd34
        jz      l_skip_free1
        push    eax
        call    ebx
        add     esp, 4
        mov     dword ptr [esi + 0x10], edi
    l_skip_free1:
        mov     eax, dword ptr [esi + 0x40]
        cmp     eax, edi
        jz      l_skip_free2
        push    eax
        call    ebx
        add     esp, 4
        mov     dword ptr [esi + 0x40], edi
    l_skip_free2:
        or      eax, -1
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x18], eax
    l_loop:
        mov     ecx, dword ptr [esi + 0x1c]
        cmp     ecx, edi
        jz      l_done
        mov     eax, dword ptr [ecx + 4]
        cmp     eax, edi
        mov     dword ptr [esi + 0x1c], eax
        jnz     l_not_last
        push    ecx
        mov     dword ptr [esi + 0x20], edi
        call    ebx
        add     esp, 4
        jmp     l_loop
    l_not_last:
        push    ecx
        mov     dword ptr [eax + 8], edi
        call    ebx
        add     esp, 4
        jmp     l_loop
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
