/*
 * FUN_005f5670 (392 B) — __fastcall (ECX = this). Walks a linked list of
 * items, filters by two type checks, and maintains a dynamic array
 * (grow/copy/free) at this->0x40c/0x410/0x414.
 *
 * CFLAGS: /O1
 */

extern int g_7f25ac;   /* 0x007f25ac */
extern int g_7f2584;   /* 0x007f2584 */

extern void FUN_00415230(void);
extern void FUN_004084d0(void);
extern void FUN_005f6c60(void);
extern void FUN_004084e0(void);
extern void FUN_005f00f0(void);

__declspec(naked) void __fastcall FUN_005f5670(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x34c]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x2c], eax
    l_5687:
        mov     eax, dword ptr [esp + 0x2c]
        test    eax, eax
        jz      l_57e0
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x2c], ecx
        jz      l_57e0
        mov     eax, dword ptr [g_7f25ac]
        mov     esi, dword ptr [edi + 4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      l_56c0
        mov     dword ptr [ebx + 0x504], edi
        jmp     l_5687
    l_56c0:
        mov     eax, dword ptr [g_7f2584]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      l_5687
        mov     ecx, dword ptr [ebx + 0x410]
        mov     eax, dword ptr [ebx + 0x40c]
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], edi
        jz      l_56f4
    l_56e5:
        cmp     dword ptr [eax], edi
        jz      l_56f0
        add     eax, 4
        cmp     eax, ecx
        jnz     l_56e5
    l_56f0:
        cmp     eax, ecx
        jnz     l_5687
    l_56f4:
        mov     esi, dword ptr [ebx + 0x410]
        cmp     esi, dword ptr [ebx + 0x414]
        jz      l_5716
        test    esi, esi
        jz      l_5708
        mov     dword ptr [esi], edi
    l_5708:
        add     esi, 4
        mov     dword ptr [ebx + 0x410], esi
        jmp     l_5687
    l_5716:
        mov     ebp, dword ptr [ebx + 0x40c]
        mov     eax, esi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x18], eax
        lea     ecx, [esp + 0x10]
        jc      l_573c
        lea     ecx, [esp + 0x18]
    l_573c:
        add     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x18], eax
        jz      l_575a
        lea     edx, [eax*4]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x10], eax
        jmp     l_5762
    l_575a:
        mov     dword ptr [esp + 0x10], 0
    l_5762:
        cmp     ebp, esi
        mov     edi, dword ptr [esp + 0x10]
        jz      l_5780
        mov     ebx, ebp
    l_576c:
        push    ebx
        push    edi
        call    FUN_005f6c60
        add     ebx, 4
        add     esp, 8
        add     edi, 4
        cmp     ebx, esi
        jnz     l_576c
    l_5780:
        test    edi, edi
        jz      l_578a
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [edi], eax
    l_578a:
        cmp     esi, esi
        lea     ebx, [edi + 4]
        jz      l_57a7
        mov     edi, esi
    l_5793:
        push    edi
        push    ebx
        call    FUN_005f6c60
        add     edi, 4
        add     esp, 8
        add     ebx, 4
        cmp     edi, esi
        jnz     l_5793
    l_57a7:
        test    ebp, ebp
        mov     dword ptr [esp + 0x20], ebp
        jz      l_57b8
        push    ebp
        call    FUN_004084e0
        add     esp, 4
    l_57b8:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x40c], ecx
        lea     ecx, [ecx + edx*4]
        mov     dword ptr [eax + 0x410], ebx
        mov     dword ptr [eax + 0x414], ecx
        mov     ebx, eax
        jmp     l_5687
    l_57e0:
        mov     ecx, dword ptr [ebx + 0x504]
        test    ecx, ecx
        jz      l_57f0
        push    ebx
        call    FUN_005f00f0
    l_57f0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret
    }
}
