/*
 * FUN_1004533a (320 B) — __cdecl. Date/time computation helper.
 * CFLAGS: /O1
 */

extern int g_10054cdc;
extern int g_10054cd8;
extern int g_10054ce0;
extern int g_10054cec;
extern int g_10054c48;
extern int g_10054cf0;
extern int g_10054ce8;

__declspec(naked) void FUN_1004533a(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp + 0xc], 0x1
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        jnz     L453d5
        mov     eax, dword ptr [ebp + 0x14]
        mov     dword ptr [ebp + 0x10], ebx
        and     dword ptr [ebp + 0x10], 0x3
        mov     esi, eax
        jnz     L45365
        shl     esi, 0x2
        mov     eax, dword ptr [esi + 0x10054cf0]
        jmp     L4536e
    L45365:
        shl     esi, 0x2
        mov     eax, dword ptr [esi + 0x10054d24]
    L4536e:
        mov     edx, ebx
        lea     ecx, [eax + 0x1]
        imul    edx, edx, 0x16d
        lea     eax, [ebx - 0x1]
        push    edi
        sar     eax, 0x2
        mov     edi, ecx
        push    0x7
        add     edi, eax
        lea     eax, [edx + edi*0x1 + 0xffff9c25]
        pop     edi
        cdq
        idiv    edi
        mov     eax, dword ptr [ebp + 0x18]
        pop     edi
        cmp     edx, dword ptr [ebp + 0x1c]
        jg      L453a8
        imul    eax, eax, 0x7
        sub     eax, edx
        add     eax, dword ptr [ebp + 0x1c]
        lea     ecx, [ecx + eax*0x1 - 0x7]
        jmp     L453b2
    L453a8:
        imul    eax, eax, 0x7
        sub     eax, edx
        add     eax, dword ptr [ebp + 0x1c]
        add     ecx, eax
    L453b2:
        cmp     dword ptr [ebp + 0x18], 0x5
        jnz     L453f0
        cmp     dword ptr [ebp + 0x10], 0x0
        jnz     L453c6
        mov     esi, dword ptr [esi + 0x10054cf4]
        jmp     L453cc
    L453c6:
        mov     esi, dword ptr [esi + 0x10054d28]
    L453cc:
        cmp     ecx, esi
        jle     L453f0
        sub     ecx, 0x7
        jmp     L453f0
    L453d5:
        mov     eax, dword ptr [ebp + 0x14]
        test    bl, 0x3
        jnz     L453e6
        mov     ecx, dword ptr [eax*0x4 + 0x10054cf0]
        jmp     L453ed
    L453e6:
        mov     ecx, dword ptr [eax*0x4 + 0x10054d24]
    L453ed:
        add     ecx, dword ptr [ebp + 0x20]
    L453f0:
        cmp     dword ptr [ebp + 0x8], 0x1
        jnz     L45421
        mov     eax, dword ptr [ebp + 0x24]
        mov     dword ptr [g_10054cdc], ecx
        imul    eax, eax, 0x3c
        add     eax, dword ptr [ebp + 0x28]
        mov     dword ptr [g_10054cd8], ebx
        imul    eax, eax, 0x3c
        add     eax, dword ptr [ebp + 0x2c]
        imul    eax, eax, 0x3e8
        add     eax, dword ptr [ebp + 0x30]
        mov     dword ptr [g_10054ce0], eax
        jmp     L45476
    L45421:
        mov     eax, dword ptr [ebp + 0x24]
        mov     dword ptr [g_10054cec], ecx
        imul    eax, eax, 0x3c
        add     eax, dword ptr [ebp + 0x28]
        imul    eax, eax, 0x3c
        add     eax, dword ptr [g_10054c48]
        add     eax, dword ptr [ebp + 0x2c]
        imul    eax, eax, 0x3e8
        add     eax, dword ptr [ebp + 0x30]
        mov     dword ptr [g_10054cf0], eax
        jns     L45459
        add     eax, 0x5265c00
        dec     ecx
        mov     dword ptr [g_10054cf0], eax
        jmp     L4546a
    L45459:
        mov     edx, 0x5265c00
        cmp     eax, edx
        jl      L45470
        sub     eax, edx
        inc     ecx
        mov     dword ptr [g_10054cf0], eax
    L4546a:
        mov     dword ptr [g_10054cec], ecx
    L45470:
        mov     dword ptr [g_10054ce8], ebx
    L45476:
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
