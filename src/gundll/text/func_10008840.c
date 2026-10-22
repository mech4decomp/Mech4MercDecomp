/*
 * FUN_10008840 (177 B) - __fastcall. Object teardown: drains two buffers via
 * virtual calls, resets vtable pointers, frees via FUN_10001d60.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10008840(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_88ea
        push    edi
        mov     byte ptr [esi + 0xc], 0x1
        lea     edi, [esi + 0x10]
L_8856:
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        jge     L_8856
        mov     al, byte ptr [esi + 0xd]
        test    al, al
        mov     byte ptr [esi + 0xc], 0x0
        jz      L_88e5
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        mov     byte ptr [esi + 0xe], 0x1
        jz      L_889e
        __emit 0x8D  /* __emit: 6-byte NOP (lea ebx,[ebx+0]) alignment padding; MSVC6 would emit 2-byte lea ebx,[ebx] */
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_8880:
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [edx + 0x10]
        test    eax, eax
        jge     L_8880
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x8], 0x0
L_889e:
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        jz      L_88b2
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x20], 0x0
L_88b2:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        mov     dword ptr [esi], 0x100495d4
        mov     dword ptr [edi], 0x100495d0
        mov     dword ptr [esi + 0x14], 0x100495cc
        mov     dword ptr [esi + 0x18], 0x100495b8
        mov     dword ptr [esi + 0x1c], 0x100495a0
        call    FUN_10001d60
        push    esi
        call    FUN_10001d60
        add     esp, 0x8
L_88e5:
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_88ea:
        mov     eax, 0xc1120008
        pop     esi
        ret
    }
}
