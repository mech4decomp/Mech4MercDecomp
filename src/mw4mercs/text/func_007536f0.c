/*
 * FUN_007536f0 (255 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 * Builds a node via FUN_0075b9c0, walks a bitfield chain, then fills an
 * output struct (param_3) from stack locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_0075b9c0(void *this, int a, int b);
extern void __stdcall FUN_007357d0(int a, void *b, void *c);
extern void __stdcall FUN_00740db0(int a);
extern void __stdcall FUN_007353f0(int a, int b, void *c, int d, int e);
extern void __stdcall FUN_00735440(int a, int b);

__declspec(naked) void __stdcall FUN_007536f0(void *this)
{
    __asm {
        sub     esp, 0x90
        mov     al, byte ptr [esp + 0x98]
        neg     al
        push    ebp
        push    esi
        mov     esi, ecx
        sbb     eax, eax
        xor     ecx, ecx
        mov     dword ptr [esp + 0xc], ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ecx
        and     eax, 0xffffffe0
        push    ecx
        add     eax, 0x20
        or      eax, 0x80
        or      word ptr [esi + 0x4], ax
        mov     dword ptr [esp + 0x1c], ecx
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], 0x401008
        call    FUN_0075b9c0
        mov     ebp, dword ptr [esp + 0x9c]
        test    ebp, ebp
        mov     dword ptr [esp + 0x8], eax
        mov     word ptr [esi + 0x18], 0x0
        jz      L_788
        push    ebx
        push    edi
        xor     edi, edi
        mov     di, word ptr [esi]
L_753:
        mov     bx, word ptr [esi + 0x18]
        mov     edx, edi
        mov     cl, bl
        shr     edx, cl
        cmp     edx, ebp
        jz      L_786
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call    FUN_007357d0
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00740db0
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        mov     word ptr [esi + 0x18], bx
        jmp     L_753
L_786:
        pop     edi
        pop     ebx
L_788:
        push    0x0
        push    0x801
        lea     ecx, [esp + 0x24]
        push    ecx
        push    0x0
        push    eax
        mov     dword ptr [esp + 0x30], 0x7c
        call    FUN_007353f0
        mov     edx, dword ptr [esp + 0x8]
        push    0x0
        push    edx
        call    FUN_00735440
        mov     eax, dword ptr [esp + 0xa4]
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [eax + 0x8], ecx
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x2c]
        sar     edx, 0x2
        pop     esi
        mov     dword ptr [eax + 0xc], edx
        pop     ebp
        shr     ecx, 0xa
        and     ecx, 0x7
        mov     dword ptr [eax + 0x10], ecx
        add     esp, 0x90
        ret     0xc
    }
}
