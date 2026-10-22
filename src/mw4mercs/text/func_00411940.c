/*
 * FUN_00411940 (205 B) — __thiscall, RET 0x4: writes a bracketed string
 * header ("[...") via a virtual call, iterates a linked list at +0x18
 * calling FUN_0041f160 on each node, and appends "]\r\n" / "\r\n" via
 * virtual calls. Uses repne scasb to compute string lengths.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041f160(void);

__declspec(naked) void FUN_00411940(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, ecx
        push    esi
        mov     esi, dword ptr [ebp + 0x14]
        test    esi, esi
        push    edi
        mov     dword ptr [esp + 0x10], ebp
        jz      L1
        cmp     byte ptr [esi], 0
        jz      L1
        mov     eax, dword ptr [ebx]
        push    0x1
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, ebx
        mov     byte ptr [esp + 0x20], 0x5b
        call    dword ptr [eax + 0x24]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        jz      L2
        mov     ebp, dword ptr [edx]
        or      ecx, 0xffffffff
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    esi
        mov     ecx, edx
        call    dword ptr [ebp + 0x24]
        mov     ebp, dword ptr [esp + 0x10]
        mov     edx, eax
L2:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76d1bc
        repne   scasb
        not     ecx
        dec     ecx
        jz      L1
        mov     esi, dword ptr [edx]
        or      ecx, 0xffffffff
        mov     edi, 0x76d1bc
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    0x76d1bc
        mov     ecx, edx
        call    dword ptr [esi + 0x24]
L1:
        mov     esi, dword ptr [ebp + 0x18]
L4:
        test    esi, esi
        jz      L3
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L3
        push    ebx
        call    FUN_0041f160
        jmp     L4
L3:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76d1b8
        repne   scasb
        not     ecx
        dec     ecx
        jz      L5
        mov     edx, dword ptr [ebx]
        or      ecx, 0xffffffff
        mov     edi, 0x76d1b8
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    0x76d1b8
        mov     ecx, ebx
        call    dword ptr [edx + 0x24]
L5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
