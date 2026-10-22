/*
 * FUN_005c31e0 (402 B) — __stdcall RET 8, 2 stack params + ECX this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005cb3a0(void *a);
extern void __stdcall FUN_00684050(void *a, void *b);
extern void __stdcall FUN_005c2f60(void *a, void *b, void *c);
extern void __stdcall FUN_005cb4e0(void *a, int b);
extern void __stdcall FUN_005c70c0(void *a, void *b);
extern void __stdcall FUN_00419480(int a);
extern void __stdcall FUN_005cb330(void *a);
extern void __stdcall FUN_005cb390(int a);
extern void __stdcall FUN_005cb340(void *a, void *b, void *c);
extern void __stdcall FUN_005cbcd0(void *a, void *b, void *c, void *d, int e);
extern void __stdcall FUN_005cb520(void *a, int b);

__declspec(naked) void __stdcall FUN_005c31e0(void *param_1, void *param_2)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x13]
        mov     dword ptr [esp + 0x14], ecx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005cb3a0
        mov     esi, dword ptr [esp + 0x48]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esi + 0x370]
        push    edx
        call    FUN_00684050
        mov     eax, dword ptr [esp + 0x28]
        sub     eax, dword ptr [esp + 0x24]
        sar     eax, 0x2
        add     esp, 0x8
        cmp     eax, 0x2
        jnc     L_3256
        mov     ecx, dword ptr [esp + 0x4c]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        push    esi
        call    FUN_005c2f60
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x30]
        sub     ecx, eax
        add     esp, 0xc
        sar     ecx, 0x2
        push    ecx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_005cb4e0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0x8
L_3256:
        mov     ebx, dword ptr [esp + 0x4c]
        mov     ebp, dword ptr [esp + 0x48]
        jmp     L_3264
L_3260:
        mov     esi, dword ptr [esp + 0x48]
L_3264:
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x1c]
        push    edx
        push    esi
        call    FUN_005c70c0
        mov     edi, eax
        test    edi, edi
        jz      L_3316
        mov     esi, dword ptr [edi + 0x24]
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00419480
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x34], ecx
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x38], edx
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x48], esi
        call    FUN_005cb330
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005cb390
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, ebx
        call    FUN_005cb340
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        cmp     esi, ecx
        mov     eax, esi
        jz      L_32f0
L_32e5:
        cmp     dword ptr [eax], edi
        jz      L_32f0
        add     eax, 0x4
        cmp     eax, ecx
        jnz     L_32e5
L_32f0:
        lea     edx, [eax + 0x4]
        cmp     edx, ecx
        jz      L_330d
        push    0x0
        push    ebp
        push    eax
        push    ecx
        push    edx
        call    FUN_005cbcd0
        mov     ecx, dword ptr [esp + 0x34]
        mov     esi, dword ptr [esp + 0x30]
        add     esp, 0x14
L_330d:
        sub     ecx, 0x4
        mov     dword ptr [esp + 0x20], ecx
        jmp     L_331e
L_3316:
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [esp + 0x1c]
L_331e:
        sub     ecx, esi
        sar     ecx, 0x2
        jnz     L_3260
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ecx]
        xor     edx, edx
        cmp     eax, ecx
        jz      L_333e
L_3333:
        mov     eax, dword ptr [eax]
        inc     edx
        cmp     eax, ecx
        jnz     L_3333
        test    edx, edx
        jnz     L_3355
L_333e:
        mov     edx, dword ptr [esp + 0x48]
        push    ebx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edx
        call    FUN_005c2f60
        mov     esi, dword ptr [esp + 0x28]
        add     esp, 0xc
L_3355:
        mov     eax, dword ptr [esp + 0x24]
        sub     eax, esi
        sar     eax, 0x2
        push    eax
        push    esi
        call    FUN_005cb520
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0x8
    }
}
