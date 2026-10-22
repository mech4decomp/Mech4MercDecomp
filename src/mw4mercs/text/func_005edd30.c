/*
 * FUN_005edd30 (454 B) — __thiscall method (ECX = this), RET 0x1c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00502ef0(void);
extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_004da920(void);
extern void __stdcall FUN_0041fde0(void);
extern void __stdcall FUN_005347f0(void);
extern void __stdcall FUN_00767400(void);
extern void __stdcall FUN_0041e690(void);
extern void __stdcall FUN_004cec10(void);
extern void __stdcall FUN_004d9910(void);
extern void __stdcall FUN_0041e710(void);
extern void __stdcall FUN_004d21c0(void);

__declspec(naked) void __stdcall FUN_005edd30(void *p1, void *p2, void *p3,
                                              void *p4, void *p5, void *p6,
                                              void *p7)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x12c
        mov     eax, dword ptr [ecx + 0x78]
        push    esi
        add     ecx, 0x78
        push    edi
        call    dword ptr [eax + 0x4]
        mov esi, dword ptr [DAT_007db0ac]
        mov di, word ptr [DAT_007db0ae]
        lea     ecx, [eax + 0x50]
        mov     word ptr [esp + 0x8], si
        mov     word ptr [esp + 0xa], di
        cmp     word ptr [ecx], si
        jnz     LDD66
        cmp     word ptr [ecx + 0x2], di
        jz      LDD90
LDD66:
        mov     edx, dword ptr [esp + 0x150]
        cmp     dl, 0x18
        jnc     LDD90
        push    edx
        push    ecx
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_00502ef0
        mov esi, dword ptr [DAT_007db0ac]
        mov di, word ptr [DAT_007db0ae]
        add     esp, 0xc
        jmp     LDDA2
LDD90:
        mov     dx, word ptr [eax + 0x5c]
        mov     word ptr [esp + 0x8], dx
        mov     ax, word ptr [eax + 0x5e]
        mov     word ptr [esp + 0xa], ax
LDDA2:
        cmp     word ptr [esp + 0x8], si
        jnz     LDDB4
        cmp     word ptr [esp + 0xa], di
        jz      LDEEB
LDDB4:
        push    ebx
        push    0x1
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0xfc]
        call    FUN_004d1f80
        lea     edx, [esp + 0xc]
        push    edx
        call    FUN_004da920
        add     esp, 0x4
        push    0x2
        push    0x0
        mov     ebx, eax
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x1c]
        push    0x1
        lea     eax, [esp + 0x148]
        rep     movsd
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041fde0
        mov     ecx, dword ptr [esp + 0x148]
        mov     edx, dword ptr [esp + 0x14c]
        mov     eax, dword ptr [esp + 0x150]
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        mov     dword ptr [esp + 0x30], ecx
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     dword ptr [esp + 0x44], edx
        lea     edx, [esp + 0x20]
        push    edx
        push    0x2
        push    ebx
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [esp + 0x90]
        mov     dword ptr [esp + 0x6c], eax
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [esp + 0xc8]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0xe0]
        call    FUN_00767400
        mov     eax, dword ptr [esp + 0x64]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x6c]
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x0
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x4c]
        push    edx
        mov     word ptr [esp + 0x1e], ax
        call    FUN_004d9910
        mov     esi, eax
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x44]
        call    FUN_0041e710
        lea     ecx, [esp + 0xf4]
        call    FUN_004d21c0
        pop     ebx
LDEEB:
        pop     edi
        pop     esi
        add     esp, 0x12c
        ret     0x1c
    }


}
