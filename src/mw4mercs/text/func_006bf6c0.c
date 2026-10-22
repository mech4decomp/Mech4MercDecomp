/*
 * FUN_006BF6C0 (903 B) — __stdcall RET 0x8 (2 params).
 * Builds a set of named objects ("location", "framerate", "priority",
 * "region", "always_in_region", "relative", "catchup") by allocating
 * string buffers via FUN_006F3C80, copying the literal names, and
 * registering each via FUN_006B4A90.
 *
 * Calls: FUN_006F3C80, FUN_006B4A90.
 * Data: 0x0082E228 (allocator), 0x007B60A0, string literals at 0x79BD8C+.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0082e228;
extern int g_007b60a0;
extern void __stdcall FUN_006F3C80(void);
extern void __stdcall FUN_006B4A90(void);

__declspec(naked) void FUN_006BF6C0(void)
{
    __asm {
        mov     eax, dword ptr [g_0082e228]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79bdd4
        repne   scasb
        not     ecx
        add     ecx, 0x10
        push    ecx
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     ebp, eax
        xor     eax, eax
        xor     ebx, ebx
        mov     edi, 0x79bdd4
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [ebp + 0xe], cl
        or      ecx, 0xffffffff
        mov     edi, 0x79bdd4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [ebp + 0xf]
        mov     esi, edi
        mov     edi, edx
        mov     byte ptr [ebp + 0xa], 0x66
        mov     word ptr [ebp + 0x8], bx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [g_0082e228]
        push    ecx
        push    0xc
        call    FUN_006F3C80
        mov     esi, eax
        push    ebp
        mov     dword ptr [ebp + 0x4], esi
        mov     ebp, dword ptr [esp + 0x18]
        push    0x1
        push    ebp
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi], ebx
        call    FUN_006B4A90
        mov     edx, dword ptr [g_0082e228]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79bdc8
        repne   scasb
        not     ecx
        push    edx
        add     ecx, 0x10
        push    ecx
        mov     dword ptr [ebp + 0x20], esi
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x79bdc8
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [edx + 0xe], cl
        or      ecx, 0xffffffff
        mov     edi, 0x79bdc8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     byte ptr [edx + 0xa], 0x64
        mov     word ptr [edx + 0x8], bx
        lea     esi, [edx + 0xf]
        mov     eax, ecx
        mov     dword ptr [esp + 0x14], esi
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        push    edx
        rep     movsb
        mov     ecx, dword ptr [g_007b60a0]
        push    0x1
        lea     esi, [edx + 0x4]
        push    ebp
        mov     dword ptr [esi], ecx
        call    FUN_006B4A90
        mov     edx, dword ptr [g_0082e228]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79bdbc
        repne   scasb
        not     ecx
        push    edx
        add     ecx, 0x10
        push    ecx
        mov     dword ptr [ebp + 0x14], esi
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x79bdbc
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [edx + 0xe], cl
        or      ecx, 0xffffffff
        mov     edi, 0x79bdbc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [edx + 0xf]
        mov     dword ptr [esp + 0x14], esi
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        mov     byte ptr [edx + 0xa], 0x64
        mov     word ptr [edx + 0x8], bx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        push    edx
        rep     movsb
        mov     ecx, dword ptr [esp + 0x1c]
        push    0x1
        lea     esi, [edx + 0x4]
        push    ebp
        mov     dword ptr [esi], ecx
        call    FUN_006B4A90
        mov     edx, dword ptr [g_0082e228]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79bdb4
        repne   scasb
        not     ecx
        push    edx
        add     ecx, 0x10
        push    ecx
        mov     dword ptr [ebp + 0x10], esi
        call    FUN_006F3C80
        mov     edx, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79bdb4
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x14], edx
        mov     byte ptr [edx + 0xa], 0x6b
        mov     word ptr [edx + 0x8], bx
        mov     byte ptr [edx + 0xe], cl
        add     edx, 0xf
        or      ecx, 0xffffffff
        mov     edi, 0x79bdb4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [g_0082e228]
        push    ecx
        push    0x18
        call    FUN_006F3C80
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    0x1
        push    ebp
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [eax + 0x4], esi
        call    FUN_006B4A90
        mov     edx, dword ptr [g_0082e228]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79bda0
        repne   scasb
        not     ecx
        push    edx
        add     ecx, 0x10
        push    ecx
        mov     dword ptr [ebp + 0x24], esi
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x79bda0
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [edx + 0xe], cl
        or      ecx, 0xffffffff
        mov     edi, 0x79bda0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [edx + 0xf]
        mov     dword ptr [esp + 0x14], esi
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        mov     byte ptr [edx + 0xa], 0x64
        mov     word ptr [edx + 0x8], bx
        rep     movsd
        mov     ecx, eax
        push    edx
        and     ecx, 0x3
        rep     movsb
        push    0x1
        lea     esi, [edx + 0x4]
        push    ebp
        mov     dword ptr [esi], ebx
        call    FUN_006B4A90
        mov     ecx, dword ptr [g_0082e228]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79bd94
        repne   scasb
        not     ecx
        mov     dword ptr [ebp + 0xc], esi
        add     ecx, 0x10
        push    ecx
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x79bd94
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [edx + 0xe], cl
        or      ecx, 0xffffffff
        mov     edi, 0x79bd94
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [edx + 0xf]
        mov     dword ptr [esp + 0x14], esi
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        mov     byte ptr [edx + 0xa], 0x64
        mov     word ptr [edx + 0x8], bx
        rep     movsd
        mov     ecx, eax
        push    edx
        and     ecx, 0x3
        rep     movsb
        push    0x1
        lea     esi, [edx + 0x4]
        push    ebp
        mov     dword ptr [esi], ebx
        call    FUN_006B4A90
        mov     ecx, dword ptr [g_0082e228]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79bd8c
        repne   scasb
        not     ecx
        add     ecx, 0x10
        push    ecx
        mov     dword ptr [ebp + 0x3c], esi
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x79bd8c
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [edx + 0xe], cl
        or      ecx, 0xffffffff
        mov     edi, 0x79bd8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [edx + 0xf]
        mov     dword ptr [esp + 0x14], esi
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        mov     byte ptr [edx + 0xa], 0x64
        mov     word ptr [edx + 0x8], bx
        rep     movsd
        mov     ecx, eax
        push    edx
        and     ecx, 0x3
        rep     movsb
        push    0x1
        lea     esi, [edx + 0x4]
        push    ebp
        mov     dword ptr [esi], 0x1
        call    FUN_006B4A90
        mov     eax, dword ptr [ebp + 0x34]
        and     eax, 0xffffff8f
        mov     dword ptr [ebp + 0x18], esi
        mov     dword ptr [ebp + 0x38], ebx
        mov     dword ptr [ebp + 0x34], eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
