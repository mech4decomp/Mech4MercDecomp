/*
 * FUN_004014d0 (135 B) — initializes a structure: zeroes a byte region,
 * copies the empty string into a name field, sets a count and flags.
 * __cdecl, 1 param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_empty[];   /* 0x76b768 "" */

__declspec(naked) void __cdecl FUN_004014d0(int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     ebx, ebx
        or      ecx, -1
        xor     eax, eax
        mov     edi, offset g_empty
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        lea     ebp, [edx + 0x21c]
        shr     ecx, 0x2
        mov     byte ptr [edx + 0x210], bl
        mov     byte ptr [edx + 0x211], bl
        mov     byte ptr [edx + 0x212], bl
        mov     byte ptr [edx + 0x213], bl
        mov     byte ptr [edx + 0x214], bl
        mov     byte ptr [edx + 0x215], bl
        mov     edi, ebp
        mov     dword ptr [edx + 0x218], 0x64
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [edx + 0x300], bl
        mov     byte ptr [edx + 0x301], bl
        mov     byte ptr [edx + 0x302], bl
        mov     dword ptr [edx + 0x308], ebx
        mov     dword ptr [edx + 0x304], 0x1
        pop     ebx
        ret
    }
}
