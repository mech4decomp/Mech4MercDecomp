/*
 * FUN_005f8110 (524 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Complex object construction with FPU math and virtual dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_004da920(void);
extern void __stdcall FUN_00419460(void);
extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_00507f90(void);
extern void __stdcall FUN_0041fde0(void);
extern void __stdcall FUN_005347f0(void);
extern void __stdcall FUN_00767400(void);
extern void __stdcall FUN_0041e690(void);
extern void __stdcall FUN_004cec10(void);
extern void __stdcall FUN_004d9910(void);
extern void __stdcall FUN_004f5060(void);
extern void __stdcall FUN_0041e710(void);
extern void __stdcall FUN_004d21c0(void);

extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;
extern int g_7db098;
extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void __stdcall FUN_005f8110(void *p1)
{
    __asm {
        sub     esp, 0x174
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x180]
        mov     ax, word ptr [esi + 0x10]
        cmp     ax, word ptr [g_7db0ac]
        lea     ebp, [esi + 0x10]
        jnz     loc_8140
        mov     cx, word ptr [ebp + 0x2]
        cmp     cx, word ptr [g_7db0ae]
        jz      loc_830f
loc_8140:
        push    0x1
        push    ebp
        lea     ecx, [esp + 0xb0]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0xe4]
        test    eax, eax
        jz      loc_8303
        mov     eax, dword ptr [esp + 0xc4]
        test    eax, eax
        jbe     loc_8303
        push    ebx
        push    edi
        push    ebp
        call    FUN_004da920
        add     esp, 0x4
        push    0x7b9460
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x18], eax
        call    FUN_00419460
        lea     ecx, [esi + 0x1c]
        call    FUN_0041fd80
        mov     ebx, eax
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, ebx
        call    FUN_00507f90
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0x30]
        rep     movsd
        fld     dword ptr [esp + 0x38]
        push    0x2
        push    0
        fstp    dword ptr [esp + 0x20]
        push    0x1
        fld     dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x28]
        lea     eax, [esp + 0x24]
        fld     dword ptr [esp + 0x64]
        push    eax
        fstp    dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x70]
        call    FUN_0041fde0
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, ebx
        call    FUN_00507f90
        fld     dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0x6c]
        push    0
        push    -0x1
        push    0x2
        push    0
        mov     ecx, edx
        mov     dword ptr [esp + 0x38], edx
        mov     edx, eax
        mov     dword ptr [esp + 0x3c], eax
        lea     eax, [esp + 0x70]
        push    eax
        push    ebp
        push    0x800002
        mov     dword ptr [esp + 0x98], ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    ecx
        push    0
        push    0x2
        push    0x90
        lea     ecx, [esp + 0x120]
        mov     dword ptr [esp + 0xb8], edx
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [esp + 0x158]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0x170]
        call    FUN_00767400
        mov     edx, dword ptr [esp + 0xf4]
        push    0
        push    edx
        lea     eax, [esp + 0xfc]
        push    eax
        lea     ecx, [esp + 0x9c]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_7db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 0x2]
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x98]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004d9910
        mov     edx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
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
        lea     ecx, [esp + 0xb0]
        call    FUN_004d21c0
        pop     edi
        pop     ebx
        mov     eax, esi
        pop     esi
        pop     ebp
        add     esp, 0x174
        ret     0x4
loc_8303:
        lea     ecx, [esp + 0xa8]
        call    FUN_004d21c0
loc_830f:
        pop     esi
        xor     eax, eax
        pop     ebp
        add     esp, 0x174
        ret     0x4
    }
}
