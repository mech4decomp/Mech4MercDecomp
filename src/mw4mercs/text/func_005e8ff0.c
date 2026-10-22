/*
 * FUN_005e8ff0 (489 B) - BeamEntity constructor (alternate). Calls base ctor
 * FUN_004d94d0, initializes sub-objects (0x1b0, 0x174, 0x188, 0x194), and
 * copies a large block of fields from param_1 into this.
 *
 * __thiscall (ECX = this), 2 stack params, RET 8. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d94d0(void);
extern void FUN_004cdfa0(void);
extern void FUN_004ceeb0(void);
extern void FUN_00412570(void);
extern void FUN_00416b60(void);
extern void FUN_004084e0(void *p);
extern void FUN_0041fcb0(void);
extern void FUN_0041fcd0(void);
extern void FUN_0041fd80(void);
extern void FUN_0041c830(void);
extern void FUN_005e91e0(void);
extern void FUN_00707e70(void);

__declspec(naked) void *__stdcall FUN_005e8ff0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b8d88;
extern int DAT_007b8d90;
extern int DAT_007b8d8c;
extern int DAT_007dc694;
extern int DAT_007dc696;
__asm {
mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    eax
        mov     esi, ecx
        push    edi
        call    FUN_004d94d0
        mov     cl, byte ptr [edi + 0x60]
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        mov     dx, word ptr [edi + 0x62]
        mov     byte ptr [esi + 0x1B0], cl
        mov ecx, dword ptr [DAT_007dab40]
        lea     ebx, [esi + 0x1B0]
        xor     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx]
        mov     word ptr [ebx + 2], dx
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        push    ebx
        mov     ecx, eax
        call    FUN_004ceeb0
        lea     edx, [edi + 0x64]
        mov     ebx, eax
        push    edx
        lea     ecx, [esp + 0x1C]
        mov     dword ptr [esi + 0x1B4], ebx
        call    FUN_00412570
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [ebx + 0x28C]
        call    FUN_00416b60
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_005e9088
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_005e9088
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_005e9088:
        lea     ebx, [esi + 0x174]
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    ebp
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov ecx, dword ptr [DAT_007b8d88]
        mov eax, dword ptr [DAT_007b8d90]
        mov edx, dword ptr [DAT_007b8d8c]
        lea     ebx, [esi + 0x188]
        lea     ebp, [edi + 0xF0]
        mov     dword ptr [ebx], ecx
        mov     cl, byte ptr [ebp]
        mov     dword ptr [ebx + 8], eax
        cmp cl, byte ptr [DAT_007dc694]
        mov     dword ptr [ebx + 4], edx
        jnz     L_005e90da
        mov     dx, word ptr [ebp + 2]
        cmp dx, word ptr [DAT_007dc696]
        jz      L_005e913c
    L_005e90da:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebp]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jz      L_005e913c
        push    ebp
        mov     ecx, eax
        call    FUN_004ceeb0
        test    eax, eax
        jz      L_005e913c
        lea     ebp, [esi + 0x194]
        push    eax
        mov     ecx, ebp
        call    FUN_0041fcd0
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xD8]
        add     eax, 0x80
        push    eax
        lea     edx, [edi + 0xE4]
        push    edx
        mov     ecx, ebx
        call    FUN_0041c830
    L_005e913c:
        mov     eax, dword ptr [edi + 0xE4]
        mov     ecx, dword ptr [edi + 0xE8]
        mov     edx, dword ptr [edi + 0xEC]
        mov     dword ptr [esi + 0x17C], eax
        mov     eax, dword ptr [edi + 0xF4]
        mov     dword ptr [esi + 0x180], ecx
        mov     ecx, dword ptr [edi + 0xF8]
        mov     dword ptr [esi + 0x184], edx
        mov     edx, dword ptr [edi + 0xFC]
        mov     dword ptr [esi + 0x19C], eax
        mov     eax, dword ptr [edi + 0x100]
        mov     dword ptr [esi + 0x1A0], ecx
        mov     cl, byte ptr [edi + 0x104]
        mov     dword ptr [esi + 0x1A4], edx
        mov     edx, dword ptr [edi + 0x108]
        mov     dword ptr [esi + 0x1A8], eax
        mov     eax, dword ptr [edi + 0x10C]
        mov     byte ptr [esi + 0x1B8], cl
        mov     ecx, esi
        mov     dword ptr [esi + 0x1AC], edx
        mov     dword ptr [esi + 0x1BC], eax
        mov     dword ptr [esi + 0x168], 0
        call    FUN_005e91e0
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xEC]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }


}
