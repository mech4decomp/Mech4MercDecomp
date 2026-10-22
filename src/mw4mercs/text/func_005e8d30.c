/*
 * FUN_005e8d30 (609 B) - BeamEntity constructor. Calls base ctor FUN_004d9940,
 * initializes sub-objects (0x174, 0x194, 0x1b0), registers resources, and
 * copies a large block of fields from param_2 into this.
 *
 * __thiscall (ECX = this), 4 stack params, RET 0x10. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d9940(void);
extern void FUN_0041fc80(void);
extern void FUN_00621fd0(void);
extern void FUN_004cdfa0(void);
extern void FUN_004ceeb0(void);
extern void FUN_00412570(void);
extern void FUN_00416b60(void);
extern void FUN_004084e0(void *p);
extern void FUN_0041fcd0(void);
extern void FUN_0041fd80(void);
extern void FUN_0041c830(void);
extern void FUN_005e91e0(void);
extern void FUN_00707e70(void);

__declspec(naked) void *__stdcall FUN_005e8d30(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b8d88;
extern int DAT_007b8d90;
extern int DAT_007b8d8c;
extern int DAT_007dc694;
extern int DAT_007dc696;
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1C]
        push    eax
        push    ecx
        push    ebp
        push    edx
        mov     ecx, esi
        call    FUN_004d9940
        lea     ebx, [esi + 0x174]
        push    0
        mov     ecx, ebx
        call    FUN_0041fc80
        lea     edi, [esi + 0x194]
        push    0
        mov     ecx, edi
        mov     dword ptr [ebx], 0x775540
        call    FUN_0041fc80
        mov     al, byte ptr [ebp + 0x60]
        mov     cx, word ptr [ebp + 0x62]
        mov edx, dword ptr [DAT_007dab44]
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi + 0x1B0]
        mov     byte ptr [edi], 0
        mov     word ptr [edi + 2], 0
        mov     dword ptr [esi], 0x7897A8
        mov     word ptr [edi + 2], cx
        mov ecx, dword ptr [DAT_007dab40]
        mov     byte ptr [edi], al
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xC]
        xor     ecx, 0x85739531
        cmp     byte ptr [ecx + 0x17], 1
        jnz     L_005e8dd5
        mov     edx, dword ptr [eax + 0x20]
        push    1
        push    edi
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x225C]
        push    0x18
        call    FUN_00621fd0
    L_005e8dd5:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        push    edi
        mov     ecx, eax
        call    FUN_004ceeb0
        lea     edx, [ebp + 0x64]
        mov     edi, eax
        push    edx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esi + 0x1B4], edi
        call    FUN_00412570
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [edi + 0x28C]
        call    FUN_00416b60
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L_005e8e41
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_005e8e41
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_005e8e41:
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov ecx, dword ptr [DAT_007b8d88]
        mov eax, dword ptr [DAT_007b8d90]
        mov edx, dword ptr [DAT_007b8d8c]
        lea     edi, [esi + 0x188]
        lea     ebx, [ebp + 0xF0]
        mov     dword ptr [edi], ecx
        mov     cl, byte ptr [ebx]
        mov     dword ptr [edi + 8], eax
        cmp cl, byte ptr [DAT_007dc694]
        mov     dword ptr [edi + 4], edx
        jnz     L_005e8e85
        mov     dx, word ptr [ebx + 2]
        cmp dx, word ptr [DAT_007dc696]
        jz      L_005e8ee6
    L_005e8e85:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jz      L_005e8ee6
        push    ebx
        mov     ecx, eax
        call    FUN_004ceeb0
        test    eax, eax
        jz      L_005e8ee6
        lea     ebx, [esi + 0x194]
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xD8]
        add     eax, 0x80
        push    eax
        lea     edx, [ebp + 0xE4]
        push    edx
        mov     ecx, edi
        call    FUN_0041c830
    L_005e8ee6:
        mov     ecx, dword ptr [ebp + 0xE8]
        mov     eax, dword ptr [ebp + 0xE4]
        mov     edx, dword ptr [ebp + 0xEC]
        mov     dword ptr [esi + 0x180], ecx
        mov     ecx, dword ptr [ebp + 0xF8]
        mov     dword ptr [esi + 0x17C], eax
        mov     eax, dword ptr [ebp + 0xF4]
        mov     dword ptr [esi + 0x1A0], ecx
        mov     cl, byte ptr [ebp + 0x104]
        mov     dword ptr [esi + 0x184], edx
        mov     edx, dword ptr [ebp + 0xFC]
        mov     dword ptr [esi + 0x19C], eax
        mov     eax, dword ptr [ebp + 0x100]
        mov     byte ptr [esi + 0x1B8], cl
        mov     ecx, dword ptr [ebp + 0x110]
        mov     dword ptr [esi + 0x1A4], edx
        mov     edx, dword ptr [ebp + 0x108]
        mov     dword ptr [esi + 0x1A8], eax
        mov     eax, dword ptr [ebp + 0x10C]
        mov     dword ptr [esi + 0x1C0], ecx
        mov     ecx, esi
        mov     dword ptr [esi + 0x1AC], edx
        mov     dword ptr [esi + 0x1BC], eax
        mov     dword ptr [esi + 0x168], 0
        call    FUN_005e91e0
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xEC]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }


}
