/*
 * FUN_10017ea0 (380 B) - __stdcall destructor. Frees the buffer array at
 * +0x464 (each element an object with its own buffer), then frees a set
 * of wide-string buffers at +0x34+0x14..0x28 guarded by IsBadStringPtrW.
 *
 * __stdcall (1 arg, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_100210ec;
extern unsigned long g_1002105c;
extern void __cdecl FUN_1000a0e0(void);
extern void __cdecl FUN_1000a110(void);

__declspec(naked) void __cdecl FUN_10017ea0(void)
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
        jz      L_A
        cmp     dword ptr [eax + 4], ebp
        jbe     L_A
        mov     eax, dword ptr [eax + 0xc]
        cmp     eax, ebp
        jz      L_B
        push    eax
        call    FUN_1000a0e0
L_B:
        cmp     dword ptr [esi + 0x464], ebp
        jz      L_C
        mov     eax, dword ptr [esi + 0x38]
        xor     ebx, ebx
        cmp     dword ptr [eax + 4], ebp
        jbe     L_D
L_loop:
        mov     ecx, dword ptr [esi + 0x464]
        mov     edi, dword ptr [ecx + ebx*4]
        cmp     edi, ebp
        jz      L_E
        cmp     dword ptr [edi + 0xc], ebp
        jbe     L_F
        mov     eax, dword ptr [edi]
        cmp     eax, ebp
        jz      L_F
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_F:
        push    edi
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 0x10], ebp
        mov     dword ptr [edi + 0xc], ebp
        call    FUN_1000a110
        add     esp, 4
L_E:
        mov     edx, dword ptr [esi + 0x38]
        inc     ebx
        cmp     ebx, dword ptr [edx + 4]
        jc      L_loop
L_D:
        mov     eax, dword ptr [esi + 0x464]
        push    eax
        call    FUN_1000a0e0
L_C:
        mov     ecx, dword ptr [esi + 0x38]
        mov     dword ptr [ecx + 4], ebp
L_A:
        mov     eax, dword ptr [esi + 0x34]
        mov     edi, dword ptr [g_1002105c]
        cmp     eax, ebp
        jz      L_G
        mov     edx, dword ptr [eax + 0x14]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jnz     L_G
        mov     eax, dword ptr [esi + 0x34]
        mov     ebx, dword ptr [g_100210ec]
        mov     ecx, dword ptr [eax + 0x14]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x14], ebp
        jmp     L_H
L_G:
        mov     ebx, dword ptr [g_100210ec]
L_H:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_I
        mov     eax, dword ptr [eax + 0x18]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jnz     L_I
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 0x18]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 0x18], ebp
L_I:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_J
        mov     ecx, dword ptr [eax + 0x1c]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jnz     L_J
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x1c]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x1c], ebp
L_J:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_K
        mov     edx, dword ptr [eax + 0x20]
        push    -1
        push    edx
        call    edi
        test    eax, eax
        jnz     L_K
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [eax + 0x20]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x20], ebp
L_K:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_L
        mov     eax, dword ptr [eax + 0x24]
        push    -1
        push    eax
        call    edi
        test    eax, eax
        jnz     L_L
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [ecx + 0x24]
        push    edx
        call    ebx
        mov     eax, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [eax + 0x24], ebp
L_L:
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_M
        mov     ecx, dword ptr [eax + 0x28]
        push    -1
        push    ecx
        call    edi
        test    eax, eax
        jnz     L_M
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0x28]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x28], ebp
L_M:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
