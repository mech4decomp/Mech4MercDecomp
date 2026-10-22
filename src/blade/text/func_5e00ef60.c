/*
 * FUN_5e00ef60 (258 B) — DirectDraw wrapper factory. If the object's
 * 0x28 flag is set, forwards to the inner object's vtable[0x18/4] method.
 * Otherwise allocates a 0x2c-byte wrapper object, fills two vtables, calls
 * FUN_5e011bd0 (init), and on failure deletes the object.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02b45e(unsigned int);   /* operator new */
extern void __cdecl FUN_5e02b453(void *);          /* operator delete */
extern void __cdecl FUN_5e011bd0(void);

__declspec(naked) void __stdcall FUN_5e00ef60(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     eax, dword ptr [ebx + 0x28]
        xor     edi, edi
        cmp     eax, edi
        jz      L_ef8e
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebx + 0x20]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x18]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    L_ef8e:
        mov     eax, dword ptr [esp + 0x18]
        push    0x2c
        mov     dword ptr [eax], edi
        call    FUN_5e02b45e
        mov     esi, eax
        add     esp, 4
        cmp     esi, edi
        jz      L_f043
        mov     al, byte ptr [esi + 0x28]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x4], 0x5e035f6c
        mov     dword ptr [esi + 0x8], 0x5e035eb8
        mov     dword ptr [esi + 0xc], 0x5e035df4
        and     al, 0xfe
        push    ecx
        mov     dword ptr [esi + 0x10], 0x5e035ddc
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0x20], edi
        mov     dword ptr [esi + 0x24], edi
        mov     byte ptr [esi + 0x28], al
        mov     dword ptr [esi], 0x5e035d4c
        mov     dword ptr [esi + 0x4], 0x5e035cb0
        mov     dword ptr [esi + 0x8], 0x5e035bfc
        mov     dword ptr [esi + 0xc], 0x5e035b38
        mov     dword ptr [esi + 0x10], 0x5e035b20
        call    FUN_5e011bd0
        mov     ebx, eax
        cmp     ebx, edi
        jge     L_f04e
        push    esi
        mov     dword ptr [esi], 0x5e035d4c
        mov     dword ptr [esi + 0x4], 0x5e035cb0
        mov     dword ptr [esi + 0x8], 0x5e035bfc
        mov     dword ptr [esi + 0xc], 0x5e035b38
        mov     dword ptr [esi + 0x10], 0x5e035b20
        call    FUN_5e02b453
        add     esp, 4
        mov     eax, ebx
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    L_f043:
        pop     edi
        pop     esi
        mov     eax, 0x8007000e
        pop     ebx
        ret     0x10
    L_f04e:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi]
        push    esi
        mov     dword ptr [edx], esi
        call    dword ptr [eax + 0x4]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x10
    }
}
