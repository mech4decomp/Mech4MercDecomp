/*
 * FUN_0061FA90 (237 B) — 1 stack param (__stdcall). Same shape as
 * FUN_0061F110 / FUN_0061F690: appends an element to a growable array
 * stored in the global object at DAT_008058b8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_8058b8;   /* DAT_008058b8 */

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0061ef00(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_0061FA90(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [g_8058b8]
        mov     eax, dword ptr [ebx + 0xC]
        test    eax, eax
        jz      L_1FB76
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_006f3c80
        mov     esi, dword ptr [ebx + 0x14]
        cmp     esi, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0x14], eax
        jz      L_1FACF
        test    esi, esi
        jz      L_1FAC3
        mov     dword ptr [esi], eax
L_1FAC3:
        add     esi, 0x4
        mov     dword ptr [ebx + 0x14], esi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret
L_1FACF:
        push    ebp
        push    edi
        mov     edi, dword ptr [ebx + 0x10]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_1FAF4
        lea     ecx, [esp + 0x14]
L_1FAF4:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_1FB0E
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_1FB10
L_1FB0E:
        xor     ebp, ebp
L_1FB10:
        mov     edx, dword ptr [esp + 0x1C]
        push    0x0
        push    edx
        push    ebp
        push    esi
        push    edi
        call    FUN_0061ef00
        add     esp, 0x14
        test    eax, eax
        jz      L_1FB2C
        mov     ecx, dword ptr [esp + 0x1C]
        mov     dword ptr [eax], ecx
L_1FB2C:
        mov     ecx, esi
        sub     ecx, esi
        add     eax, 0x4
        sar     ecx, 0x2
        test    ecx, ecx
        mov     edi, eax
        jle     L_1FB49
        sub     esi, eax
L_1FB3E:
        mov     edx, dword ptr [esi + edi]
        mov     dword ptr [edi], edx
        add     edi, 0x4
        dec     ecx
        jnz     L_1FB3E
L_1FB49:
        mov     eax, dword ptr [ebx + 0x10]
        test    eax, eax
        jz      L_1FB59
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_1FB59:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x14], edi
        pop     edi
        lea     ecx, [ebp + eax*4]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebx + 0x10], ebp
        pop     ebp
        pop     esi
        mov     dword ptr [ebx + 0x18], ecx
        pop     ebx
        add     esp, 0x8
        ret
L_1FB76:
        xor     eax, eax
        pop     ebx
        add     esp, 0x8
        ret
    }
}
