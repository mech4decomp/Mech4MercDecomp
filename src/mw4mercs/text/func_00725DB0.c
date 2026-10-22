/*
 * FUN_00725DB0 (498 B) — __thiscall (ecx = this), 5 params (ret 0x14).
 *
 * Object constructor: copies a name string into [this+4], initializes
 * many fields, computes a ratio (fild/fidiv) into [this+0x24], and
 * inserts the object into a linked list rooted at [g_00856a80].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aadc8;
extern char g_00858990;
extern int g_00856a80;
extern void *g_0076b294;

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_007265f0(void);
extern void __cdecl FUN_00727190(void);

__declspec(naked) int __cdecl FUN_00725DB0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        xor     ebx, ebx
        cmp     esi, ebx
        push    edi
        mov     ebp, ecx
        je      L_725e00
        mov     eax, dword ptr [g_008aadc8]
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     dword ptr [ebp + 4], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        jmp     L_725e03
L_725e00:
        mov     dword ptr [ebp + 4], ebx
L_725e03:
        mov     esi, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp + 0xac], ebx
        xor     eax, eax
        mov     ecx, 0x10
        lea     edi, [ebp + 0x5c]
        rep     stosd
        mov     al, byte ptr [esp + 0x2c]
        xor     ecx, ecx
        lea     edx, [ebp + 0x9c]
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + 4], ecx
        mov     dword ptr [edx + 8], ecx
        mov     dword ptr [edx + 0xc], ecx
        mov     edx, dword ptr [esp + 0x28]
        lea     ecx, [ebp + 0x14]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x20]
        cmp     edx, ebx
        mov     byte ptr [ebp + 0xb0], al
        lea     eax, [ebp + 0xc]
        mov     dword ptr [ebp + 0x58], ebx
        mov     dword ptr [eax], esi
        mov     dword ptr [ebp + 0xc4], ebx
        mov     dword ptr [ebp + 8], ebx
        mov     dword ptr [ebp + 0x10], ebx
        mov     dword ptr [ebp + 0x1c], ebx
        mov     dword ptr [ebp], 1
        jne     L_725e78
        push    ecx
        push    eax
        lea     eax, [esp + 0x28]
        push    eax
        push    esi
        mov     ecx, ebp
        call    FUN_007265f0
        mov     edx, dword ptr [esp + 0x20]
L_725e78:
        cmp     word ptr [edx], 1
        jne     L_725e82
        xor     eax, eax
        jmp     L_725e88
L_725e82:
        xor     eax, eax
        mov     ax, word ptr [edx + 0x10]
L_725e88:
        mov     ecx, dword ptr [g_008aadc8]
        push    ecx
        add     eax, 0x14
        push    eax
        call    FUN_006f3c80
        mov     esi, dword ptr [esp + 0x20]
        cmp     word ptr [esi], 1
        mov     dword ptr [ebp + 0x20], eax
        jne     L_725ea9
        xor     ecx, ecx
        jmp     L_725eaf
L_725ea9:
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x10]
L_725eaf:
        add     ecx, 0x14
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [ebp + 0x20]
        cmp     word ptr [eax], 1
        mov     ecx, dword ptr [ebp + 0x14]
        mov     dword ptr [ebp + 0x28], ebx
        mov     dword ptr [ebp + 0x2c], ebx
        mov     dword ptr [ebp + 0x30], ebx
        jne     L_725efb
        mov     edx, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        mov     byte ptr [ebp + 0x38], 1
        fidiv   dword ptr [esp + 0x10]
        fstp    dword ptr [ebp + 0x24]
        jmp     L_725f1c
L_725efb:
        mov     edx, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        mov     byte ptr [ebp + 0x38], bl
        fidiv   dword ptr [esp + 0x10]
        fstp    dword ptr [ebp + 0x24]
L_725f1c:
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp + 8], eax
        cmp     byte ptr [g_00858990], bl
        mov     dword ptr [ebp + 0x4c], ebx
        mov     dword ptr [ebp + 0x50], ebx
        mov     dword ptr [ebp + 0x54], ebx
        jne     L_725f3b
        mov     ecx, ebp
        call    FUN_00727190
L_725f3b:
        mov     esi, dword ptr [g_00856a80]
        push    0x10
        call    dword ptr [g_0076b294]
        mov     ecx, dword ptr [esi]
        add     esp, 4
        cmp     ecx, ebx
        mov     dword ptr [eax + 0xc], ebp
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax + 8], ebx
        jne     L_725f76
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax + 8], ebx
        mov     eax, dword ptr [esi + 4]
        inc     eax
        pop     edi
        mov     dword ptr [esi + 4], eax
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x14
L_725f76:
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, ebx
        je      L_725f86
L_725f7d:
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, ebx
        jne     L_725f7d
L_725f86:
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax + 8], ecx
        mov     eax, dword ptr [esi + 4]
        inc     eax
        pop     edi
        mov     dword ptr [esi + 4], eax
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x14
    }
}
