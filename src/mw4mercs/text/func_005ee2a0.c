/*
 * FUN_005ee2a0 (416 B) — __thiscall method (ECX = this), RET 0x1c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_004da920(void);
extern void __stdcall FUN_0041fde0(void);
extern void __stdcall FUN_004ea0f0(void);
extern void __stdcall FUN_00419460(void);
extern void __stdcall FUN_0041e690(void);
extern void __stdcall FUN_004cec10(void);
extern void __stdcall FUN_004d9910(void);
extern void __stdcall FUN_0041e710(void);
extern void __stdcall FUN_004d21c0(void);

__declspec(naked) void __stdcall FUN_005ee2a0(void *p1, void *p2, void *p3,
                                              void *p4, void *p5, void *p6,
                                              void *p7)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        sub     esp, 0xf8
        push    ebx
        push    esi
        xor ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x1c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        lea     ebx, [eax + 0x28]
        mov     ax, word ptr [ebx]
        cmp ax, word ptr [DAT_007db0ac]
        jnz     LE2E6
        mov     cx, word ptr [ebx + 0x2]
        cmp cx, word ptr [DAT_007db0ae]
        jz      LE435
LE2E6:
        push    ebp
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0xcc]
        call    FUN_004d1f80
        push    ebx
        call    FUN_004da920
        add     esp, 0x4
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x74]
        rep     movsd
        mov     esi, 0x2
        push    esi
        xor     edi, edi
        push    edi
        push    0x1
        lea     edx, [esp + 0x11c]
        push    edx
        lea     ecx, [esp + 0x84]
        mov     ebp, eax
        call    FUN_0041fde0
        mov     ecx, dword ptr [esp + 0x120]
        mov     eax, dword ptr [esp + 0x11c]
        mov     edx, dword ptr [esp + 0x124]
        mov     dword ptr [esp + 0x90], ecx
        push    0x7dc694
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x84], eax
        mov     dword ptr [esp + 0xa4], edx
        mov     dword ptr [esp + 0x18], 0x60
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x2c], esi
        call    FUN_004ea0f0
        lea     eax, [esp + 0x74]
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_00419460
        mov     cx, word ptr [ebx]
        mov     eax, dword ptr [esp + 0x14]
        mov     dx, word ptr [ebx + 0x2]
        push    edi
        mov     word ptr [esp + 0x6c], cx
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0xb0]
        mov     dword ptr [esp + 0x6c], 0x1
        mov     dword ptr [esp + 0x70], edi
        mov     word ptr [esp + 0x76], dx
        mov     dword ptr [esp + 0x78], edi
        mov     dword ptr [esp + 0x7c], 0xffffffff
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], dl
        mov     ax, word ptr [eax + 0x2]
        push    edi
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0xac]
        push    edx
        mov     word ptr [esp + 0x1e], ax
        call    FUN_004d9910
        mov     ecx, dword ptr [esp + 0x118]
        mov     esi, eax
        mov     eax, dword ptr [ecx]
        add     esp, 0xc
        push    esi
        call    dword ptr [eax + 0x28]
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x48]
        lea     ecx, [esp + 0xa4]
        call    FUN_0041e710
        lea     ecx, [esp + 0xc4]
        call    FUN_004d21c0
        pop     edi
        pop     ebp
LE435:
        pop     esi
        pop     ebx
        add     esp, 0xf8
        ret     0x1c
    }


}
