/*
 * FUN_0063bff0 (957 B) — __fastcall constructor. Sets up vtables and
 * sub-objects, calls FUN_005614d0 six times with float params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7ddde0;          /* 0x007ddde0 */
extern int g_7dab44;          /* 0x007dab44 */
extern int g_7dab40;          /* 0x007dab40 */

extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_005614d0(void);

__declspec(naked) void FUN_0063bff0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_7ddde0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        lea     edi, [esi + 0x144]
        xor     ebp, ebp
        push    ebp
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x78f1e4
        lea     edi, [esi + 0x15c]
        push    ebp
        mov     ecx, edi
        mov     dword ptr [esi + 0x158], ebp
        mov     dword ptr [esi + 0x154], ebp
        call    FUN_0041fc80
        mov     eax, 0xc8009600
        mov     dword ptr [edi], 0x78f1cc
        mov     dword ptr [esi], 0x78f1b4
        mov     dword ptr [esi + 0x140], eax
        mov     dword ptr [esi + 0x34], eax
        lea     ebx, [esi + 0xc8]
        mov     dword ptr [esp + 0x10], 0x1e
L_c05a:
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_c075
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_c077
L_c075:
        xor     eax, eax
L_c077:
        push    ebp
        push    ebp
        push    0x78f1a8
        mov     ecx, eax
        mov     dword ptr [ebx - 0x78], eax
        call    FUN_00560420
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_c0a5
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        mov     edi, eax
        jmp     L_c0a7
L_c0a5:
        xor     edi, edi
L_c0a7:
        mov     edx, dword ptr [edi]
        push    ebp
        mov     ecx, edi
        mov     dword ptr [ebx], edi
        call    dword ptr [edx + 4]
        push    ebp
        push    ebp
        push    0x78f1a4
        mov     ecx, edi
        call    FUN_00560420
        mov     eax, dword ptr [esp + 0x10]
        add     ebx, 4
        dec     eax
        mov     dword ptr [edi + 0x10c], ebp
        mov     dword ptr [esp + 0x10], eax
        jnz     L_c05a
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_c0ee
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_c0f0
L_c0ee:
        xor     eax, eax
L_c0f0:
        push    0x138
        mov     dword ptr [esi + 0x164], eax
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_c111
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_c113
L_c111:
        xor     eax, eax
L_c113:
        push    0x138
        mov     dword ptr [esi + 0x168], eax
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_c134
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_c136
L_c134:
        xor     eax, eax
L_c136:
        push    0x138
        mov     dword ptr [esi + 0x16c], eax
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_c157
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_c159
L_c157:
        xor     eax, eax
L_c159:
        push    0x138
        mov     dword ptr [esi + 0x170], eax
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_c17a
        push    ebp
        mov     ecx, eax
        call    FUN_00560190
        jmp     L_c17c
L_c17a:
        xor     eax, eax
L_c17c:
        push    0x43800000
        push    0x43800000
        push    0x430d0000
        push    0x41d00000
        push    0x43060000
        push    0x41a00000
        push    0x14
        push    0x78f198
        mov     ecx, esi
        mov     dword ptr [esi + 0x174], eax
        mov     dword ptr [esi + 0x150], 0x461c4000
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x430d0000
        push    0x42040000
        push    0x43060000
        push    0x41d80000
        push    0x15
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x430d0000
        push    0x42200000
        push    0x43060000
        push    0x42080000
        push    0x16
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43160000
        push    0x41d00000
        push    0x430e0000
        push    0x41a00000
        push    0x17
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43160000
        push    0x42040000
        push    0x430e0000
        push    0x41d80000
        push    0x18
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43160000
        push    0x42200000
        push    0x430e0000
        push    0x42080000
        push    0x19
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_7dab40]
        mov     ebx, dword ptr [esi + 0x164]
        xor     eax, edx
        mov     edi, dword ptr [eax + 0xc]
        push    ebp
        xor     edi, 0x85739531
        mov     edx, dword ptr [edi]
        push    ebp
        mov     dword ptr [ebx + 0x10c], ebp
        push    0x2c6
        mov     ecx, edi
        mov     dword ptr [ebx + 0x104], 0xff000000
        call    dword ptr [edx + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     ebx, dword ptr [esi + 0x168]
        mov     eax, dword ptr [edi]
        push    ebp
        push    ebp
        mov     dword ptr [ebx + 0x10c], ebp
        push    0x2d8
        mov     ecx, edi
        mov     dword ptr [ebx + 0x104], 0xff000000
        call    dword ptr [eax + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     ebx, dword ptr [esi + 0x16c]
        mov     edx, dword ptr [edi]
        push    ebp
        push    ebp
        mov     dword ptr [ebx + 0x10c], ebp
        push    0x2c7
        mov     ecx, edi
        mov     dword ptr [ebx + 0x104], 0xff000000
        call    dword ptr [edx + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     ebx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [edi]
        push    ebp
        push    ebp
        mov     dword ptr [ebx + 0x10c], ebp
        push    0x2c8
        mov     ecx, edi
        mov     dword ptr [ebx + 0x104], 0xff000000
        call    dword ptr [eax + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     ebx, dword ptr [esi + 0x174]
        mov     edx, dword ptr [edi]
        push    ebp
        push    ebp
        mov     dword ptr [ebx + 0x10c], ebp
        push    0x2c9
        mov     ecx, edi
        mov     dword ptr [ebx + 0x104], 0xff000000
        call    dword ptr [edx + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     eax, dword ptr [ebx]
        push    ebp
        mov     ecx, ebx
        call    dword ptr [eax + 4]
        mov     dword ptr [esi + 0x178], ebp
        xor     ecx, ecx
        mov     dword ptr [esi + 0x17c], ecx
        pop     edi
        mov     word ptr [esi + 0x180], cx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
