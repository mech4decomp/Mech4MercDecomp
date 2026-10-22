/*
 * FUN_5e00f070 (322 B) — DirectDraw wrapper factory (variant). If the
 * object's 0x20 pointer is set, forwards to the inner object's
 * vtable[0x18/4] method. Otherwise allocates a 0x2c-byte wrapper object,
 * fills two vtables, checks a pixel-format descriptor, calls
 * FUN_5e011bf0 (init), and on failure deletes the object.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02b45e(unsigned int);   /* operator new */
extern void __cdecl FUN_5e02b453(void *);          /* operator delete */
extern void __cdecl FUN_5e011bf0(void);

__declspec(naked) void __stdcall FUN_5e00f070(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        xor     ebp, ebp
        mov     eax, dword ptr [ebx + 0x20]
        push    esi
        cmp     eax, ebp
        push    edi
        jz      L_f09d
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    L_f09d:
        mov     eax, dword ptr [esp + 0x1c]
        push    0x2c
        mov     dword ptr [eax], ebp
        call    FUN_5e02b45e
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_f191
        mov     al, byte ptr [esi + 0x28]
        lea     edi, [esi + 0xc]
        and     al, 0xfe
        mov     dword ptr [esi + 0x4], 0x5e035f6c
        mov     byte ptr [esi + 0x28], al
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x8], 0x5e035eb8
        mov     dword ptr [edi], 0x5e035df4
        mov     ecx, dword ptr [eax + 0x68]
        mov     dword ptr [esi + 0x10], 0x5e035ddc
        test    ch, 0x10
        mov     dword ptr [esi + 0x14], ebp
        mov     dword ptr [esi + 0x18], ebp
        mov     dword ptr [esi + 0x1c], ebp
        mov     dword ptr [esi + 0x20], ebp
        mov     dword ptr [esi + 0x24], ebp
        mov     dword ptr [esi], 0x5e035d4c
        mov     dword ptr [esi + 0x4], 0x5e035cb0
        mov     dword ptr [esi + 0x8], 0x5e035bfc
        mov     dword ptr [edi], 0x5e035b38
        mov     dword ptr [esi + 0x10], 0x5e035b20
        jnz     L_f14c
        cmp     dword ptr [eax + 0x54], 0x10
        jnz     L_f14c
        cmp     dword ptr [eax + 0x58], 0x7c00
        jnz     L_f14c
        cmp     dword ptr [eax + 0x5c], 0x3e0
        jnz     L_f14c
        cmp     dword ptr [eax + 0x60], 0x1f
        jnz     L_f14c
        cmp     dword ptr [eax + 0x64], 0x8000
        jnz     L_f14c
        mov     ecx, dword ptr [eax + 0x4c]
        mov     dword ptr [eax + 0x64], ebp
        and     ecx, 0xfffffffc
        mov     dword ptr [eax + 0x4c], ecx
    L_f14c:
        add     ebx, -0x8
        push    eax
        push    ebx
        mov     ecx, esi
        call    FUN_5e011bf0
        mov     ebx, eax
        cmp     ebx, ebp
        jge     L_f19d
        push    esi
        mov     dword ptr [esi], 0x5e035d4c
        mov     dword ptr [esi + 0x4], 0x5e035cb0
        mov     dword ptr [esi + 0x8], 0x5e035bfc
        mov     dword ptr [edi], 0x5e035b38
        mov     dword ptr [esi + 0x10], 0x5e035b20
        call    FUN_5e02b453
        add     esp, 4
        mov     eax, ebx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    L_f191:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        ret     0x10
    L_f19d:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi]
        push    esi
        mov     dword ptr [ecx], edi
        call    dword ptr [edx + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x10
    }
}
