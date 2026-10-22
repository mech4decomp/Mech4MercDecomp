/*
 * FUN_005cbf80 (266 B) — __thiscall (ECX = this), RET 0xC (3 params).
 * String-buffer insert helper (variant of FUN_005cbe50). Grows the buffer
 * (FUN_004084d0/e0 alloc/free) and inserts a substring, or memmoves within
 * the buffer when there is room.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005cbf80(void)
{
    

extern int DAT_0076b28c;
__asm {
sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     ecx, esi
        push    edi
        jz      L_7E
        mov     edi, dword ptr [ebx + 0x4]
        mov     ebp, dword ptr [ebx]
        sub     esi, ecx
        mov     ecx, dword ptr [ebx + 0x8]
        mov     eax, edi
        sub     eax, ebp
        sub     ecx, ebp
        dec     ecx
        lea     edx, [esi + eax]
        cmp     edx, ecx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], esi
        jbe     L_55
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], esi
        lea     ecx, [esp + 0x10]
        jc      L_CD
        lea     ecx, [esp + 0x14]
L_CD:
        mov     ecx, dword ptr [ecx]
        lea     eax, [ecx + eax + 0x1]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      L_EA
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_F6
L_EA:
        mov     dword ptr [esp + 0x10], 0x0
        mov     eax, dword ptr [esp + 0x10]
L_F6:
        sub     edi, ebp
        test    edi, edi
        mov     esi, eax
        jle     L_0B
        mov     ecx, ebp
        sub     ecx, eax
L_02:
        mov     dl, byte ptr [ecx + esi]
        mov     byte ptr [esi], dl
        inc     esi
        dec     edi
        jnz     L_02
L_0B:
        mov     eax, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x20]
        push    eax
        push    edi
        push    esi
        call dword ptr [DAT_0076b28c]
        mov     ecx, dword ptr [esp + 0x30]
        sub     esi, edi
        add     esi, ecx
        add     esp, 0xc
        test    ebp, ebp
        mov     byte ptr [esi], 0x0
        jz      L_37
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_37:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx + 0x4], esi
        add     eax, ecx
        pop     esi
        mov     dword ptr [ebx + 0x8], eax
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0xc
        ret     0xc
L_55:
        mov     ebp, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        lea     eax, [ebp + 0x1]
        sub     ecx, eax
        push    ecx
        push    eax
        lea     edx, [edi + 0x1]
        push    edx
        call dword ptr [DAT_0076b28c]
        add     esp, 0xc
        add     esi, edi
        mov     byte ptr [esi], 0x0
        mov     al, byte ptr [ebp]
        mov     byte ptr [edi], al
        mov     dword ptr [ebx + 0x4], esi
L_7E:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }


}
