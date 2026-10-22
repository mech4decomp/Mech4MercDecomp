/*
 * FUN_10031680 (400 B) - __stdcall, RET 0x10.  Large dispatcher: handles
 * opcode 0xc350 (stream read loop with virtual calls) and 0xc351 (jump-table
 * dispatch over 5 cases via byte table @0x100318f4 -> jump table @0x100318e0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern unsigned char g_100318f4[];   /* jump-table index byte table (.text data) */
extern void *g_100318e0[];           /* jump table (.text data) */
extern void FUN_100318C8(void);      /* jne target (label in FUN_100318A7) */
extern void FUN_100318D0(void);      /* ja target (label in FUN_100318A7) */

__declspec(naked) void __stdcall FUN_10031680(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 4]
        cmp     ecx, 0xc350
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], 0
        jne     L_177c
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        mov     ebx, dword ptr [edi + 8]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x24]
        xor     ecx, ecx
        mov     cx, word ptr [edi + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ebp]
        push    eax
        lea     eax, [esp + 0x24]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    eax
        push    ebx
        push    ebp
        call    dword ptr [edx + 8]
        mov     ecx, dword ptr [esp + 0x20]
        mov     byte ptr [esp + 0x24], al
        cmp     ecx, dword ptr [edi + 0xc]
        je      L_16f4
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [edx + 0xc]
        mov     edx, dword ptr [edi + 0x14]
        mov     ecx, dword ptr [eax]
        push    0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x64]
L_16f4:
        mov     al, byte ptr [esp + 0x24]
        test    al, al
        je      L_1739
        mov     eax, dword ptr [esp + 0x10]
        xor     esi, esi
        test    ax, ax
        jbe     L_1739
L_1707:
        mov     edx, dword ptr [edi + 4]
        mov     ecx, dword ptr [ebp]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    edx
        sub     eax, esi
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        xor     edx, edx
        mov     dx, si
        add     eax, 0x34
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    ebx
        add     edx, eax
        push    edx
        push    ebp
        call    dword ptr [ecx]
        add     esi, eax
        mov     eax, dword ptr [esp + 0x10]
        cmp     si, ax
        jb      L_1707
L_1739:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [esp + 0x20]
        cmp     ecx, eax
        mov     eax, dword ptr [esp + 0x1c]
        pop     ebp
        je      L_1760
        mov     eax, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0x10
L_1760:
        mov     edx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [eax]
        push    0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x64]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0x10
L_177c:
        cmp     ecx, 0xc351
        jne     FUN_100318C8
        mov     ecx, dword ptr [eax + 8]
        add     ecx, 0xfff9
        cmp     ecx, 0xd
        ja      FUN_100318D0
        movzx   ecx, byte ptr [ecx + g_100318f4]
        jmp     dword ptr [ecx*4 + g_100318e0]
L_17a8:
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L_17b6
        xor     edx, edx
        jmp     L_17d3
L_17b6:
        cmp     ecx, 0x80158630
        jne     L_17c5
        mov     edx, 1
        jmp     L_17d3
L_17c5:
        xor     edx, edx
        cmp     ecx, 0x80158650
        sete    dl
        add     edx, 2
L_17d3:
        mov     esi, dword ptr [eax + 8]
        mov     ebx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [ecx]
        push    ebx
        mov     ebx, dword ptr [esi + 4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 4]
        push    ebx
        push    eax
        push    edx
        mov     edx, dword ptr [esi]
        push    edx
        push    ecx
        call    dword ptr [edi + 4]
        mov     eax, dword ptr [esp + 0x18]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
