/*
 * FUN_005abe10 (390 B) — __thiscall constructor, RET 0x18 (6 stack params).
 *
 * Initializes a HeatManager-style object: calls FUN_004d5b10(DAT_007f20c8),
 * constructs two sub-objects at +0x3c and +0x44 (FUN_0041fc80), sets vtables,
 * computes a clamped float field, calls FUN_00707e70 (rand) several times to
 * init doubles, calls FUN_005acc20/FUN_005acc60, then FUN_004d1f80 and four
 * indirect calls through a vtable at [edx+0x20], and FUN_004d21c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d5b10(void);
extern void FUN_0041fc80(void);
extern void FUN_00707e70(void);
extern void FUN_005acc20(void);
extern void FUN_005acc60(void);
extern void FUN_004d1f80(void);
extern void FUN_004d21c0(void);

__declspec(naked) void *__stdcall FUN_005abe10(void)
{
    

extern int DAT_007f20c8;
extern int DAT_0076c5b0;
extern int DAT_0076f5d8;
__asm {
        mov eax, dword ptr [DAT_007f20c8]
        sub     esp, 0x44
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d5b10
        xor     ebx, ebx
        lea     edi, [esi + 0x3c]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x14], ebx
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac
        lea     edi, [esi + 0x44]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        fld     dword ptr [esp + 0x58]
        fcomp dword ptr [DAT_0076c5b0]
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [edi], 0x77ceac
        mov     dword ptr [esi], 0x785958
        fnstsw ax
        mov     dword ptr [esi + 0x50], ecx
        mov     dword ptr [esi + 0x4c], edx
        test    ah, 0x1
        jz      L77
        mov     dword ptr [esi + 0x4c], ebx
        jmp     L95
L77:
        fld     dword ptr [esp + 0x54]
        fmul dword ptr [DAT_0076f5d8]
        fld     dword ptr [esp + 0x58]
        fcomp   st(1)
        fnstsw ax
        test    ah, 0x41
        jnz     L93
        fstp    dword ptr [esi + 0x4c]
        jmp     L95
L93:
        fstp    st(0)
L95:
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x60]
        push    ebx
        mov     dword ptr [esi + 0x58], eax
        mov     dword ptr [esi + 0x54], ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x2c]
        push    ebx
        mov     dword ptr [esi + 0x5c], ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x34]
        mov     ecx, esi
        call    FUN_005acc20
        mov     ecx, esi
        call    FUN_005acc60
        mov     edx, dword ptr [esp + 0x64]
        mov     edi, 0x1
        push    ebx
        mov     dword ptr [esi + 0x24], edi
        mov     dword ptr [esi + 0x28], edi
        mov     dword ptr [esi + 0xa0], edx
        mov     byte ptr [esi + 0x10], bl
        mov     byte ptr [esi + 0x60], bl
        mov     byte ptr [esi + 0x61], bl
        mov     byte ptr [esi + 0x62], bl
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x74]
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x7c]
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x84]
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x8c]
        push    ebx
        mov     byte ptr [esi + 0x9c], bl
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x94]
        push    edi
        lea     eax, [esp + 0x6c]
        push    eax
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esi + 0x9d], bl
        call    FUN_004d1f80
        mov     edx, dword ptr [esp + 0xc]
        push    0x4
        lea     ecx, [esi + 0x64]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0xc]
        push    0x4
        lea     eax, [esi + 0x68]
        push    eax
        lea     ecx, [esp + 0x14]
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0xc]
        push    0x4
        lea     eax, [esi + 0x6c]
        push    eax
        lea     ecx, [esp + 0x14]
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0xc]
        push    0x4
        lea     eax, [esi + 0x70]
        push    eax
        lea     ecx, [esp + 0x14]
        call    dword ptr [edx + 0x20]
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esi + 0xa4], ebx
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x44
        ret     0x18
    }


}
