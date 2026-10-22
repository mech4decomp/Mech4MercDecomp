/*
 * FUN_1001da90 (905 B) - __stdcall (RET 0x8). SEH-guarded stats
 * record-commit routine. Builds a growing buffer (malloc/realloc via
 * IAT) from a record stream, then commits it and updates counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10012080(void);
extern void __cdecl FUN_1001d9e0(void);
extern void __cdecl FUN_1001e490(void);
extern void __cdecl FUN_1001c2f0(void);
extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_1001c420(void);
extern void __cdecl FUN_1001de40(void);

extern void *g_100210ec;   /* IAT: free */
extern void *g_100210f8;   /* IAT: malloc */

__declspec(naked) void __cdecl FUN_1001da90(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x100201eb
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x4c4
        push    ebx
        mov     ebx, dword ptr [esp + 0x4d8]
        push    ebp
        push    esi
        push    edi
        lea     ecx, [ebx + 0x6c]
        call    FUN_10012080
        test    al, al
        jz      L1dacc
        mov     eax, 0x1
        jmp     L1ddfe
L1dacc:
        xor     ebp, ebp
        mov     dword ptr [esp + 0x28], 0x400
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x24], ebp
        push    ebx
        mov     dword ptr [esp + 0x4e0], ebp
        mov     dword ptr [ebx + 0x1c], 0x7
        call    FUN_1001d9e0
        mov     esi, eax
        cmp     esi, ebp
        jz      L1db1f
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x4dc], 0xffffffff
        call    FUN_100011a0
        mov     eax, esi
        jmp     L1ddfe
L1db1f:
        mov     eax, dword ptr [esp + 0x4e8]
        push    eax
        push    ebx
        call    FUN_1001e490
        test    eax, eax
        jnz     L1db5f
        mov     eax, dword ptr [ebx + 0x58]
        cmp     eax, ebp
        jz      L1db41
        push    eax
        lea     ecx, [ebx + 0x18]
        call    FUN_1001c2f0
L1db41:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x4dc], 0xffffffff
        call    FUN_100011a0
        mov     eax, 0x4
        jmp     L1ddfe
L1db5f:
        mov     eax, dword ptr [esp + 0x20]
        lea     ecx, [esp + 0xd4]
        cmp     eax, ebp
        mov     dword ptr [esp + 0xc4], 0x3fe
        mov     dword ptr [esp + 0xac], 0x28
        mov     dword ptr [esp + 0xc0], ecx
        jbe     L1db9d
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      L1db9d
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L1db9d:
        lea     edi, [ebx + 0x18]
        lea     edx, [esp + 0xac]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x24], ebp
        call    FUN_1001c420
        cmp     eax, ebp
        jz      L1ddcd
L1dbc3:
        mov     ecx, dword ptr [esp + 0xc4]
        mov     esi, ecx
        cmp     ecx, ebp
        mov     dword ptr [esp + 0x10], esi
        jz      L1dca2
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        lea     ecx, [eax + ecx*1 + 0x2]
        cmp     ecx, edx
        jbe     L1dc5b
        mov     eax, dword ptr [esp + 0x28]
        add     eax, ecx
        push    eax
        mov     dword ptr [esp + 0x28], eax
        call    dword ptr [g_100210f8]
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jz      L1dcda
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jbe     L1dc57
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, eax
        mov     edx, ecx
        mov     edi, ebp
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        xor     eax, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        sub     ecx, edx
        lea     edi, [edx + ebp*1]
        mov     edx, ecx
        shr     ecx, 0x2
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        call    dword ptr [g_100210ec]
        mov     eax, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x14]
        add     esp, 0x4
L1dc57:
        mov     dword ptr [esp + 0x14], ebp
L1dc5b:
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, esi
        lea     esi, [esp + 0xd4]
        lea     edi, [eax + edx*1]
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x20], eax
        mov     byte ptr [eax + ecx*1], 0x0
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        xor     ebp, ebp
        mov     byte ptr [edx + eax*1 + 0x1], 0x0
L1dca2:
        cmp     esi, 0x3fe
        jz      L1dcbb
        cmp     esi, ebp
        jbe     L1dd17
        mov     eax, dword ptr [ebx + 0x50]
        cmp     eax, 0x64
        jz      L1dd17
        cmp     eax, 0x33
        jz      L1dd17
L1dcbb:
        lea     ecx, [esp + 0xac]
        lea     edi, [ebx + 0x18]
        push    ecx
        mov     ecx, edi
        call    FUN_1001c420
        test    eax, eax
        jz      L1ddcd
        jmp     L1dbc3
L1dcda:
        lea     ecx, [esp + 0x14]
        call    FUN_100011a0
        mov     eax, dword ptr [ebx + 0x58]
        test    eax, eax
        jz      L1dcf2
        push    eax
        mov     ecx, edi
        call    FUN_1001c2f0
L1dcf2:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [ebx + 0x58], 0x0
        mov     dword ptr [esp + 0x4dc], 0xffffffff
        call    FUN_100011a0
        mov     eax, 0x6
        jmp     L1ddfe
L1dd17:
        mov     eax, dword ptr [esp + 0x14]
        cmp     byte ptr [eax], 0x0
        jnz     L1dd45
        mov     cl, byte ptr [eax + 0x1]
        test    cl, cl
        jnz     L1dd45
        cmp     dword ptr [esp + 0x20], ebp
        jbe     L1dd3b
        cmp     eax, ebp
        jz      L1dd3b
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L1dd3b:
        mov     eax, 0x80040286
        jmp     L1ddfe
L1dd45:
        mov     eax, dword ptr [esp + 0x4e8]
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        push    ebx
        call    FUN_1001de40
        mov     eax, dword ptr [ebx + 0x58]
        cmp     eax, ebp
        jz      L1dd68
        push    eax
        lea     ecx, [ebx + 0x18]
        call    FUN_1001c2f0
L1dd68:
        mov     ecx, dword ptr [ebx + 0xc8]
        mov     eax, dword ptr [ebx + 0xb8]
        mov     esi, dword ptr [ebx + 0xc0]
        add     eax, ecx
        mov     dword ptr [ebx + 0xb8], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     edi, dword ptr [ebx + 0xbc]
        mov     dword ptr [ebx + 0x58], ebp
        lea     edx, [eax + eax*1]
        adc     edi, ebp
        add     esi, edx
        mov     dword ptr [ebx + 0xc0], esi
        mov     edx, dword ptr [ebx + 0xc4]
        adc     edx, ebp
        cmp     eax, ebp
        mov     dword ptr [ebx + 0xbc], edi
        mov     dword ptr [ebx + 0xc4], edx
        jbe     L1ddc6
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      L1ddc6
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L1ddc6:
        mov     eax, 0x1
        jmp     L1ddfe
L1ddcd:
        mov     eax, dword ptr [ebx + 0x58]
        cmp     eax, ebp
        jz      L1dddc
        push    eax
        mov     ecx, edi
        call    FUN_1001c2f0
L1dddc:
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [ebx + 0x58], ebp
        cmp     eax, ebp
        jbe     L1ddf9
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      L1ddf9
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L1ddf9:
        mov     eax, 0x5
L1ddfe:
        mov     ecx, dword ptr [esp + 0x4d4]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x4d0
        ret     0x8
    }
}
