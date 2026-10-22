/*
 * FUN_005ecef0 (403 B) — __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * Constructor that initializes a WeaponMover object: calls base ctor
 * FUN_004fa6d0, initializes a sub-object at this+0x210 (FUN_0041fc80),
 * copies fields from the source object (EDI), and registers properties.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004fa6d0(void);
extern void __fastcall FUN_0041fc80(void);
extern void __cdecl FUN_00621fd0(void);
extern void *__cdecl FUN_004cdfa0(unsigned char v);
extern void *__fastcall FUN_004ceeb0(void);
extern void __fastcall FUN_005ee4c0(void);

__declspec(naked) void __fastcall FUN_005ecef0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1C]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_004fa6d0
        lea     ebp, [esi + 0x210]
        xor     ebx, ebx
        push    ebx
        mov     ecx, ebp
        call    FUN_0041fc80
        mov     eax, dword ptr [edi + 0x90]
        mov     edx, dword ptr [edi + 0x9C]
        mov     dword ptr [esi + 0x228], eax
        mov     eax, dword ptr [edi + 0x94]
        mov     dword ptr [esi + 0x22C], edx
        mov     edx, dword ptr [edi + 0xB0]
        mov     dword ptr [esi + 0x224], eax
        mov     eax, dword ptr [esi + 0xD8]
        mov     dword ptr [ebp], 0x77CEAC
        add     eax, 0x20
        mov     dword ptr [esi + 0x238], edx
        mov     edx, dword ptr [eax + 0xC]
        lea     ecx, [esi + 0x230]
        mov     byte ptr [ecx], bl
        mov     word ptr [ecx + 0x2], bx
        mov     dword ptr [esi + 0x23C], ebx
        mov     dword ptr [esi], 0x789D0C
        mov     dword ptr [esi + 0x218], edx
        mov     edx, dword ptr [eax + 0x1C]
        mov     eax, dword ptr [eax + 0x2C]
        lea     ebp, [edi + 0x98]
        mov     dword ptr [esi + 0x240], ebx
        mov     dword ptr [esi + 0x21C], edx
        mov     dl, byte ptr [ebp]
        mov     dword ptr [esi + 0x220], eax
        mov     ax, word ptr [ebp + 0x2]
        mov     byte ptr [ecx], dl
        mov edx, dword ptr [DAT_007dab44]
        mov     word ptr [ecx + 0x2], ax
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0xC]
        xor     edx, 0x85739531
        cmp     byte ptr [edx + 0x17], 0x1
        jnz     L_5ecfe2
        mov     eax, dword ptr [eax + 0x20]
        push    1
        push    ecx
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x225C]
        push    0x18
        call    FUN_00621fd0
L_5ecfe2:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        xor     edx, edx
        mov     dl, byte ptr [ebp]
        xor     ecx, 0x85739531
        push    edx
        call    FUN_004cdfa0
        push    ebp
        mov     ecx, eax
        call    FUN_004ceeb0
        lea     ecx, [esi + 0x78]
        mov     dword ptr [esi + 0x234], eax
        mov     dword ptr [esi + 0x13C], eax
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        mov     cx, word ptr [eax + 0x68]
        add     eax, 0x68
        cmp cx, word ptr [DAT_007db0ac]
        jnz     L_5ed03d
        mov     dx, word ptr [eax + 0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      L_5ed044
L_5ed03d:
        mov     ecx, esi
        call    FUN_005ee4c0
L_5ed044:
        mov     eax, dword ptr [edi + 0xA0]
        mov     ecx, dword ptr [edi + 0xA4]
        mov     edx, dword ptr [edi + 0xA8]
        mov     dword ptr [esi + 0x248], eax
        mov     eax, dword ptr [edi + 0xAC]
        pop     edi
        mov     dword ptr [esi + 0x254], eax
        mov     dword ptr [esi + 0x244], ebx
        mov     dword ptr [esi + 0x24C], ecx
        mov     dword ptr [esi + 0x250], edx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }


}
