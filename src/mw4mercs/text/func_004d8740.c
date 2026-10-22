/*
 * FUN_004d8740 (538 B) — __thiscall (RET 0x8). Network message dispatcher:
 * iterates a table of message handlers (jump table at 0x4d895c, outside the
 * function slice), dispatching on a message type index (ESI 0..7) to the
 * FUN_004d81d0/8230/8290/82f0/7ff0/8350/83b0 family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d7ef0(void);
extern void FUN_004d81d0(void);
extern void FUN_004d8230(void);
extern void FUN_004d8290(void);
extern void FUN_004d82f0(void);
extern void FUN_004d7ff0(void);
extern void FUN_004d8350(void);
extern void FUN_004d83b0(void);
extern unsigned char g_0076b768;

__declspec(naked) void FUN_004d8740(void)
{
    __asm {
        sub     esp, 0x680
        mov     dl, byte ptr [g_0076b768]
        push    ebx
        push    ebp
        mov     ebx, ecx
        xor     eax, eax
        push    esi
        push    edi
        mov     byte ptr [esp+0x118], dl
        mov     ecx, 0x15d
        lea     edi, [esp+0x119]
        rep stosd
        mov     ebp, dword ptr [esp+0x698]
        stosw
        stosb
        xor     eax, eax
        mov     byte ptr [esp+0x18], dl
        mov     ecx, 0x3f
        lea     edi, [esp+0x19]
        rep stosd
        stosw
        stosb
        mov     eax, dword ptr [ebx+0x17e4]
        inc     eax
        xor     esi, esi
        mov     dword ptr [ebx+0x17e4], eax
        mov     dword ptr [ebx+0x17e8], esi
        mov     dword ptr [esp+0x14], esi
        mov     dword ptr [esp+0x10], 0x7b4328
L87a8:
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp+0x694]
        push    ecx
        push    edx
        call    FUN_004d7ef0
        add     esp, 0x8
        test    eax, eax
        jz      L891c
        cmp     esi, 0x7
        ja      L891c
        jmp     dword ptr [esi*4 + 0x4d895c]
L87d7:
        lea     eax, [esp+0x118]
        push    eax
        push    ebp
        mov     ecx, ebx
        call    FUN_004d81d0
        jmp     L891c
L87ec:
        lea     ecx, [esp+0x118]
        push    ecx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d8230
        jmp     L891c
L8801:
        lea     edx, [esp+0x118]
        push    edx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d8290
        jmp     L891c
L8816:
        lea     eax, [esp+0x118]
        push    eax
        push    ebp
        mov     ecx, ebx
        call    FUN_004d82f0
        jmp     L891c
L882b:
        lea     ecx, [esp+0x118]
        push    ecx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d81d0
        lea     edx, [esp+0x118]
        push    edx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d8230
        lea     eax, [esp+0x118]
        push    eax
        push    ebp
        mov     ecx, ebx
        call    FUN_004d8290
        lea     ecx, [esp+0x118]
        push    ecx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d82f0
        jmp     L891c
L8870:
        lea     edx, [esp+0x118]
        push    edx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d81d0
        lea     eax, [esp+0x118]
        push    eax
        push    ebp
        mov     ecx, ebx
        call    FUN_004d7ff0
        lea     ecx, [esp+0x118]
        push    ecx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d8230
        lea     edx, [esp+0x118]
        push    edx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d7ff0
        lea     eax, [esp+0x118]
        push    eax
        push    ebp
        mov     ecx, ebx
        call    FUN_004d8290
        lea     ecx, [esp+0x118]
        push    ecx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d7ff0
        lea     edx, [esp+0x118]
        push    edx
        push    ebp
        mov     ecx, ebx
        call    FUN_004d82f0
        jmp     L891c
L88e2:
        push    eax
        lea     eax, [esp+0x11c]
        push    eax
        push    ebp
        mov     ecx, ebx
        call    FUN_004d8350
        jmp     L891c
L88f5:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edx, [esp+0x18]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     esi, dword ptr [esp+0x14]
L891c:
        mov     edx, dword ptr [esp+0x10]
        add     edx, 0x4
        inc     esi
        lea     ecx, [esi+0x1]
        cmp     ecx, 0x8
        mov     dword ptr [esp+0x10], edx
        mov     dword ptr [esp+0x14], esi
        jle     L87a8
        lea     edx, [esp+0x18]
        push    edx
        lea     eax, [esp+0x11c]
        push    eax
        push    ebp
        mov     ecx, ebx
        call    FUN_004d83b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x680
        ret     0x8
    }
}
