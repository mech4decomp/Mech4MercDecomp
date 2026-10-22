/*
 * FUN_005cbe50 (295 B) — __thiscall (ECX = this), RET 0xC (3 params).
 * String-buffer insert helper. Grows the buffer (FUN_004084d0/e0 alloc/free)
 * and inserts a substring, or memmoves within the buffer when there is room.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005cbe50(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     esi, ecx
        push    edi
        jz      L_6B
        mov     edi, dword ptr [ebx + 0x4]
        mov     ebp, dword ptr [ebx]
        mov     edx, ecx
        sub     edx, esi
        mov     esi, dword ptr [ebx + 0x8]
        mov     eax, edi
        sub     eax, ebp
        sub     esi, ebp
        mov     dword ptr [esp + 0x10], edx
        dec     esi
        add     edx, eax
        cmp     edx, esi
        mov     dword ptr [esp + 0x14], eax
        jbe     L_39
        mov     esi, dword ptr [esp + 0x10]
        cmp     eax, esi
        mov     dword ptr [esp + 0x20], esi
        lea     ecx, [esp + 0x20]
        jc      L_A2
        lea     ecx, [esp + 0x14]
L_A2:
        mov     ecx, dword ptr [ecx]
        lea     eax, [ecx + eax + 0x1]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      L_C1
        push    eax
        call    FUN_004084d0
        mov     ecx, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x20], ecx
        jmp     L_CD
L_C1:
        mov     dword ptr [esp + 0x20], 0x0
        mov     ecx, dword ptr [esp + 0x20]
L_CD:
        sub     edi, ebp
        test    edi, edi
        mov     eax, ecx
        jle     L_E6
        mov     esi, ebp
        sub     esi, ecx
L_D9:
        mov     dl, byte ptr [esi + eax]
        mov     byte ptr [eax], dl
        inc     eax
        dec     edi
        jnz     L_D9
        mov     esi, dword ptr [esp + 0x10]
L_E6:
        test    esi, esi
        mov     edi, eax
        jle     L_0B
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [esp + 0x10]
        lea     edi, [ecx + eax]
        mov     ecx, dword ptr [esp + 0x20]
L_0B:
        test    ebp, ebp
        mov     byte ptr [edi], 0x0
        jz      L_1F
        push    ebp
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x4
L_1F:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x4], edi
        pop     edi
        mov     dword ptr [ebx], ecx
        pop     esi
        add     ecx, edx
        pop     ebp
        mov     dword ptr [ebx + 0x8], ecx
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     0xc
L_39:
        mov     edx, dword ptr [esp + 0x1c]
        inc     edx
        sub     ecx, edx
        test    ecx, ecx
        lea     eax, [edi + 0x1]
        jle     L_56
        mov     esi, edx
        sub     esi, eax
        mov     ebp, ecx
L_4D:
        mov     cl, byte ptr [esi + eax]
        mov     byte ptr [eax], cl
        inc     eax
        dec     ebp
        jnz     L_4D
L_56:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x1c]
        lea     eax, [edi + edx]
        mov     byte ptr [eax], 0x0
        mov     dl, byte ptr [ecx]
        mov     byte ptr [edi], dl
        mov     dword ptr [ebx + 0x4], eax
L_6B:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
