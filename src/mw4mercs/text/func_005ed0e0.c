/*
 * FUN_005ed0e0 (270 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Copy-constructor-like initializer: calls base ctor FUN_004faa50, copies
 * fields from source object (EBX) into this (ESI), and registers properties.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004faa50(void);
extern void *__cdecl FUN_004cdfa0(unsigned char v);
extern void *__fastcall FUN_004ceeb0(void);
extern void __fastcall FUN_005ee4c0(void);

__declspec(naked) void __fastcall FUN_005ed0e0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
mov     eax, dword ptr [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        push    ebx
        call    FUN_004faa50
        mov     ecx, dword ptr [ebx + 0x90]
        mov     edx, dword ptr [ebx + 0x94]
        mov     eax, dword ptr [esi + 0xD8]
        mov     dword ptr [esi + 0x228], ecx
        mov     ecx, dword ptr [eax + 0x2C]
        add     eax, 0x20
        mov     dword ptr [esi + 0x218], ecx
        mov     cl, byte ptr [ebx + 0x98]
        mov     dword ptr [esi + 0x224], edx
        mov     edx, dword ptr [eax + 0x1C]
        mov     eax, dword ptr [eax + 0x2C]
        lea     edi, [ebx + 0x98]
        mov     dword ptr [esi + 0x220], eax
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        mov     byte ptr [esi + 0x230], cl
        xor eax, dword ptr [DAT_007dab40]
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        mov     dword ptr [esi + 0x21C], edx
        mov     dx, word ptr [edi + 0x2]
        mov     word ptr [esi + 0x232], dx
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        push    edi
        mov     ecx, eax
        call    FUN_004ceeb0
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        mov     dword ptr [esi + 0x234], eax
        mov     dword ptr [esi + 0x13C], eax
        call    dword ptr [edx + 0x4]
        mov     cx, word ptr [eax + 0x68]
        add     eax, 0x68
        cmp cx, word ptr [DAT_007db0ac]
        jnz     L_5ed1a7
        mov     dx, word ptr [eax + 0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      L_5ed1ae
L_5ed1a7:
        mov     ecx, esi
        call    FUN_005ee4c0
L_5ed1ae:
        mov     eax, dword ptr [ebx + 0xA0]
        mov     ecx, dword ptr [ebx + 0xA4]
        mov     edx, dword ptr [ebx + 0xA8]
        mov     dword ptr [esi + 0x248], eax
        mov     eax, dword ptr [ebx + 0xAC]
        pop     edi
        mov     dword ptr [esi + 0x244], 0
        mov     dword ptr [esi + 0x24C], ecx
        mov     dword ptr [esi + 0x250], edx
        mov     dword ptr [esi + 0x254], eax
        pop     esi
        pop     ebx
        ret     8
    }


}
