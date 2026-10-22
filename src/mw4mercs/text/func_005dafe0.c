/*
 * FUN_005dafe0 (749 B) — __thiscall (ECX=this, RET 4). Deserializes a large
 * set of fields of the object at EDI through a virtual method (vtable+0x20)
 * on the stream object in ESI. Includes a conditional hash-based lookup and
 * an FPU store of a computed value.
 *
 * Match: target 100%
 */

extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_004fcb30(void);
extern void __stdcall FUN_0041fcd0(void);
extern void __stdcall FUN_0064b3b0(void);
extern void __stdcall FUN_00415230(void);
extern void __stdcall FUN_005dbd90(void);

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;

__declspec(naked) void __stdcall FUN_005dafe0(void *param)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [edi + 0x17c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x180]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x184]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x188]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x18c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x190]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x194]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x198]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x19c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1a0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1a4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1a8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1ac]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1b0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1b4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1b8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1bc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1c0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x1c4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x1d0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1d4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1d8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1dc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1e0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f1]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f2]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f9]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2fa]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x2fc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x300]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x304]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x30a]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        lea     ebx, [edi + 0x1c8]
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jz      L_b267
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [esp + 0x10]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
    L_b267:
        lea     ebx, [edi + 0x1e4]
        mov     ebp, 0x3c
    L_b272:
        mov     eax, dword ptr [esi]
        push    0x4
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        add     ebx, 0x4
        dec     ebp
        jnz     L_b272
        mov     ecx, dword ptr [edi + 0x2e4]
        test    ecx, ecx
        jz      L_b292
        push    esi
        call    FUN_0064b3b0
    L_b292:
        mov     eax, dword ptr [DAT_007f268c]
        mov     esi, dword ptr [edi + 0x170]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_b2c5
        mov     esi, dword ptr [esi + 0x3d4]
        mov     ecx, edi
        call    FUN_005dbd90
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        fstp    dword ptr [esi + 0x190]
    L_b2c5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
