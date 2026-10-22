/*
 * FUN_0075A140 (263 B @ 0x75a140) - __thiscall, RET 4. Inserts a node into a
 * linked list keyed by a string comparison; on a type-1 match it copies the
 * string via FUN_004084c0/004084e0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084c0(void);
extern int g_849308;

__declspec(naked) void FUN_0075A140(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [ecx + 0x814]
        test    ebp, ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], ecx
        jne     L_75a16e
        mov     eax, dword ptr [esp + 0x18]
        inc     word ptr [ecx + 0x818]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx + 0x814], eax
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     4
L_75a16e:
        mov     edi, dword ptr [ebp + 0x10]
        test    edi, edi
        mov     ebx, dword ptr [esp + 0x18]
        je      L_75a1b9
L_75a179:
        mov     esi, dword ptr [ebp + 4]
        mov     eax, dword ptr [ebx + 4]
L_75a17f:
        mov     cl, byte ptr [eax]
        mov     dl, cl
        cmp     cl, byte ptr [esi]
        jne     L_75a1a3
        test    dl, dl
        je      L_75a19f
        mov     cl, byte ptr [eax + 1]
        mov     dl, cl
        cmp     cl, byte ptr [esi + 1]
        jne     L_75a1a3
        add     eax, 2
        add     esi, 2
        test    dl, dl
        jne     L_75a17f
L_75a19f:
        xor     eax, eax
        jmp     L_75a1a8
L_75a1a3:
        sbb     eax, eax
        sbb     eax, -1
L_75a1a8:
        test    eax, eax
        je      L_75a1cd
        mov     ebp, edi
        mov     edi, dword ptr [ebp + 0x10]
        test    edi, edi
        jne     L_75a179
        mov     ecx, dword ptr [esp + 0x10]
L_75a1b9:
        inc     word ptr [ecx + 0x818]
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x10], ebx
        pop     ebp
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     4
L_75a1cd:
        mov     eax, dword ptr [ebp + 8]
        cmp     eax, dword ptr [ebx + 8]
        je      L_75a1df
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     4
L_75a1df:
        cmp     eax, 1
        jne     L_75a237
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [g_849308]
        mov     edi, dword ptr [ebx + 0xc]
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084c0
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     dword ptr [ebp + 0xc], edx
        mov     edi, dword ptr [ebx + 0xc]
        add     esp, 0xc
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     4
L_75a237:
        mov     ecx, dword ptr [ebx + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0xc], ecx
        pop     ebp
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     4
    }
}
