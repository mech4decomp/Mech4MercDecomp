/*
 * FUN_0041e790 (184 B) — __thiscall stream "read line" helper. Reads
 * characters one at a time via the object's vtable method at offset 0x28,
 * copying them into the caller's buffer while normalizing CR/LF line
 * endings (the "\r\n" table at 0x76d1b8). Returns 1 on success, 0 on EOF.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0076d1b8;
extern char g_0076d1b9;

extern int __cdecl FUN_006fab90(char *);

__declspec(naked) void FUN_0041e790(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        mov     eax, dword ptr [ecx]
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp-0x4], ecx
        call    dword ptr [eax+0x28]
        mov     ebx, eax
        cmp     ebx, -0x1
        jz      L83F
        or      ecx, 0xffffffff
        xor     eax, eax
        xor     esi, esi
        mov     edi, 0x76d1b8
        repne   scasb
        mov     edi, dword ptr [ebp+0x8]
        not     ecx
        dec     ecx
        mov     dword ptr [ebp-0x8], ecx
L7C3:
        cmp     esi, dword ptr [ebp+0xc]
        jge     L83A
        mov     eax, dword ptr [ebp-0x8]
        dec     eax
        mov     byte ptr [esi+edi], bl
        jz      L80B
        dec     eax
        jz      L7E8
        push    0x76d7e0
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L81E
        int     3
        jmp     L81E
L7E8:
        cmp     bl, byte ptr [g_0076d1b9]
        jnz     L800
        test    esi, esi
        jle     L800
        mov     cl, byte ptr [esi+edi-1]
        cmp     cl, byte ptr [g_0076d1b8]
        jz      L825
L800:
        mov     ecx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ecx]
        inc     esi
        call    dword ptr [edx+0x28]
        jmp     L81C
L80B:
        cmp     bl, byte ptr [g_0076d1b8]
        jz      L826
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ecx]
        inc     esi
        call    dword ptr [eax+0x28]
L81C:
        mov     ebx, eax
L81E:
        cmp     ebx, -0x1
        jz      L826
        jmp     L7C3
L825:
        dec     esi
L826:
        cmp     esi, dword ptr [ebp+0xc]
        jge     L83A
        mov     byte ptr [esi+edi], 0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L83A:
        mov     byte ptr [esi+edi-1], 0
L83F:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
