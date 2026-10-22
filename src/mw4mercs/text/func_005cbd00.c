/*
 * FUN_005cbd00 (248 B) — __thiscall (ECX = this), RET 0xC (3 params).
 * String-buffer insert/append helper. Grows the buffer (via FUN_004084d0 /
 * FUN_004084e0 alloc/free) and inserts a substring, or memmoves within the
 * buffer when there is room.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *__cdecl FUN_005cc0f0(void *dst, void *src, void *mid, void *end, int c);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005cbd00(void)
{
    

extern int DAT_0076b28c;
__asm {
push    ecx
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        cmp     edx, esi
        push    edi
        mov     edi, ecx
        jz      L_EE
        mov     ebx, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edi]
        mov     ebp, esi
        sub     ebp, edx
        mov     edx, dword ptr [edi + 0x8]
        mov     eax, ebx
        sub     eax, ecx
        sub     edx, ecx
        dec     edx
        lea     ecx, [eax + ebp]
        cmp     ecx, edx
        mov     dword ptr [esp + 0x10], eax
        jbe     L_C7
        cmp     eax, ebp
        mov     dword ptr [esp + 0x1c], ebp
        lea     ecx, [esp + 0x1c]
        jc      L_49
        lea     ecx, [esp + 0x10]
L_49:
        mov     edx, dword ptr [ecx]
        lea     eax, [edx + eax + 0x1]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      L_66
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_6E
L_66:
        mov     dword ptr [esp + 0x1c], 0x0
L_6E:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        push    0x0
        push    eax
        mov     eax, dword ptr [edi]
        push    ecx
        push    ebx
        push    eax
        call    FUN_005cc0f0
        push    ebp
        mov     ebp, dword ptr [esp + 0x30]
        mov     ebx, eax
        push    ebp
        push    ebx
        call dword ptr [DAT_0076b28c]
        mov     eax, dword ptr [edi]
        sub     esi, ebp
        add     ebx, esi
        add     esp, 0x20
        test    eax, eax
        mov     byte ptr [ebx], 0x0
        jz      L_AB
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_AB:
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi], eax
        add     eax, edx
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0x4], ebx
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_C7:
        mov     eax, dword ptr [esp + 0x18]
        inc     eax
        sub     esi, eax
        push    esi
        push    eax
        lea     ecx, [ebx + 0x1]
        push    ecx
        call dword ptr [DAT_0076b28c]
        mov     edx, dword ptr [esp + 0x24]
        add     esp, 0xc
        add     ebp, ebx
        mov     byte ptr [ebp], 0x0
        mov     al, byte ptr [edx]
        mov     byte ptr [ebx], al
        mov     dword ptr [edi + 0x4], ebp
L_EE:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }


}
