/*
 * FUN_005aa0d0 (498 B) — Large __fastcall/__thiscall method (ECX = this).
 *
 * Complex method: reads a sub-object vtable, conditionally builds a
 * parameter block, calls FUN_004ea0f0 / FUN_005922e0 / FUN_0041e690 /
 * FUN_004d9910 and an indirect virtual call, then FUN_0041e710.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004da920(void);
extern void FUN_00767400(void);
extern void FUN_004ea0f0(void);
extern void FUN_005922e0(void);
extern void FUN_0041e690(void);
extern void FUN_004cec10(void);
extern void FUN_004d9910(void);
extern void FUN_0041e710(void);

__declspec(naked) void FUN_005aa0d0(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_0077d030;
extern int DAT_007b8d68;
extern int DAT_007b8d6c;
extern int DAT_007b8d70;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x158
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        mov     byte ptr [ebx + 0x274], 0
        call    dword ptr [eax + 0x4]
        mov     cx, word ptr [eax + 0x80]
        cmp cx, word ptr [DAT_007db0ac]
        lea     ebp, [eax + 0x80]
        mov     dword ptr [esp + 0x18], eax
        jnz     L117
        mov     dx, word ptr [ebp + 0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      L2B7
L117:
        push    ebp
        call    FUN_004da920
        add     esp, 4
        push    0x8bd5e8
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0x38]
        call    FUN_00767400
        mov     eax, dword ptr [ebx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        fld     dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        fadd dword ptr [DAT_0077d030]
        mov     edx, eax
        mov     dword ptr [esp + 0x54], eax
        mov eax, dword ptr [DAT_007b8d68]
        mov     ecx, 0xc
        fstp    dword ptr [esp + 0x5c]
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x64]
        rep movsd
        fstp    dword ptr [esp + 0x70]
        mov     ecx, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x80], ecx
        mov ecx, dword ptr [DAT_007b8d6c]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [ebx + 0x238]
        push    eax
        mov     eax, dword ptr [ebx + 0x24c]
        mov     dword ptr [esp + 0x94], edx
        mov edx, dword ptr [DAT_007b8d70]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [ebx + 0x254]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x248]
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, dword ptr [ebx + 0x250]
        push    edx
        push    eax
        push    ecx
        push    ecx
        add     ebx, 0x230
        mov     ecx, esp
        push    ebx
        mov     dword ptr [esp + 0x50], 0
        mov     dword ptr [esp + 0x54], 0xc16ccccd
        mov     dword ptr [esp + 0x58], 0
        call    FUN_004ea0f0
        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [edx + 0x9c]
        push    0x44960000
        push    0
        push    eax
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, dword ptr [esp + 0x3c]
        lea     edx, [esp + 0x44]
        push    edx
        push    0
        push    -1
        push    5
        push    0
        lea     eax, [esp + 0xa0]
        push    eax
        push    ebp
        push    2
        push    ecx
        push    0
        push    2
        push    0xc8
        lea     ecx, [esp + 0x10c]
        call    FUN_005922e0
        mov     edx, dword ptr [esp + 0xb4]
        push    0
        push    edx
        lea     eax, [esp + 0xbc]
        push    eax
        lea     ecx, [esp + 0xa0]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 0x2]
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x9c]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004d9910
        mov ecx, dword ptr [DAT_007dab44]
        mov     ebx, dword ptr [ecx]
        mov edx, dword ptr [DAT_007dab40]
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        lea     ecx, [esp + 0x94]
        call    FUN_0041e710
L2B7:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x158
        ret
    }


}
