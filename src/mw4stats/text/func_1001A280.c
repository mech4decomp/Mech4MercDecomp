/*
 * FUN_1001a280 (356 B) - __stdcall cleanup. Frees the descriptor's
 * secondary buffer (this+0x38->+8), then for each of 8 wide-string
 * pointers at this+0x34->{0x10..0x2c}: validates via IsBadStringPtrW
 * (0x1002105c) and frees via free (0x100210ec) if valid.
 *
 * __stdcall (1 arg, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_1002105c;
extern unsigned long g_100210ec;
extern void __cdecl FUN_1000a0e0(void);

__declspec(naked) void __cdecl FUN_1001a280(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        xor     ebp, ebp
        push    edi
        mov     eax, dword ptr [esi + 0x38]
        cmp     eax, ebp
        jz      L_a2a9
        cmp     dword ptr [eax + 4], ebp
        jbe     L_a2a9
        mov     eax, dword ptr [eax + 8]
        cmp     eax, ebp
        jz      L_a2a3
        push    eax
        call    FUN_1000a0e0
L_a2a3:
        mov     eax, dword ptr [esi + 0x38]
        mov     dword ptr [eax + 4], ebp
L_a2a9:
        mov     eax, dword ptr [esi + 0x34]
        mov     edi, dword ptr [g_1002105c]
        mov     ebx, dword ptr [g_100210ec]
        cmp     eax, ebp
        jz      L_a2da
        mov     ecx, dword ptr [eax + 0x10]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jnz     L_a2da
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x10]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x10], ebp
L_a2da:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_a2ff
        mov     edx, dword ptr [eax + 0x14]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jnz     L_a2ff
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [eax + 0x14]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x14], ebp
L_a2ff:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_a324
        mov     eax, dword ptr [eax + 0x18]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jnz     L_a324
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 0x18]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 0x18], ebp
L_a324:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_a349
        mov     ecx, dword ptr [eax + 0x1c]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jnz     L_a349
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x1c]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x1c], ebp
L_a349:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_a36e
        mov     edx, dword ptr [eax + 0x20]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jnz     L_a36e
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [eax + 0x20]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x20], ebp
L_a36e:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_a393
        mov     eax, dword ptr [eax + 0x24]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jnz     L_a393
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 0x24]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 0x24], ebp
L_a393:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_a3b8
        mov     ecx, dword ptr [eax + 0x28]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jnz     L_a3b8
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x28]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x28], ebp
L_a3b8:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_a3dd
        mov     edx, dword ptr [eax + 0x2c]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jnz     L_a3dd
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [eax + 0x2c]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x2c], ebp
L_a3dd:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
