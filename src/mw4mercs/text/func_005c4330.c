/*
 * FUN_005c4330 (389 B) — __stdcall RET 0xC, 3 stack params + ECX this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005cbca0(void *a, void *b, void *c, void *d, void *e);
extern void __stdcall FUN_005cb6f0(void *a, void *b, int c);
extern void __stdcall FUN_00661760(void *a, void *b, void *c);
extern void __stdcall FUN_005cbbe0(void *a, int b);
extern void __stdcall FUN_00661d70(void *a, void *b);
extern void __stdcall FUN_00707e70(int a);
extern void __stdcall FUN_005c6bd0(void *a);
extern void __stdcall FUN_00682cf0(void *a);

__declspec(naked) void __stdcall FUN_005c4330(void *a, void *b, void *c)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x5a8]
        mov     ebx, dword ptr [edi + 0x5a4]
        lea     esi, [edi + 0x5a4]
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x4
        jbe     L_4385
        mov     ebp, ebx
        add     ebp, 0x4
L_4358:
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebp, ebx
        jz      L_4373
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esi]
        push    0x0
        push    ecx
        push    eax
        push    ebx
        push    ebp
        call    FUN_005cbca0
        add     esp, 0x14
L_4373:
        add     ebx, -0x4
        mov     edx, ebx
        mov     dword ptr [esi + 0x4], ebx
        sub     edx, dword ptr [esi]
        sar     edx, 0x2
        cmp     edx, 0x4
        ja      L_4358
L_4385:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0x8]
        jz      L_43a1
        xor     ebp, ebp
        cmp     eax, ebp
        jz      L_4399
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [eax], ecx
L_4399:
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     L_43b2
L_43a1:
        push    0x1
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005cb6f0
        xor     ebp, ebp
L_43b2:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        lea     ecx, [edi + 0x508]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_00661760
        mov     ebx, eax
        lea     esi, [edi + 0x4e0]
        add     esp, 0xc
        cmp     ebx, esi
        jz      L_4416
        mov     ecx, dword ptr [esi]
        mov     eax, ecx
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L_440a
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_43fc
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_440a
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax + 0xc]
        jmp     L_440a
L_43fc:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_440a
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx + 0xc]
L_440a:
        mov     eax, dword ptr [ebx]
        push    ebp
        mov     ecx, ebx
        mov     dword ptr [esi], eax
        call    FUN_005cbbe0
L_4416:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, ecx
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     L_444f
        mov     eax, ecx
        and     eax, 0x2
        cmp     al, 0x2
        jnz     L_443f
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0x10], ecx
        jz      L_444f
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx + 0xc]
        jmp     L_444f
L_443f:
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0x10], ecx
        jz      L_444f
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0xc]
L_444f:
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esi]
        and     ecx, 0xfffffffc
        call    FUN_00661d70
        mov     bl, byte ptr [esp + 0x1c]
        push    ebp
        mov     byte ptr [edi + 0x51c], bl
        mov     dword ptr [edi + 0x590], ebp
        mov     dword ptr [edi + 0x58c], ebp
        mov     dword ptr [edi + 0x588], ebp
        mov     dword ptr [edi + 0x594], ebp
        mov     dword ptr [edi + 0x54c], ebp
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x610]
        cmp     bl, 0x1
        jnz     L_449e
        mov     ecx, edi
        call    FUN_005c6bd0
L_449e:
        mov     edx, dword ptr [edi + 0x170]
        push    edx
        call    FUN_00682cf0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
