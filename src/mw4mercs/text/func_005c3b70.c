/*
 * FUN_005c3b70 (547 B) — __stdcall RET 0x20, 8 stack params + ECX this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00419480(void *a);
extern void __stdcall FUN_00684530(void *a, void *b, void *c);
extern void __stdcall FUN_005ac3e0(void *a);
extern void __stdcall FUN_005c9660(void *a, int b);
extern void __stdcall FUN_005c95a0(void *a, int b);
extern void __stdcall FUN_005c80a0(void *a, void *b, int c);
extern void __stdcall FUN_00684a20(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h, void *i, void *j, void *k, void *l, void *m, void *n, void *o, void *p);
extern char __stdcall FUN_005cadc0(void *a, void *b);
extern void __stdcall FUN_005c0ea0(void *a, int b);
extern void __stdcall FUN_00416110(void *a);
extern void __stdcall FUN_00415180(void *a, int b);
extern void __stdcall FUN_0041fc80(void *a, int b);
extern void __stdcall FUN_0055e240(void *a, int b);
extern void __stdcall FUN_0040ccd0(void *a, int b);
extern void __stdcall FUN_0041fcd0(void *a, void *b);
extern void __stdcall FUN_0041fcb0(void *a);
extern void __stdcall FUN_005bf240(void *a, int b);
extern void __stdcall FUN_00707e70(int a);

__declspec(naked) void __stdcall FUN_005c3b70(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h)
{
    

extern int DAT_007f2d20;
extern int DAT_007b8c10;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x98
        mov     eax, dword ptr [esp + 0xac]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00419480
        mov     eax, dword ptr [edi + 0x170]
        lea     ecx, [edi + 0x4fc]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_00684530
        mov     ecx, dword ptr [edi + 0x170]
        mov     esi, dword ptr [ecx + 0x408]
        xor     ebp, ebp
        cmp     esi, ebp
        mov     dword ptr [esp + 0x14], 0x0
        mov     dword ptr [esp + 0x10], 0x47c35000
        jz      L_3bdd
        mov     ecx, esi
        call    FUN_005ac3e0
        fstp    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi + 0x50]
        mov     dword ptr [esp + 0x10], edx
L_3bdd:
        xor     eax, eax
        mov     al, byte ptr [edi + 0x5fe]
        mov     ecx, edi
        push    eax
        call    FUN_005c9660
        mov     ecx, edi
        push    eax
        call    FUN_005c95a0
        mov     ecx, dword ptr [esp + 0xc0]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_005c80a0
        fld     dword ptr [edi + 0x52c]
        mov     edx, dword ptr [esp + 0xd8]
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [esp + 0xd0]
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    edx
        mov     edx, dword ptr [edi + 0x55c]
        push    eax
        mov     eax, dword ptr [edi + 0x558]
        push    ecx
        mov     ecx, dword ptr [esp + 0xd4]
        push    edx
        mov     edx, dword ptr [esp + 0xe8]
        push    eax
        mov     eax, dword ptr [esp + 0xd8]
        push    ecx
        push    edx
        push    ebx
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [edi + 0x528]
        lea     ecx, [esp + 0x68]
        fstp    qword ptr [esp]
        push    eax
        push    ecx
        lea     ecx, [esp + 0xb4]
        call    FUN_00684a20
        lea     edx, [esp + 0x3c]
        push    edx
        mov     ecx, edi
        call    FUN_005cadc0
        cmp     al, 0x1
        jnz     L_3c98
        push    ebp
        lea     ecx, [edi + 0x658]
        call    FUN_005c0ea0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x98
        ret     0x20
L_3c98:
        mov ecx, dword ptr [DAT_007f2d20]
        call    FUN_00416110
        mov     esi, eax
        cmp     esi, ebp
        jz      L_3d08
        mov eax, dword ptr [DAT_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        mov     dword ptr [esi + 0x8], ebp
        mov     dword ptr [esi + 0xc], ebp
        lea     ebp, [esi + 0x14]
        push    0x0
        mov     ecx, ebp
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     dword ptr [ebp], 0x773328
        xor     ebp, ebp
        push    ebp
        lea     ecx, [esi + 0x1c]
        call    FUN_0055e240
        push    0x7b8d88
        lea     ecx, [esi + 0x24]
        mov     dword ptr [esi], 0x77ce78
        mov     dword ptr [esi + 0x10], ebp
        call    FUN_0040ccd0
        mov     dword ptr [esi + 0x30], ebp
        mov     dword ptr [esi + 0xb4], ebp
        mov     byte ptr [esi + 0xb9], 0x0
        jmp     L_3d0a
L_3d08:
        xor     esi, esi
L_3d0a:
        mov     ebp, dword ptr [edi + 0x170]
        push    ebp
        lea     ecx, [esi + 0x14]
        call    FUN_0041fcd0
        test    ebx, ebx
        jz      L_3d28
        push    ebx
        lea     ecx, [esi + 0x1c]
        call    FUN_0041fcd0
        jmp     L_3d30
L_3d28:
        lea     ecx, [esi + 0x1c]
        call    FUN_0041fcb0
L_3d30:
        mov     ecx, dword ptr [esp + 0xac]
        mov     edx, dword ptr [ecx]
        push    esi
        push    ebx
        add     ebp, 0x3f8
        push    ebp
        lea     eax, [esp + 0x74]
        push    eax
        call    dword ptr [edx]
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jnz     L_3d5d
        push    0x0
        lea     ecx, [edi + 0x658]
        call    FUN_005c0ea0
L_3d5d:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        push    esi
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        call    FUN_005bf240
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x524]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x98
        ret     0x20
    }


}
