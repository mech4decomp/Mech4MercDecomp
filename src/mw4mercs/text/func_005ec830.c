/*
 * FUN_005ec830 (606 B) — __thiscall method (ECX = this), RET 0x14.
 *
 * Initializes sub-objects, then performs a series of state checks
 * and updates (vtable dispatch, global lookups, FPU-free logic).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0040c410(void *p);
extern void __stdcall FUN_00421100(void *p);
extern void __stdcall FUN_0040c5d0(void *p);
extern void __stdcall FUN_004e8dc0(void *a, void *b);
extern void __stdcall FUN_0041c830(void *a, void *b);
extern void __fastcall FUN_005f07c0(void *p);
extern void __stdcall FUN_00415230(void *a, void *b);
extern void __stdcall FUN_00544e30(void *p);

__declspec(naked) void __stdcall FUN_005ec830(void *p1, void *p2, void *p3, void *p4, void *p5)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db098;
extern int DAT_007b8d88;
extern int DAT_007b8d8c;
extern int DAT_007b8d90;
extern int DAT_007f1f84;
__asm {
sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        mov     cl, byte ptr [edi + 0xc]
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, dword ptr [edi + 0x10]
        mov     ebx, dword ptr [edi]
        mov     byte ptr [esi + 0x1ec], cl
        lea     ebp, [esi + 0x1f8]
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esi + 0x1f4], eax
        mov     dword ptr [esi + 0x1f0], edx
        call    FUN_0040c410
        lea     eax, [ebx + 0xc]
        push    eax
        lea     ecx, [ebp + 0xc]
        call    FUN_00421100
        mov     ecx, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [edi + 0x4]
        mov     dword ptr [ebp + 0x18], ecx
        push    edx
        lea     ecx, [esi + 0x214]
        call    FUN_0040c410
        mov     edi, dword ptr [esi + 0x1f0]
        test    edi, edi
        jz      L931
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x1c]
        xor     edx, 0x85739531
        cmp     edi, edx
        jz      L931
        mov ecx, dword ptr [DAT_007db098]
        mov     al, byte ptr [edi + 0x14]
        cmp     al, byte ptr [ecx + 0x28]
        jz      L931
        mov     edx, dword ptr [edi + 0x4]
        cmp     dword ptr [edx], 0x421
        jnz     L90C
        push    0x7b8d88
        lea     ecx, [esp + 0x14]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esi + 0x1e0]
        mov     edx, dword ptr [ecx + 0x18]
        lea     eax, [esp + 0x10]
        push    eax
        push    edx
        call    FUN_004e8dc0
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esi + 0x228]
        call    FUN_0041c830
        jmp     L941
L90C:
        mov edx, dword ptr [DAT_007b8d88]
        mov eax, dword ptr [DAT_007b8d8c]
        mov ecx, dword ptr [DAT_007b8d90]
        mov     dword ptr [esi + 0x228], edx
        mov     dword ptr [esi + 0x22c], eax
        mov     dword ptr [esi + 0x230], ecx
        jmp     L941
L931:
        push    0x7b8d88
        lea     ecx, [esi + 0x228]
        call    FUN_0040c410
L941:
        mov     eax, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xb8]
        test    al, al
        jz      L970
        mov     ecx, esi
        call    FUN_005f07c0
        mov     edi, eax
        test    edi, edi
        jz      L934
        mov eax, dword ptr [DAT_007f1f84]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L934
        mov     ebx, dword ptr [edi + 0x5d0]
        cmp     ebx, -0x1
        jz      L9DB
        mov ecx, dword ptr [DAT_007dab44]
        mov     ebp, dword ptr [ecx]
        mov edi, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [esi + 0x78]
        xor     ebp, edi
        lea     edi, [esi + 0x78]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        mov     ecx, dword ptr [ecx + 0x30]
        lea     edx, [ebx + ebx*0x8]
        lea     eax, [ebx + edx*0x4]
        mov     edx, dword ptr [ebp + 0xc]
        lea     eax, [eax + eax*0x2]
        lea     eax, [eax + eax*0x4]
        shl     eax, 0x2
        sub     eax, ebx
        add     ecx, eax
        mov     eax, dword ptr [edi]
        xor     edx, 0x85739531
        lea     ebx, [edx + ecx*0x4 + 0x206084]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x4c]
        add     dword ptr [ebx], ecx
        jmp     L934
L9DB:
        mov     ecx, esi
        call    FUN_005f07c0
        mov edx, dword ptr [DAT_007dab44]
        mov edi, dword ptr [DAT_007dab40]
        mov     ebp, dword ptr [edx]
        xor     ebx, ebx
        mov     bl, byte ptr [eax + 0x14]
        mov     eax, dword ptr [esi + 0x78]
        xor     ebp, edi
        lea     edi, [esi + 0x78]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax + 0x30]
        mov     ecx, ebx
        shl     ecx, 0x7
        add     ecx, ebx
        shl     ecx, 0x3
        sub     ecx, ebx
        lea     eax, [edx + ecx*0x2]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [edi]
        xor     ecx, 0x85739531
        lea     ebx, [ecx + eax*0x4 + 0x3618]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [eax + 0x4c]
        add     ecx, eax
        mov     dword ptr [ebx], ecx
L934:
        mov     ecx, esi
        call    FUN_005f07c0
        mov     cl, byte ptr [eax + 0xdc]
        test    cl, cl
        jz      L970
        mov ecx, dword ptr [DAT_007dab44]
        mov     edi, dword ptr [ecx]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, esi
        xor     edi, edx
        call    FUN_005f07c0
        mov     ecx, dword ptr [edi + 0xc]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x14]
        xor     ecx, 0x85739531
        push    edx
        call    FUN_00544e30
L970:
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        add     esi, 0x1e0
        push    esi
        push    0x6
        call    dword ptr [eax + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x14
    }


}
