/*
 * FUN_0064F320 (400 B) — __cdecl, one stack param, RET.
 *
 * Walks a linked list of ABL modules (this+0x28 chain), parsing bytecode
 * tokens and building array params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006207e0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0061ebc0(void);
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_00620650(void);
extern void __cdecl FUN_00620770(void);

extern int g_007f2ba8;
extern int g_00805918;
extern int g_00805908;
extern int g_0080d9b4;
extern int g_0080d9bc;
extern int g_0080592c;
extern int g_008058b8;
extern int g_0080d984;
extern void *g_0076b420;   /* sprintf IAT */

__declspec(naked) void __cdecl FUN_0064f320(int param_1)
{
    __asm {
        mov     ecx, dword ptr [g_007f2ba8]
        sub     esp, 0x108
        test    ecx, ecx
        push    esi
        mov     esi, dword ptr [esp + 0x110]
        push    edi
        jz      L_64f345
        push    esi
        call    FUN_006207e0
        mov     ecx, dword ptr [g_007f2ba8]
L_64f345:
        mov     edi, dword ptr [esi + 0x28]
        test    edi, edi
        mov     dword ptr [esp + 0x8], edi
        jz      L_64f49e
        push    ebx
        push    ebp
        jmp     L_64f35c
L_64f358:
        mov     edi, dword ptr [esp + 0x10]
L_64f35c:
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax]
        mov     esi, dword ptr [edi + 0x3c]
        mov     dword ptr [g_00805908], ecx
        mov     ecx, dword ptr [edi + 0x18]
        inc     eax
        cmp     ecx, 0x4
        mov     dword ptr [g_00805918], eax
        jnz     L_64f45c
        call    FUN_0064db40
        cmp     esi, dword ptr [g_0080d9b4]
        jnz     L_64f3aa
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [g_0080d9bc]
        add     esp, 0x4
        cmp     eax, ecx
        jnz     L_64f3aa
        mov     eax, dword ptr [g_0080592c]
        fild    dword ptr [eax]
        fstp    dword ptr [eax]
        jmp     L_64f3af
L_64f3aa:
        mov     eax, dword ptr [g_0080592c]
L_64f3af:
        cmp     dword ptr [esi + 0x4], 0x3
        jnz     L_64f476
        mov     edi, dword ptr [g_008058b8]
        mov     ebp, dword ptr [eax]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x8]
        jz      L_64f458
        push    eax
        push    esi
        call    FUN_006f3c80
        mov     edx, dword ptr [edi + 0x14]
        lea     ecx, [edi + 0x10]
        cmp     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x14], eax
        jz      L_64f3f7
        test    edx, edx
        jz      L_64f3ef
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x14]
L_64f3ef:
        add     edx, 0x4
        mov     dword ptr [ecx + 0x4], edx
        jmp     L_64f408
L_64f3f7:
        push    0x1
        lea     eax, [esp + 0x18]
        push    eax
        push    edx
        call    FUN_0061ebc0
        mov     eax, dword ptr [esp + 0x14]
L_64f408:
        test    eax, eax
        mov     ebx, eax
        jnz     L_64f437
L_64f40e:
        mov     ecx, dword ptr [g_0080d984]
        add     ecx, 0x4
        push    ecx
        lea     edx, [esp + 0x1c]
        push    0x792e10
        push    edx
        call    dword ptr [g_0076b420]
        lea     eax, [esp + 0x24]
        push    eax
        push    0x0
        call    FUN_00562f10
        add     esp, 0x14
L_64f437:
        mov     eax, dword ptr [g_0080592c]
        mov     ecx, esi
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, ebp
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ebx
        jmp     L_64f476
L_64f458:
        xor     ebx, ebx
        jmp     L_64f40e
L_64f45c:
        mov     ecx, dword ptr [eax]
        add     eax, 0x4
        push    0x2
        push    ecx
        mov     dword ptr [g_00805918], eax
        call    FUN_0064d3d0
        mov     eax, dword ptr [g_0080592c]
        add     esp, 0x8
L_64f476:
        mov     ecx, dword ptr [g_007f2ba8]
        test    ecx, ecx
        jz      L_64f48d
        push    eax
        push    edi
        call    FUN_00620650
        mov     ecx, dword ptr [g_007f2ba8]
L_64f48d:
        mov     edi, dword ptr [edi + 0xc]
        test    edi, edi
        mov     dword ptr [esp + 0x10], edi
        jnz     L_64f358
        pop     ebp
        pop     ebx
L_64f49e:
        test    ecx, ecx
        pop     edi
        pop     esi
        jz      L_64f4a9
        call    FUN_00620770
L_64f4a9:
        add     esp, 0x108
        ret
    }
}
