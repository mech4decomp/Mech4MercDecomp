/*
 * FUN_005db6e0 (784 B) — __thiscall (ECX=this, RET 0x10). Constructor that
 * initializes a large object, copies fields from a source object, and
 * performs a hash-based lookup to set up an AI reference.
 *
 * Match: target 100%
 */

extern void __stdcall FUN_004f4580(void);
extern void __stdcall FUN_0041fc80(void);
extern void __stdcall FUN_00547ba0(void);
extern void __stdcall FUN_005634e0(void);
extern void __stdcall FUN_00637ac0(void);
extern void __stdcall FUN_006f4950(void);
extern void __stdcall FUN_005ddbf0(void);
extern void __stdcall FUN_004fcb30(void);
extern void __stdcall FUN_005dcb70(void);
extern void __stdcall FUN_00415230(void);
extern void __stdcall FUN_005dbd90(void);
extern void __stdcall FUN_006f49a0(void);

/* extern data symbols for absolute-memory loads */
extern int DAT_007f2450;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;

__declspec(naked) void __stdcall FUN_005db6e0(void *p1, void *p2, void *p3, void *p4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, ebp
        call    FUN_004f4580
        mov     eax, 0x40a00000
        xor     edi, edi
        lea     esi, [ebp + 0x1c8]
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp + 0x1b8], eax
        mov     dword ptr [ebp + 0x1bc], eax
        mov     dword ptr [ebp + 0x1c0], edi
        mov     byte ptr [ebp + 0x1c4], 0x0
        call    FUN_0041fc80
        or      eax, 0xffffffff
        mov     dword ptr [ebp + 0x1d4], eax
        mov     dword ptr [ebp + 0x1dc], eax
        lea     eax, [esp + 0x1c]
        mov     dword ptr [esi], 0x773328
        lea     esi, [ebp + 0x2d4]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esi + 0x8]
        mov     byte ptr [ebp + 0x1d0], 0x0
        mov     dword ptr [ebp + 0x1d8], edi
        mov     dword ptr [ebp + 0x1e0], edi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esp + 0x24], edi
        call    FUN_00547ba0
        push    0x8
        mov     ecx, esi
        call    FUN_005634e0
        mov     edx, dword ptr [esi + 0x4]
        mov     word ptr [ebp + 0x310], 0xffff
        mov     word ptr [ebp + 0x312], di
        mov     byte ptr [edx], 0x0
        mov     dword ptr [ebp + 0x2e0], edi
        mov     dword ptr [ebp + 0x2e4], edi
        mov     byte ptr [ebp + 0x2f0], 0x1
        mov     byte ptr [ebp + 0x2f1], 0x0
        mov     byte ptr [ebp + 0x2f2], 0x1
        mov     dword ptr [ebp + 0x2f4], edi
        mov     byte ptr [ebp + 0x2f8], 0x0
        mov     byte ptr [ebp + 0x2f9], 0x0
        mov     byte ptr [ebp + 0x2fa], 0x1
        mov     dword ptr [ebp + 0x2fc], edi
        mov     dword ptr [ebp + 0x304], 0xbf800000
        mov     byte ptr [ebp + 0x30a], 0x0
        mov     dword ptr [ebp + 0x30c], edi
        mov     dword ptr [ebp], 0x78831c
        call    FUN_00637ac0
        mov     eax, dword ptr [DAT_007f2450]
        push    eax
        call    FUN_006f4950
        mov     eax, dword ptr [ebx + 0x110]
        mov     edx, dword ptr [ebx + 0x118]
        mov     dword ptr [ebp + 0x2e8], edi
        lea     esi, [ebx + 0xe8]
        lea     edi, [ebp + 0x1e4]
        mov     ecx, 0xa
        rep movsd
        mov     ecx, dword ptr [ebx + 0x114]
        mov     byte ptr [ebp + 0x308], 0x0
        mov     byte ptr [ebp + 0x309], 0x0
        mov     byte ptr [ebp + 0x178], 0x0
        mov     dword ptr [ebp + 0x17c], eax
        mov     dword ptr [ebp + 0x180], ecx
        mov     dword ptr [ebp + 0x184], edx
        mov     esi, dword ptr [ebx + 0x11c]
        mov     dword ptr [ebp + 0x188], esi
        mov     esi, dword ptr [ebx + 0x120]
        mov     dword ptr [ebp + 0x18c], esi
        mov     esi, dword ptr [ebx + 0x124]
        mov     dword ptr [ebp + 0x190], esi
        mov     esi, dword ptr [ebx + 0x128]
        mov     dword ptr [ebp + 0x194], esi
        mov     esi, dword ptr [ebx + 0x12c]
        mov     dword ptr [ebp + 0x198], esi
        mov     esi, dword ptr [ebx + 0x130]
        mov     dword ptr [ebp + 0x19c], esi
        mov     esi, dword ptr [ebx + 0x134]
        mov     dword ptr [ebp + 0x1a4], esi
        mov     esi, dword ptr [ebx + 0x138]
        mov     dword ptr [ebp + 0x1b4], edx
        lea     edx, [ebx + 0x68]
        mov     dword ptr [ebp + 0x1ac], eax
        cmp     byte ptr [edx], 0x0
        mov     dword ptr [ebp + 0x1a0], esi
        mov     esi, dword ptr [ebx + 0x13c]
        mov     dword ptr [ebp + 0x1a8], esi
        mov     dword ptr [ebp + 0x1b0], ecx
        jz      L_b8fc
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, edx
        push    ecx
        push    edx
        lea     ecx, [ebp + 0x2d4]
        call    FUN_005ddbf0
        jmp     L_b905
    L_b8fc:
        mov     ecx, dword ptr [ebp + 0x2d4]
        mov     byte ptr [ecx], 0x0
    L_b905:
        mov     ebx, dword ptr [ebx + 0x64]
        cmp     ebx, -0x1
        jz      L_b9ca
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     edx, dword ptr [DAT_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17fc]
        test    al, al
        mov     dword ptr [ebp + 0x170], esi
        jz      L_b9a2
        push    esi
        mov     ecx, ebp
        call    FUN_005dcb70
        mov     eax, dword ptr [DAT_007f268c]
        mov     esi, dword ptr [ebp + 0x170]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_b9ca
        mov     byte ptr [esi + 0x300], 0x1
        mov     esi, dword ptr [esi + 0x3d4]
        test    esi, esi
        jz      L_b9ca
        mov     ecx, ebp
        call    FUN_005dbd90
        mov     dword ptr [esp + 0x20], eax
        fild    dword ptr [esp + 0x20]
        fstp    dword ptr [esi + 0x190]
        jmp     L_b9ca
    L_b9a2:
        mov     eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_b9bb
        mov     byte ptr [esi + 0x300], 0x1
    L_b9bb:
        mov     ecx, dword ptr [ebp + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x1
        call    dword ptr [eax + 0x4]
    L_b9ca:
        mov     eax, dword ptr [ebp + 0x170]
        test    eax, eax
        jnz     L_b9db
        mov     byte ptr [ebp + 0x30a], 0x0
    L_b9db:
        mov     byte ptr [ebp + 0x300], 0x0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
