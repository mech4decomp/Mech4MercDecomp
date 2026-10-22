/*
 * FUN_005385D0 (234 B) — in-.text data block function (block 0x5385C7).
 * State-machine update using globals 0x7b71e4 / 0x7b6ecd and IAT
 * callback 0x76b638; calls FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

extern void (__cdecl *g_0076b638)(void);   /* IAT @ 0x76b638 */

extern char g_007b71e4;   /* byte @ 0x7b71e4 */
extern char g_007b6ecd;   /* byte @ 0x7b6ecd */

__declspec(naked) void FUN_005385D0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x16]
        xor     ebx, ebx
        cmp     al, bl
        mov     cl, 1
        mov     byte ptr [g_007b71e4], cl
        je      L85F1
        cmp     byte ptr [esi + 0x17], bl
        je      L85F1
        mov     byte ptr [g_007b6ecd], cl
L85F1:
        cmp     al, bl
        push    edi
        je      L8653
        mov     edi, dword ptr [esi + 0x3064]
        cmp     edi, dword ptr [esi + 0x3068]
        je      L8653
        push    ebp
        lea     ebp, [edi + 4]
L8608:
        mov     edx, dword ptr [esi + 0x3068]
        cmp     ebp, edx
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x10], eax
        je      L8632
        mov     eax, edx
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, ebx
        mov     ecx, edi
        jle     L8632
L8625:
        mov     ebx, dword ptr [ecx + 4]
        mov     dword ptr [ecx], ebx
        add     ecx, 4
        dec     eax
        jne     L8625
        xor     ebx, ebx
L8632:
        mov     ecx, dword ptr [esp + 0x10]
        add     edx, -4
        push    ecx
        mov     dword ptr [esi + 0x3068], edx
        call    FUN_004084e0
        mov     eax, dword ptr [esi + 0x3068]
        add     esp, 4
        cmp     edi, eax
        jne     L8608
        pop     ebp
L8653:
        cmp     byte ptr [esi + 0x16], bl
        pop     edi
        je      L866B
        cmp     byte ptr [esi + 0x17], bl
        je      L869C
        lea     edx, [esi + 0x239dcc]
        push    edx
        call    dword ptr [g_0076b638]
L866B:
        cmp     byte ptr [esi + 0x17], bl
        je      L869C
        mov     ecx, dword ptr [esi + 0x4c]
        cmp     dword ptr [ecx + 0x14], 2
        je      L869C
        cmp     byte ptr [esi + 0xce], bl
        jne     L869C
        mov     eax, dword ptr [ecx]
        push    ebx
        push    7
        call    dword ptr [eax + 4]
        mov     byte ptr [esi + 0x15], bl
        mov     dword ptr [esi + 0x302c], ebx
        mov     byte ptr [esi + 0xce], bl
        pop     esi
        pop     ebx
        pop     ecx
        ret
L869C:
        mov     ecx, dword ptr [esi + 0x4c]
        mov     edx, dword ptr [ecx]
        push    ebx
        push    6
        call    dword ptr [edx + 4]
        mov     byte ptr [esi + 0x15], bl
        mov     dword ptr [esi + 0x302c], ebx
        mov     byte ptr [esi + 0xce], bl
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
