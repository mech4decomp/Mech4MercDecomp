/*
 * FUN_005ef380 (502 B) — __thiscall (ECX = this), plain RET.
 *
 * Complex initializer/loader: reads a virtual method result, compares a
 * 4-byte tag against globals, and if it matches a specific value performs
 * a large setup involving several helper calls (FUN_004d1f80, FUN_004da920,
 * FUN_00507f90, FUN_0041fde0, FUN_005347f0, FUN_00767400, FUN_0041e690,
 * FUN_004cec10, FUN_004d9910, FUN_004f5060, FUN_0041e710, FUN_004d21c0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void *a, void *b, int c);
extern void * __stdcall FUN_004da920(void *a);
extern void * __stdcall FUN_00507f90(void *a, void *b);
extern void __stdcall FUN_0041fde0(void *a, void *b);
extern void __stdcall FUN_005347f0(void *a, int b);
extern void __stdcall FUN_00767400(void *a, int b);
extern void __stdcall FUN_0041e690(void *a, void *b, void *c, int d);
extern void * __stdcall FUN_004cec10(void *a);
extern void * __stdcall FUN_004d9910(void *a, void *b, void *c);
extern void __stdcall FUN_004f5060(void *a, void *b);
extern void __stdcall FUN_0041e710(void *a);
extern void __stdcall FUN_004d21c0(void *a);

__declspec(naked) void __stdcall FUN_005ef380(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x174
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     cx, word ptr [eax + 0x38]
        cmp cx, word ptr [DAT_007db0ac]
        lea     ebp, [eax + 0x38]
        jnz     L1
        mov     dx, word ptr [ebp + 0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      L2
L1:
        mov     ebx, dword ptr [esi + 0x19c]
        test    ebx, ebx
        jz      L2
        push    0x1
        push    ebp
        lea     ecx, [esp + 0xb4]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0xe8]
        test    eax, eax
        jz      L3
        mov     eax, dword ptr [esp + 0xc8]
        test    eax, eax
        jbe     L3
        push    edi
        push    ebp
        call    FUN_004da920
        mov     dword ptr [esp + 0x18], eax
        add     esp, 0x4
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x60]
        lea     eax, [esp + 0x30]
        rep     movsd
        push    eax
        mov     ecx, ebx
        call    FUN_00507f90
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0x30]
        rep     movsd
        fld     dword ptr [esp + 0x38]
        push    0x2
        push    0x0
        fstp    dword ptr [esp + 0x20]
        push    0x1
        fld     dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x28]
        lea     ecx, [esp + 0x24]
        fld     dword ptr [esp + 0x64]
        push    ecx
        fstp    dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x70]
        call    FUN_0041fde0
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, ebx
        call    FUN_00507f90
        fld     dword ptr [eax + 0xc]
        mov     ecx, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0x6c]
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        mov     eax, ecx
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, edx
        mov     dword ptr [esp + 0x3c], edx
        lea     edx, [esp + 0x70]
        push    edx
        push    ebp
        push    0x2
        mov     dword ptr [esp + 0x98], eax
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        push    0x0
        push    0x2
        mov     dword ptr [esp + 0xb4], ecx
        push    0x90
        lea     ecx, [esp + 0x120]
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [esp + 0x158]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0x170]
        call    FUN_00767400
        mov     ecx, dword ptr [esp + 0xf4]
        push    0x0
        push    ecx
        lea     edx, [esp + 0xfc]
        push    edx
        lea     ecx, [esp + 0x9c]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 0x2]
        mov     word ptr [esp + 0x12], dx
        push    0x0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x98]
        push    ecx
        call    FUN_004d9910
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        push    ebx
        mov     ecx, esi
        call    FUN_004f5060
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x90]
        call    FUN_0041e710
        pop     edi
L3:
        lea     ecx, [esp + 0xac]
        call    FUN_004d21c0
L2:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x174
        ret
    }


}
