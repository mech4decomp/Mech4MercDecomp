/*
 * FUN_00748f80 (302 B) — __fastcall (ECX = this). Iterates a field
 * range, calling FUN_007357d0/FUN_00740db0/FUN_007490b0 per step,
 * then conditionally calls FUN_0075c060 / FUN_00735e30.
 *
 * RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_87c2a0; /* 0x0087c2a0 */

extern void __cdecl FUN_007358e0(void);
extern void __cdecl FUN_007490b0(void);
extern void __cdecl FUN_00747ac0(void);
extern void __cdecl FUN_007357d0(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_0075c060(void);
extern void __cdecl FUN_00735e30(void);

__declspec(naked) void __stdcall FUN_00748f80(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        push    0
        mov     ebx, 1
        mov     esi, ecx
        push    ebx
        call    FUN_007358e0
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0x10]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_007490b0
        mov     eax, [g_87c2a0]
        test    eax, eax
        jz      L4906d
        test    byte ptr [esi + 6], bl
        jnz     L4906d
        xor     edx, edx
        mov     dx, word ptr [esi + 2]
        xor     eax, eax
        mov     ax, word ptr [esi]
        push    edx
        push    eax
        call    FUN_00747ac0
        cmp     eax, ebx
        jle     L4906d
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0x10]
        xor     eax, eax
        mov     [esp + 0x14], eax
        mov     [esp + 0x18], eax
        mov     [esp + 0x1c], eax
        mov     [esp + 0xc], ecx
        mov     [esp + 0x10], edx
        mov     [esp + 0x20], eax
        mov     dword ptr [esp + 0x14], 0x401008
        mov     edi, ebx
L48ffe:
        test    byte ptr [esi + 6], bl
        jz      L49007
        mov     eax, ebx
        jmp     L49019
L49007:
        xor     ecx, ecx
        mov     cx, word ptr [esi + 2]
        xor     edx, edx
        mov     dx, word ptr [esi]
        push    ecx
        push    edx
        call    FUN_00747ac0
L49019:
        cmp     edi, eax
        jge     L4906d
        mov     edx, dword ptr [esp + 0xc]
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        call    FUN_007357d0
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_00740db0
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call    FUN_007357d0
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_00740db0
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_007490b0
        inc     edi
        jmp     L48ffe
L4906d:
        or      word ptr [esi + 4], bx
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        mov     bl, 8
        jz      L4908d
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     L49086
        test    byte ptr [esi + 6], bl
        jz      L4908d
L49086:
        mov     ecx, esi
        call    FUN_0075c060
L4908d:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L490a7
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     L490a0
        test    byte ptr [esi + 6], bl
        jz      L490a7
L490a0:
        mov     ecx, esi
        call    FUN_00735e30
L490a7:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret
    }
}
