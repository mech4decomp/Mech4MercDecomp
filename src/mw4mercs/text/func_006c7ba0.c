/*
 * FUN_006C7BA0 (901 B) — __thiscall (ECX=this), RET 0x10.
 * Texture/block allocator: searches a hash-list of blocks, allocates new
 * blocks via FUN_006F3C80, splits/merges ranges, then calls FUN_006C7970.
 *
 * Calls: FUN_006C7B00, FUN_006F3C80, FUN_00717A10, FUN_006C7970.
 * Data: 0x0082E220 (allocator), 0x0083A20C (hash table), 0x007B67F8 (strings).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0082e220;
extern void __cdecl FUN_006C7B00(void);
extern void __cdecl FUN_006F3C80(void);
extern void __cdecl FUN_00717A10(void);
extern void __cdecl FUN_006C7970(void);

__declspec(naked) void FUN_006C7BA0(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        mov     ebx, dword ptr [esp + 0x24]
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    edi
        mov     edi, ebx
        mov     dword ptr [esp + 0x1c], ebx
        imul    edi, ecx
        add     ebx, 0x3
        and     ebx, 0xfffffffc
        mov     esi, ecx
        shr     esi, 0x1
        and     esi, 0x80
        mov     edx, ebx
        and     edx, 0x100
        or      esi, edx
        xor     eax, eax
        xor     edx, edx
        mov     dl, byte ptr [ebp + 0x48]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [ebp + 0x44]
        mov     dword ptr [esp + 0x18], 0x10001
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x30], eax
        shr     esi, 0x7
        lea     eax, [edx + eax*2]
        lea     eax, [eax + eax*2]
        add     esi, eax
        shl     esi, 0x2
        mov     dword ptr [esp + 0x20], ebp
        mov     ebp, dword ptr [esi + 0x83a20c]
        test    ebp, ebp
        jz      L_c7c40
        jmp     L_c7c17
L_c7c13:
        mov     ecx, dword ptr [esp + 0x34]
L_c7c17:
        cmp     edi, dword ptr [ebp + 0x4]
        ja      L_c7c39
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        push    ecx
        mov     ecx, dword ptr [ebp]
        push    ebx
        push    ecx
        call    FUN_006C7B00
        test    al, al
        jz      L_c7c39
        mov     dword ptr [esp + 0x14], ebp
L_c7c39:
        mov     ebp, dword ptr [ebp + 0x8]
        test    ebp, ebp
        jnz     L_c7c13
L_c7c40:
        mov     ebp, dword ptr [esp + 0x14]
        test    ebp, ebp
        jnz     L_c7d23
        mov     edx, dword ptr [g_0082e220]
        push    edx
        push    0x14
        call    FUN_006F3C80
        mov     ecx, dword ptr [esi + 0x83a20c]
        mov     ebp, eax
        lea     eax, [esi + 0x83a20c]
        xor     edi, edi
        cmp     ecx, edi
        lea     edx, [ebp + 0x8]
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [edx], ecx
        jz      L_c7c79
        mov     dword ptr [ecx + 0xc], edx
L_c7c79:
        mov     dword ptr [eax], ebp
        mov     eax, dword ptr [g_0082e220]
        push    eax
        push    0x24
        mov     dword ptr [ebp + 0x4], 0x10000
        call    FUN_006F3C80
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [ebp], eax
        mov     eax, dword ptr [esp + 0x30]
        cmp     eax, 0x2
        jnz     L_c7cb3
        mov     ecx, dword ptr [esi + 0x7b67f8]
        push    edi
        push    edi
        push    0x41
        push    0x100
        push    ecx
        push    0x1
        jmp     L_c7cd4
L_c7cb3:
        cmp     eax, 0x1
        push    edi
        push    edi
        push    0x41
        push    0x100
        jnz     L_c7ccc
        mov     edx, dword ptr [esi + 0x7b67f8]
        push    edx
        push    0x2
        jmp     L_c7cd4
L_c7ccc:
        mov     eax, dword ptr [esi + 0x7b67f8]
        push    eax
        push    edi
L_c7cd4:
        call    FUN_00717A10
        mov     dword ptr [ebp + 0x10], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x10], eax
        mov     ecx, 0x100
        mov     dword ptr [eax + 0xc], ecx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x8], ecx
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x18], edi
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x1c], edi
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x14], edi
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x10], edi
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], edi
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x4], edi
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x20], ebp
L_c7d23:
        mov     eax, dword ptr [esp + 0x10]
        cmp     ebx, dword ptr [eax + 0x8]
        jnc     L_c7dbc
        cmp     dword ptr [esp + 0x34], ebx
        jbe     L_c7dbc
        mov     ecx, dword ptr [g_0082e220]
        push    ecx
        push    0x24
        call    FUN_006F3C80
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, eax
        mov     ecx, 0x9
        rep     movsd
        mov     dword ptr [eax + 0x8], ebx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [eax + 0x14], edx
        mov     eax, dword ptr [g_0082e220]
        push    eax
        push    0x24
        call    FUN_006F3C80
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, eax
        mov     ecx, 0x9
        rep     movsd
        mov     edx, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax + 0x4]
        sub     edx, ebx
        mov     dword ptr [eax + 0x8], edx
        add     ecx, ebx
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x14], ecx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x10], 0x1
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [ecx + 0x18], edx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x1c], eax
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x18]
        mov     dword ptr [esp + 0x10], eax
L_c7dbc:
        mov     ecx, dword ptr [esp + 0x34]
        cmp     ecx, dword ptr [eax + 0xc]
        jnc     L_c7e51
        mov     edx, dword ptr [g_0082e220]
        push    edx
        push    0x24
        call    FUN_006F3C80
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, eax
        mov     ecx, 0x9
        rep     movsd
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 0xc], ecx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [eax + 0x14], edx
        mov     eax, dword ptr [g_0082e220]
        push    eax
        push    0x24
        call    FUN_006F3C80
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, eax
        mov     ecx, 0x9
        rep     movsd
        mov     esi, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [eax]
        sub     esi, ecx
        add     edx, ecx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0xc], esi
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x14], ecx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x10], 0x2
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [ecx + 0x18], edx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x1c], eax
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x18]
        mov     dword ptr [esp + 0x10], eax
L_c7e51:
        cmp     ebx, dword ptr [eax + 0x8]
        jnc     L_c7edc
        mov     eax, dword ptr [g_0082e220]
        push    eax
        push    0x24
        call    FUN_006F3C80
        mov     esi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_0082e220]
        mov     edi, eax
        mov     ecx, 0x9
        rep     movsd
        mov     dword ptr [eax + 0x8], ebx
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        push    0x24
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [eax + 0x14], ecx
        call    FUN_006F3C80
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, eax
        mov     ecx, 0x9
        rep     movsd
        mov     edx, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax + 0x4]
        sub     edx, ebx
        mov     dword ptr [eax + 0x8], edx
        add     ecx, ebx
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x14], ecx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x10], 0x1
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [ecx + 0x18], edx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x1c], eax
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x18]
        mov     dword ptr [esp + 0x10], eax
L_c7edc:
        mov     ecx, dword ptr [esp + 0x34]
        imul    ebx, ecx
        mov     dword ptr [eax + 0x10], 0x3
        sub     dword ptr [ebp + 0x4], ebx
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        push    eax
        mov     eax, dword ptr [eax + 0x4]
        push    0x100
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        push    edx
        mov     edx, dword ptr [esp + 0x3c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x40]
        push    edx
        call    FUN_006C7970
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x10
    }
}
