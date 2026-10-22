/*
 * FUN_007258B0 (553 B) — __thiscall (this in ecx) / __stdcall (RET 0xc,
 * 3 stack params).
 *
 * In-.text data block at 0x7258B0. Constructor: zeroes most of the object,
 * stores a type tag (edx) and a byte flag, then depending on the tag
 * (0/4/5) copies a string from [esp+0x1c] via FUN_006F3C80 and calls
 * FUN_007494D0 / FUN_00726E70 / FUN_00726550. Finally allocates a 0x10-byte
 * node via IAT 0x76b294 and links it into the list at 0x856a80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aadc8;   /* DAT_008aadc8 */
extern int g_856a80;   /* DAT_00856a80 */

extern void *g_76b294;  /* IAT 0x76b294 */

extern void __cdecl FUN_006F3C80(void);
extern void __cdecl FUN_007494D0(void);
extern void __cdecl FUN_00726E70(void);
extern void __cdecl FUN_00726550(void);

__declspec(naked) void __cdecl FUN_007258B0(void)
{
    __asm {
        mov     al, byte ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        sub     esp, 8
        push    ebx
        mov     ebx, ecx
        mov     byte ptr [ebx + 0xb0], al
        push    ebp
        xor     ebp, ebp
        xor     eax, eax
        push    esi
        mov     dword ptr [ebx + 0x58], ebp
        mov     dword ptr [ebx + 4], ebp
        mov     dword ptr [ebx + 0xc4], ebp
        mov     dword ptr [ebx + 0xc], ebp
        mov     dword ptr [ebx + 8], ebp
        mov     dword ptr [ebx + 0x10], ebp
        mov     dword ptr [ebx + 0x14], ebp
        mov     dword ptr [ebx + 0x1c], ebp
        mov     dword ptr [ebx], edx
        mov     dword ptr [ebx + 0x20], ebp
        mov     dword ptr [ebx + 0x28], ebp
        mov     dword ptr [ebx + 0x2c], ebp
        mov     dword ptr [ebx + 0x30], ebp
        mov     dword ptr [ebx + 0x24], ebp
        mov     byte ptr [ebx + 0x38], 1
        mov     dword ptr [ebx + 0x4c], ebp
        mov     dword ptr [ebx + 0x50], ebp
        mov     dword ptr [ebx + 0x54], ebp
        mov     dword ptr [ebx + 0xac], ebp
        push    edi
        mov     ecx, 0x10
        lea     edi, [ebx + 0x5c]
        rep     stosd
        xor     ecx, ecx
        lea     eax, [ebx + 0x9c]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     eax, edx
        sub     eax, ebp
        je      L725a07
        sub     eax, 4
        je      L7259bf
        dec     eax
        jne     L725a72
        mov     ecx, dword ptr [g_8aadc8]
        mov     esi, dword ptr [esp + 0x1c]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx + 4], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 4]
        push    ecx
        lea     esi, [ebx + 0xec]
        push    esi
        call    FUN_007494D0
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [g_8aadc8]
        fild    qword ptr [edx + 0x28]
        push    eax
        push    0x14
        fstp    dword ptr [ebx + 0x24]
        call    FUN_006F3C80
        mov     dword ptr [ebx + 0x20], eax
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     word ptr [eax + 0x10], cx
        jmp     L725a72
L7259bf:
        mov     esi, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [g_8aadc8]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        push    edx
        not     ecx
        push    ecx
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx + 4], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        push    ebx
        rep     movsb
        call    FUN_00726E70
        jmp     L725a72
L725a07:
        mov     ecx, dword ptr [g_8aadc8]
        mov     esi, dword ptr [esp + 0x1c]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx + 4], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, ebx
        call    FUN_00726550
        mov     ecx, dword ptr [ebx + 0x14]
        mov     edx, dword ptr [ebx + 0x20]
        mov     eax, dword ptr [edx + 8]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebp
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ebp
        fidiv   dword ptr [esp + 0x10]
        fstp    dword ptr [ebx + 0x24]
L725a72:
        mov     esi, dword ptr [g_856a80]
        push    0x10
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [esi]
        add     esp, 4
        cmp     ecx, ebp
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 4], ebp
        mov     dword ptr [eax + 8], ebp
        jne     L725aad
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + 4], ebp
        mov     dword ptr [eax + 8], ebp
        mov     eax, dword ptr [esi + 4]
        inc     eax
        pop     edi
        mov     dword ptr [esi + 4], eax
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 8
        ret     0xc
L725aad:
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, ebp
        je      L725abd
L725ab4:
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, ebp
        jne     L725ab4
L725abd:
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [eax + 4], ebp
        mov     dword ptr [eax + 8], ecx
        mov     eax, dword ptr [esi + 4]
        inc     eax
        pop     edi
        mov     dword ptr [esi + 4], eax
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 8
        ret     0xc
    }
}
