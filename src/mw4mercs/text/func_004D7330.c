/*
 * FUN_004D7330 (267 B @ 0x4d7330) - __stdcall, RET 4. Allocates a large object
 * (0x17f4 bytes), sets its vtable, copies a string, and initializes many
 * fields. (Block 0x4D7328 is 272 B; the last 5 bytes are 0x90 padding.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d7a00(void);
extern int g_7afaf0;
extern int g_7afaf4;
extern int g_7afaf8;
extern int g_7afafc;

__declspec(naked) void FUN_004D7330(void)
{
    __asm {
        push    ebx
        push    ebp
        push    0x17f4
        call    FUN_004084d0
        mov     ebp, eax
        xor     ebx, ebx
        add     esp, 4
        cmp     ebp, ebx
        je      L_4d735d
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, ebx
        mov     dword ptr [ebp], 0x772f1c
        je      L_4d7364
        lea     edx, [ebp + 4]
        jmp     L_4d736e
L_4d735d:
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     4
L_4d7364:
        call    FUN_004d7a00
        lea     edx, [ebp + 4]
        mov     edi, eax
L_4d736e:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     edx, dword ptr [g_7afaf0]
        mov     ecx, eax
        mov     eax, dword ptr [g_7afaf4]
        and     ecx, 3
        rep     movsb
        lea     ecx, [ebp + 0x17c8]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [g_7afaf8]
        mov     dword ptr [ecx + 4], eax
        mov     eax, dword ptr [g_7afafc]
        pop     edi
        mov     dword ptr [ecx + 8], edx
        pop     esi
        mov     dword ptr [ebp + 0x17e0], ebx
        mov     dword ptr [ebp + 0x17e8], ebx
        mov     dword ptr [ebp + 0x17ec], ebx
        mov     byte ptr [ebp + 0x15d8], bl
        mov     byte ptr [ebp + 0x1628], bl
        mov     byte ptr [ebp + 0x1678], bl
        mov     byte ptr [ebp + 0x16c8], bl
        mov     byte ptr [ebp + 0x1718], bl
        mov     byte ptr [ebp + 0x104], bl
        mov     dword ptr [ebp + 0x17bc], ebx
        mov     dword ptr [ecx + 0xc], eax
        mov     byte ptr [ebp + 0x17b8], bl
        mov     dword ptr [ebp + 0x17f0], ebx
        mov     dword ptr [ebp + 0x17c4], ebx
        mov     dword ptr [ebp + 0x154], 6
        mov     dword ptr [ebp + 0x17e4], 1
        mov     dword ptr [ebp + 0x17d8], 0xffffffff
        mov     dword ptr [ebp + 0x17dc], 0xffffffff
        mov     dword ptr [ebp + 0x17c0], 0x20
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
