/*
 * FUN_005b4aa0 (645 B) — __thiscall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041c680(void *a, void *b);
extern void __stdcall FUN_00767430(void *a);
extern void __stdcall FUN_004084e0(void *a);
extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_004da620(int a, int b);
extern void __stdcall FUN_005fa300(void *a, void *b, int c);
extern void __stdcall FUN_005fad50(void);
extern void __stdcall FUN_0041fcd0(void *a);
extern void __stdcall FUN_004db240(void);
extern void __stdcall FUN_005f3ff0(int a, int b);

__declspec(naked) void __stdcall FUN_005b4aa0(int a, int b)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x9
        push    esi
        push    edi
        jnz     L_ad1
        mov     ecx, dword ptr [ebp + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     edx, [ebp + 0x168]
        push    edx
        lea     ecx, [ebp + 0x198]
        call    FUN_0041c680
L_ad1:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [ebp + 0xd8]
        mov     dword ptr [ebp + 0xec], eax
        mov     dword ptr [ebp + 0xf0], ecx
        lea     edi, [ebp + 0xf4]
        add     esi, 0x50
        mov     ecx, 0xc
        lea     edx, [ebp + 0x198]
        rep movsd
        push    edx
        lea     ecx, [ebp + 0x1e0]
        call    FUN_00767430
        lea     eax, [ebp + 0x1b0]
        push    eax
        lea     ecx, [ebp + 0x1f8]
        call    FUN_00767430
        mov     ecx, dword ptr [ebp + 0xe0]
        cmp     dword ptr [ecx + 0x14], 0x1
        jnz     L_b84
        mov     esi, dword ptr [ebp + 0x12c]
        xor     ebx, ebx
        cmp     esi, ebx
        jz      L_b4f
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        jz      L_b46
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_b46:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_b4f:
        mov     esi, dword ptr [ebp + 0x130]
        cmp     esi, ebx
        mov     dword ptr [ebp + 0x12c], ebx
        jz      L_b77
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        jz      L_b6e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_b6e:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_b77:
        mov     dword ptr [ebp + 0x130], ebx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
L_b84:
        mov     al, byte ptr [ebp + 0x53d]
        xor     ebx, ebx
        cmp     al, bl
        jz      L_d0d
        mov     edx, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        call    dword ptr [edx + 0x4]
        mov     edi, eax
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0xd8]
        lea     esi, [ebp + 0x54c]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_be0
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    ebx
        push    0x5
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     byte ptr [ebp + 0x514], 0x1
L_be0:
        push    0x2
        push    0x3
        mov     ecx, ebp
        call    FUN_004da620
        push    ebx
        push    ebp
        lea     eax, [edi + 0x58]
        push    eax
        mov     ecx, ebp
        call    FUN_005fa300
        cmp     byte ptr [ebp + 0x53e], bl
        jz      L_c43
        lea     ecx, [ebp + 0x148]
        call    FUN_0041fd80
        test    eax, eax
        jnz     L_c43
        mov     dx, word ptr [edi + 0x66]
        push    ecx
        mov     cx, word ptr [edi + 0x64]
        mov     eax, esp
        mov     word ptr [eax], cx
        mov     ecx, ebp
        mov     word ptr [eax + 0x2], dx
        call    FUN_005fad50
        mov     esi, eax
        cmp     esi, ebx
        jz      L_c43
        lea     edi, [ebp + 0x148]
        mov     ecx, edi
        call    FUN_0041fcb0
        push    esi
        mov     ecx, edi
        call    FUN_0041fcd0
L_c43:
        mov     ecx, ebp
        call    FUN_004db240
        mov     esi, dword ptr [ebp + 0x130]
        cmp     esi, ebx
        jz      L_c72
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        jz      L_c63
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c63:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebp + 0x130], ebx
L_c72:
        mov     ecx, dword ptr [ebp + 0x2fc]
        cmp     ecx, ebx
        jz      L_c90
        mov     eax, dword ptr [ebp + 0xe0]
        cmp     dword ptr [eax + 0x14], 0xd
        jnz     L_c90
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10c]
L_c90:
        mov     ecx, dword ptr [ebp + 0xe0]
        mov     eax, dword ptr [ecx]
        push    ebx
        push    0x1
        call    dword ptr [eax + 0x4]
        mov     esi, dword ptr [ebp + 0xd8]
        or      dword ptr [esi + 0x18], 0xc0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     byte ptr [ebp + 0x514], 0x1
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0xec], ecx
        add     esi, 0x50
        mov     ecx, 0xc
        lea     edi, [ebp + 0xf4]
        rep movsd
        mov     eax, dword ptr [ebp]
        push    0x1
        mov     ecx, ebp
        mov     dword ptr [ebp + 0xf0], edx
        mov     dword ptr [ebp + 0x554], ebx
        mov     dword ptr [ebp + 0x558], ebx
        mov     dword ptr [ebp + 0x55c], ebx
        mov     dword ptr [ebp + 0x560], ebx
        call    dword ptr [eax + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
L_d0d:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    FUN_005f3ff0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
