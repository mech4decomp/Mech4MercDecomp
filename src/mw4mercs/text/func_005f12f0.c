/*
 * FUN_005f12f0 (434 B) — __thiscall constructor/initializer.
 *
 * Reads two 16-bit globals into this+0x17c/0x17e, conditionally builds a
 * sub-object, allocates+memcpy's a buffer, wires it into the object, and
 * performs a float comparison to pick a branch. Complex stack-frame setup
 * (SUB ESP,0xB0).
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void *a, int b);
extern void __stdcall FUN_004d21c0(void);
extern void *__stdcall FUN_004084d0(int n);
extern void __stdcall FUN_004084e0(void *p);
extern void __stdcall FUN_0041e690(void *p, int a, int b);
extern void __stdcall FUN_0041e710(void);
extern void __stdcall FUN_004f4370(void *p);
extern int  __stdcall FUN_005f0be0(int a, int b);
extern void __stdcall FUN_0054bba0(void);

__declspec(naked) void __stdcall FUN_005f12f0(void *param)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_0076c5b0;
extern int DAT_007db090;
__asm {
sub     esp, 0xB0
        mov ax, word ptr [DAT_007db0ac]
        push    ebp
        mov     ebp, ecx
        mov cx, word ptr [DAT_007db0ae]
        mov     word ptr [ebp + 0x17C], ax
        mov     eax, dword ptr [ebp + 0x10]
        and     eax, 7
        cmp     eax, 4
        mov     byte ptr [ebp + 0x168], 0
        mov     dword ptr [esp + 4], 0
        mov     word ptr [ebp + 0x17E], cx
        jz      L1332
        test    eax, eax
        jnz     L135C
L1332:
        mov     edx, dword ptr [esp + 0xB8]
        push    1
        add     edx, 0x68
        push    edx
        lea     ecx, [esp + 0x78]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0x84]
        lea     ecx, [esp + 0x70]
        mov     dword ptr [esp + 4], eax
        call    FUN_004d21c0
L135C:
        mov     ecx, dword ptr [esp + 0xB8]
        push    ebx
        push    esi
        push    edi
        lea     eax, [ecx + 0x64]
        push    1
        push    eax
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x1C], eax
        call    FUN_004d1f80
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x38]
        mov     esi, dword ptr [esp + 0x30]
        mov     ebx, eax
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     edi, dword ptr [esp + 0xC8]
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [edi + 0x78]
        mov     edx, dword ptr [edi + 0x74]
        add     esp, 4
        push    0
        push    eax
        mov     dword ptr [ebx + 0x128], ecx
        push    ebx
        lea     ecx, [esp + 0x68]
        mov     dword ptr [ebx + 0x124], edx
        call    FUN_0041e690
        mov     esi, dword ptr [ebp + 0x170]
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        push    ebx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 4
        test    eax, eax
        jz      L13F3
        mov     ecx, dword ptr [ebp + 0x178]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x14]
L13F3:
        fld     dword ptr [edi + 0x50]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x40
        jnz     L1416
        mov     eax, dword ptr [esi + 0xD8]
        add     eax, 0x20
        push    eax
        mov     ecx, ebp
        call    FUN_004f4370
        jmp     L142D
L1416:
        mov     ecx, dword ptr [ebp + 0x1B4]
        push    0
        push    ecx
        call    FUN_005f0be0
        add     esp, 8
        mov     dword ptr [ebp + 0x16C], eax
L142D:
        mov     eax, dword ptr [ebp + 0x18]
        mov edx, dword ptr [DAT_007db090]
        cmp     eax, edx
        jz      L144A
        mov     ecx, dword ptr [ebp + 0x170]
        mov     dword ptr [ecx + 0x140], 2
L144A:
        cmp     eax, edx
        mov     ecx, dword ptr [esp + 0x14]
        mov     si, word ptr [ecx]
        mov     cx, word ptr [ecx + 2]
        pop     edi
        mov     word ptr [ebp + 0x174], si
        pop     esi
        mov     word ptr [ebp + 0x176], cx
        pop     ebx
        jnz     L1486
        mov     edx, dword ptr [ebp + 0x170]
        mov     eax, dword ptr [edx + 4]
        cmp     dword ptr [eax], 0x4BF
        jnz     L1486
        mov     ecx, dword ptr [ebp + 0x178]
        call    FUN_0054bba0
L1486:
        lea     ecx, [esp + 0x50]
        call    FUN_0041e710
        lea     ecx, [esp + 0xC]
        call    FUN_004d21c0
        pop     ebp
        add     esp, 0xB0
        ret     4
    }


}
