/*
 * FUN_0064c620 (244 B) — __fastcall teardown/cleanup:
 *   removes this from a global registry list, frees two sub-objects,
 *   and removes a third from a global vector (DAT_008058b8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_0080d974;
extern int g_0080d980;
extern int *g_008058b8;

extern void __cdecl FUN_0061f380(void);
extern void __cdecl FUN_0061f200(void *);
extern void __cdecl FUN_0061f900(void);
extern void __cdecl FUN_0061f780(void *);
extern void __cdecl FUN_006f4230(void *);

__declspec(naked) void FUN_0064c620(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        cmp     dword ptr [edi], -0x1
        mov     dword ptr [esp + 0x14], edi
        jle     L66b
        mov     esi, dword ptr [g_0080d974]
        test    esi, esi
        jz      L66b
        mov     eax, dword ptr [g_0080d980]
        xor     ecx, ecx
        test    eax, eax
        jle     L66b
        mov     edx, esi
    L649:
        cmp     dword ptr [edx], edi
        jz      L657
        inc     ecx
        add     edx, 0x4
        cmp     ecx, eax
        jl      L649
        jmp     L66b
    L657:
        mov     edx, dword ptr [esi + eax*4 - 0x4]
        dec     eax
        mov     dword ptr [esi + ecx*4], edx
        mov     dword ptr [g_0080d980], eax
        mov     dword ptr [esi + eax*4], 0x0
    L66b:
        mov     esi, dword ptr [edi + 0x30]
        xor     ebx, ebx
        cmp     esi, ebx
        jz      L687
        mov     ecx, esi
        call    FUN_0061f380
        push    esi
        call    FUN_0061f200
        add     esp, 0x4
        mov     dword ptr [edi + 0x30], ebx
    L687:
        mov     esi, dword ptr [edi + 0x34]
        cmp     esi, ebx
        jz      L6a1
        mov     ecx, esi
        call    FUN_0061f900
        push    esi
        call    FUN_0061f780
        add     esp, 0x4
        mov     dword ptr [edi + 0x34], ebx
    L6a1:
        mov     ebp, dword ptr [edi + 0x24]
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x10], ebp
        jz      L70c
        test    ebp, ebp
        mov     ebx, dword ptr [g_008058b8]
        jz      L705
        mov     esi, dword ptr [ebx + 0x10]
        cmp     esi, dword ptr [ebx + 0x14]
        jz      L6ff
        lea     edi, [esi + 0x4]
    L6c1:
        cmp     dword ptr [esi], ebp
        jnz     L6f0
        mov     edx, dword ptr [ebx + 0x14]
        cmp     edi, edx
        jz      L6e8
        mov     eax, edx
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, esi
        jle     L6e8
    L6d9:
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [ecx], ebp
        add     ecx, 0x4
        dec     eax
        jnz     L6d9
        mov     ebp, dword ptr [esp + 0x10]
    L6e8:
        add     edx, -0x4
        mov     dword ptr [ebx + 0x14], edx
        jmp     L6f6
    L6f0:
        add     esi, 0x4
        add     edi, 0x4
    L6f6:
        cmp     esi, dword ptr [ebx + 0x14]
        jnz     L6c1
        mov     edi, dword ptr [esp + 0x14]
    L6ff:
        push    ebp
        call    FUN_006f4230
    L705:
        mov     dword ptr [edi + 0x24], 0x0
    L70c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
