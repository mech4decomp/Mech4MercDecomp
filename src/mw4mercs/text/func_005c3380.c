/*
 * FUN_005c3380 (373 B) — __stdcall RET 8, 2 stack params + ECX this.
 * Returns bool in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005cb480(void *a, void *b, void *c);
extern void __stdcall FUN_004084d0(int a);
extern void __stdcall FUN_005c31e0(void *a, void *b);
extern char __stdcall FUN_005c2cb0(void *a, void *b, void *c, void *d);
extern void __stdcall FUN_005cbad0(void *a);
extern void __stdcall FUN_005cb530(void *a, int b);
extern void __stdcall FUN_004084e0(void *a);
extern void __stdcall FUN_005c2c20(void *a, void *b);
extern void __stdcall FUN_005cb4a0(void *a, int b);

__declspec(naked) char __stdcall FUN_005c3380(void *a, void *b)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x13]
        push    ecx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x1c], 0x0
        call    FUN_005cb480
        push    0x18
        call    FUN_004084d0
        mov     esi, dword ptr [esp + 0x20]
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        lea     edx, [esp + 0x10]
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    esi
        mov     ecx, ebx
        mov     dword ptr [eax + 0x4], eax
        call    FUN_005c31e0
        mov     ebp, dword ptr [esp + 0x20]
        push    0x0
        lea     eax, [esp + 0x14]
        push    eax
        push    ebp
        push    esi
        mov     ecx, ebx
        call    FUN_005c2cb0
        cmp     al, 0x1
        jnz     L_3406
        lea     ecx, [esp + 0x10]
        call    FUN_005cbad0
        mov     ecx, dword ptr [esp + 0x10]
        push    0x1
        push    ecx
        call    FUN_005cb530
        add     esp, 0x8
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8
L_3406:
        mov     eax, dword ptr [esi + 0x128]
        test    eax, eax
        jz      L_34b0
        mov     eax, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [eax]
        cmp     edi, eax
        jz      L_3438
L_341f:
        mov     ecx, edi
        test    ecx, ecx
        mov     edi, dword ptr [edi]
        jz      L_3434
        push    ecx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x4
L_3434:
        cmp     edi, eax
        jnz     L_341f
L_3438:
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x14]
        push    edx
        mov     dword ptr [eax + 0x4], eax
        mov     eax, dword ptr [esi + 0x128]
        push    esi
        push    eax
        call    FUN_005c2c20
        add     esp, 0xc
        push    0x1
        lea     ecx, [esp + 0x18]
        push    ecx
        push    ebp
        push    esi
        mov     ecx, ebx
        call    FUN_005c2cb0
        cmp     al, 0x1
        pop     edi
        jnz     L_34b0
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [eax]
        cmp     esi, eax
        jz      L_348d
L_3475:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    0x1
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005cb4a0
        mov     eax, dword ptr [esp + 0x10]
        cmp     esi, eax
        jnz     L_3475
L_348d:
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x4], eax
        mov     edx, dword ptr [esp + 0x10]
        push    0x1
        push    edx
        call    FUN_005cb530
        add     esp, 0x8
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8
L_34b0:
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [eax]
        cmp     esi, eax
        jz      L_34d2
L_34ba:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    0x1
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005cb4a0
        mov     eax, dword ptr [esp + 0x10]
        cmp     esi, eax
        jnz     L_34ba
L_34d2:
        mov     dword ptr [eax], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x4], eax
        mov     eax, dword ptr [esp + 0x10]
        push    0x1
        push    eax
        call    FUN_005cb530
        add     esp, 0x8
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
