/*
 * FUN_0065C4E0 (519 B) — __fastcall (ECX = param_1). Looks up an object by
 * id (FUN_004fcb30), filters by flags + FUN_00415230, computes a vector
 * via FUN_0065c180, does a squared-length comparison, and stores the result
 * into param_1. Ends with a virtual call (call [eax+0x1bc]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2030;
extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0065c180(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_005c1720(void);

__declspec(naked) void __fastcall FUN_0065c4e0(void)
{
    __asm {
        sub     esp, 0x48
        push    ebx
        mov     ebx, dword ptr [g_7f2030]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x14]
        cmp     ecx, -0x2
        push    edi
        jz      L_c6e0
        mov     eax, dword ptr [g_7dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_7dab40]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     edi, eax
        test    edi, edi
        jz      L_c6e0
        mov     ecx, dword ptr [edi + 0x10]
        shr     ecx, 0x13
        and     cl, 0x1
        cmp     cl, 0x1
        jz      L_c6e0
        mov     ecx, dword ptr [edi + 0x4]
        push    ebx
        call    FUN_00415230
        test    al, al
        jz      L_c6e0
        mov     ebx, dword ptr [esi + 0x4]
        push    0x3ff33333
        push    0x1
        lea     edx, [esp + 0x50]
        push    edi
        push    edx
        mov     dword ptr [edi + 0x514], ebx
        call    FUN_0065c180
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x34], ecx
        mov     edx, dword ptr [eax + 0x4]
        push    0x3ff33333
        push    0x0
        mov     dword ptr [esp + 0x40], edx
        mov     eax, dword ptr [eax + 0x8]
        lea     ecx, [esp + 0x60]
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x4c], eax
        call    FUN_0065c180
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x50], edx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x54], ecx
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x58], edx
        mov     eax, dword ptr [ebx + 0x170]
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        add     esp, 0x20
        push    ecx
        lea     ecx, [esp + 0x4c]
        call    FUN_00419480
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040ca10
        mov     ecx, dword ptr [ebx + 0x170]
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x3c], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x40], ecx
        mov     edx, dword ptr [eax + 0x2c]
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x4c], edx
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        lea     ebx, [esi + 0x24]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st(0)
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_c686
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        push    0x3f000000
        push    0x1
        mov     dword ptr [ebx], edx
        lea     edx, [esp + 0x50]
        push    edi
        push    edx
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [ebx + 0x8], ecx
        call    FUN_0065c180
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        add     esp, 0x10
        mov     dword ptr [esi + 0x30], ecx
        mov     dword ptr [esi + 0x34], edx
        mov     dword ptr [esi + 0x38], eax
        jmp     L_c6b0
L_c686:
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, ebx
        call    FUN_0040c410
        push    0x3f000000
        push    0x0
        lea     edx, [esp + 0x50]
        push    edi
        push    edx
        call    FUN_0065c180
        add     esp, 0x10
        push    eax
        lea     ecx, [esi + 0x30]
        call    FUN_0040c410
L_c6b0:
        mov     ecx, dword ptr [ebx + 0x4]
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [ebx + 0x8]
        lea     edi, [esi + 0x18]
        mov     dword ptr [edi + 0x4], ecx
        mov     esi, dword ptr [esi + 0x4]
        push    0x1
        mov     ecx, esi
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 0x8], edx
        call    FUN_005c1720
        mov     eax, dword ptr [esi]
        push    0x0
        push    0x1
        push    0x3c
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x1bc]
L_c6e0:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x48
        ret
    }
}
