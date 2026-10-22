/*
 * FUN_005bb6b0 (348 B) — __fastcall (ECX = param_1), RET.
 *
 * Compares a magic tag at this+0x78 against a global; if different,
 * builds a sub-object, dispatches several virtual methods, and cleans up.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004d1f80(void);
extern void __fastcall FUN_004da920(void);
extern void __fastcall FUN_005347f0(void);
extern void __fastcall FUN_00767400(void);
extern void __fastcall FUN_0041e690(void);
extern void __fastcall FUN_004cec10(void);
extern void __fastcall FUN_004d9910(void);
extern void __fastcall FUN_0041fcd0(void);
extern void __fastcall FUN_004f5030(void);
extern void __fastcall FUN_0041e710(void);
extern void __fastcall FUN_004d21c0(void);

__declspec(naked) void FUN_005bb6b0(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0xF8
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov     cx, word ptr [eax + 0x78]
        cmp cx, word ptr [DAT_007db0ac]
        lea     esi, [eax + 0x78]
        jnz     L1
        mov     dx, word ptr [esi + 2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      L2
L1:
        push    1
        push    esi
        lea     ecx, [esp + 0x34]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0x68]
        test    eax, eax
        jz      L3
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jbe     L3
        push    esi
        call    FUN_004da920
        mov     ecx, dword ptr [edi + 0xD8]
        add     esp, 4
        push    0
        push    -1
        push    2
        push    0
        add     ecx, 0x20
        push    ecx
        push    esi
        push    0x800002
        push    eax
        push    0
        push    2
        push    0x90
        lea     ecx, [esp + 0x9C]
        call    FUN_005347f0
        push    0x8BD5E8
        lea     ecx, [esp + 0xD4]
        call    FUN_00767400
        push    0x8BD5E8
        lea     ecx, [esp + 0xEC]
        call    FUN_00767400
        mov     edx, dword ptr [esp + 0x70]
        push    0
        push    edx
        lea     eax, [esp + 0x78]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 8], cl
        mov     dx, word ptr [eax + 2]
        push    0
        lea     eax, [esp + 0xC]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     word ptr [esp + 0x16], dx
        call    FUN_004d9910
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x1C]
        add     esp, 0xC
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        push    esi
        lea     ecx, [edi + 0x26C]
        call    FUN_0041fcd0
        push    edi
        mov     ecx, esi
        call    FUN_004f5030
        mov     ecx, dword ptr [esi + 0xE0]
        mov     eax, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx + 0x48]
        lea     ecx, [esp + 0xC]
        call    FUN_0041e710
L3:
        lea     ecx, [esp + 0x2C]
        call    FUN_004d21c0
L2:
        pop     edi
        pop     esi
        add     esp, 0xF8
        ret
    }


}
