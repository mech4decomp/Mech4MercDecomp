/*
 * FUN_005ed900 (245 B) — __thiscall method (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ee7d0(void);
extern void __stdcall FUN_004d5b70(void *p);

__declspec(naked) void __stdcall FUN_005ed900(void *p1)
{
    

extern int DAT_0076c5b0;
__asm {
mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x44
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        mov     edi, ecx
        fld     dword ptr [edi + 0x248]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L9E2
        mov     ecx, dword ptr [edi + 0x22c]
        push    ebx
        mov     ebx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x54], ecx
        push    ebp
        mov     ebp, dword ptr [edi + 0x238]
        mov     ecx, edi
        call    FUN_005ee7d0
        fld     dword ptr [edi + 0x228]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x10], 0x44
        mov     dword ptr [esp + 0x14], 0x4
        mov     dword ptr [esp + 0x18], 0x2
        mov     dl, byte ptr [ebx + 0x14]
        mov     byte ptr [esp + 0x20], dl
        mov     dx, word ptr [ebx + 0x16]
        mov     word ptr [esp + 0x22], dx
        mov     edx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [esi + 0x20]
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x40], edx
        mov     edx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x44], edx
        mov     dl, byte ptr [edi + 0x230]
        mov     byte ptr [esp + 0x4c], cl
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x28], dl
        mov     dx, word ptr [edi + 0x232]
        mov     byte ptr [esp + 0x2c], al
        mov     eax, dword ptr [esp + 0x58]
        push    ecx
        fstp    dword ptr [esp + 0x28]
        mov     ecx, ebx
        mov     word ptr [esp + 0x2e], dx
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x54], ebp
        call    FUN_004d5b70
        pop     ebp
        pop     ebx
        pop     edi
        pop     esi
        add     esp, 0x44
        ret     4
L9E2:
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0xa8]
        pop     edi
        pop     esi
        add     esp, 0x44
        ret     4
    }


}
