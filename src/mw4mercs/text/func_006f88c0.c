/*
 * FUN_006f88c0 (249 B) — log/registry node insertion. Assigns a unique
 * sequence number (param_1[4]), formats it as a 3-digit decimal string into
 * param_1[0x14..0x17], lazily allocates a shared object (g_8493d0) via
 * FUN_006f6490/FUN_006f5f60, then links param_1 into a singly-linked list
 * headed by g_8493c4 and dispatches two virtual calls through param_1's vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008493c4;
extern int g_008493d0;
extern void * __cdecl FUN_006f6490(unsigned int);
extern void * __cdecl FUN_006f5f60(void);

__declspec(naked) void FUN_006f88c0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [g_008493c4]
        mov     dword ptr [esi + 0x10], 0x1
L_88d3:
        mov     eax, edi
        test    eax, eax
        jz      L_88f4
        mov     ecx, dword ptr [esi + 0x10]
L_88dc:
        cmp     dword ptr [eax + 0x10], ecx
        jz      L_88ea
        mov     eax, dword ptr [eax + 0x8]
        test    eax, eax
        jz      L_88f4
        jmp     L_88dc
L_88ea:
        test    eax, eax
        jz      L_88f4
        inc     ecx
        mov     dword ptr [esi + 0x10], ecx
        jmp     L_88d3
L_88f4:
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, ecx
        cdq
        push    ebp
        mov     ebp, 0xa
        idiv    ebp
        mov     eax, 0x66666667
        mov     byte ptr [esi + 0x17], 0x0
        add     dl, 0x30
        mov     byte ptr [esi + 0x16], dl
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ecx, edx
        mov     eax, ecx
        cdq
        idiv    ebp
        mov     eax, 0x66666667
        add     dl, 0x30
        mov     byte ptr [esi + 0x15], dl
        imul    ecx
        mov     eax, edx
        sar     eax, 0x2
        mov     ecx, eax
        shr     ecx, 0x1f
        add     eax, ecx
        cdq
        mov     ecx, ebp
        idiv    ecx
        pop     ebp
        add     dl, 0x30
        test    edi, edi
        mov     byte ptr [esi + 0x14], dl
        jnz     L_8992
        mov     eax, dword ptr [g_008493d0]
        test    eax, eax
        jnz     L_8992
        push    0x140
        call    FUN_006f6490
        test    eax, eax
        jz      L_897b
        mov     ecx, eax
        call    FUN_006f5f60
        test    eax, eax
        mov     dword ptr [g_008493d0], eax
        jnz     L_898c
        pop     edi
        xor     al, al
        pop     esi
        ret     0x4
L_897b:
        pop     edi
        mov     dword ptr [g_008493d0], 0x0
        xor     al, al
        pop     esi
        ret     0x4
L_898c:
        mov     edi, dword ptr [g_008493c4]
L_8992:
        test    edi, edi
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], 0x0
        jz      L_89a3
        mov     dword ptr [edi + 0xc], esi
L_89a3:
        mov     edx, dword ptr [esi]
        push    esi
        mov     dword ptr [g_008493c4], esi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax]
        pop     edi
        pop     esi
        ret     0x4
    }
}
