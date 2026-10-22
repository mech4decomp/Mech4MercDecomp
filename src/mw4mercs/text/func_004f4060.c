/*
 * FUN_004F4060 (274 B) — MLR/Adept render-state object construction.
 * __thiscall (ECX = this), RET 8 (2 stack params). Virtual calls on the
 * param object's vtable ([+0x14], [+0x4], [+0xc]), builds two transform
 * buffers via FUN_004d2000/FUN_0041ee70/FUN_004d2680, asserts via
 * FUN_006fab90("Not updated"), copies 16-bit fields into the new object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f4540(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void * __fastcall FUN_004f4060(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xd8
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x7c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_004f4540
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        push    0x0
        mov     esi, eax
        push    0x0
        lea     ecx, [ebp - 0xd8]
        mov     dword ptr [esi], 0x7c
        call    FUN_004d2000
        push    0x0
        lea     ecx, [ebp - 0x28]
        call    FUN_0041ee70
        mov     ecx, dword ptr [edi + 0x170]
        mov     eax, dword ptr [ecx]
        push    0x0
        lea     edx, [ebp - 0x28]
        push    edx
        call    dword ptr [eax + 0xc]
        push    0x0
        lea     eax, [ebp - 0x28]
        push    eax
        lea     ecx, [ebp - 0xd8]
        call    FUN_004d2680
        push    0x7723bc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L1
        int     3
L1:
        mov     cx, word ptr [ebp - 0x98]
        mov     word ptr [esi + 0x64], cx
        mov     dx, word ptr [ebp - 0x96]
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x94]
        mov     word ptr [esi + 0x66], dx
        call    FUN_004d2000
        push    0x0
        lea     ecx, [ebp - 0x50]
        call    FUN_0041ee70
        mov     ecx, dword ptr [edi + 0x178]
        mov     eax, dword ptr [ecx]
        push    0x0
        lea     edx, [ebp - 0x50]
        push    edx
        call    dword ptr [eax + 0xc]
        push    0x0
        lea     eax, [ebp - 0x50]
        push    eax
        lea     ecx, [ebp - 0x94]
        call    FUN_004d2680
        mov     cx, word ptr [ebp - 0x54]
        mov     word ptr [esi + 0x68], cx
        mov     dx, word ptr [ebp - 0x52]
        lea     ecx, [ebp - 0x50]
        mov     word ptr [esi + 0x6a], dx
        call    FUN_0041ef60
        lea     ecx, [ebp - 0x94]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x28]
        call    FUN_0041ef60
        lea     ecx, [ebp - 0xd8]
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
