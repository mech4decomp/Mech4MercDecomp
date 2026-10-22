/*
 * FUN_005A6D8B (906 B) — __thiscall (this in ecx), 2 args, ret 8.
 * Large gameplay/UI update routine: reads object state, builds vectors,
 * calls a series of helpers, and conditionally writes a record via
 * 0x4d5b70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;
extern int g_7db098;
extern int g_7dab44;
extern int g_7dab40;

extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_00767400(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_0059afb0(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_005922e0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void FUN_005A6D8B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x1d8
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov     ebp, eax
        mov     cx, word ptr [ebp + 0x90]
        cmp     cx, word ptr [g_7db0ac]
        lea     eax, [ebp + 0x90]
        jne     L_5a6dce
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_7db0ae]
        je      L_5a7108
L_5a6dce:
        push    eax
        call    FUN_004da920
        add     esp, 4
        push    0x8bd5e8
        lea     ecx, [esp + 0xa0]
        mov     dword ptr [esp + 0x14], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0x88]
        call    FUN_00767400
        mov     ecx, dword ptr [ebx + 0x198]
        lea     eax, [esp + 0x40]
        push    eax
        call    FUN_00507f90
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0x104]
        rep     movsd
        mov     ecx, dword ptr [ebx + 0x1d4]
        mov     eax, dword ptr [ecx + 0x18]
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        call    FUN_004e8dc0
        lea     ecx, [esp + 0x104]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00419480
        fld     dword ptr [esp + 0x28]
        push    0x7b9460
        fsub    dword ptr [esp + 0x18]
        lea     ecx, [esp + 0xd8]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x40]
        call    FUN_00419460
        lea     edx, [esp + 0x104]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_00419480
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0xd8]
        call    FUN_0040d030
        push    0
        push    1
        push    2
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0xe4]
        call    FUN_0041fde0
        lea     edx, [esp + 0xd4]
        push    edx
        lea     eax, [ebp + 0x78]
        push    eax
        lea     ecx, [esp + 0xa4]
        call    FUN_0041c680
        mov     ecx, dword ptr [ebp + 0x84]
        mov     edx, dword ptr [ebp + 0x88]
        mov     eax, dword ptr [ebp + 0x8c]
        mov     dword ptr [esp + 0x84], ecx
        lea     ecx, [ebx + 0x214]
        mov     dword ptr [esp + 0x88], edx
        mov     dword ptr [esp + 0x8c], eax
        call    FUN_0041fd80
        mov     ecx, dword ptr [ebp + 0x30]
        mov     edx, dword ptr [ebp + 0x68]
        mov     eax, dword ptr [ebp + 0x64]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x60]
        push    edx
        mov     edx, dword ptr [ebp + 0x5c]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, eax
        call    FUN_0059afb0
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_004ea0f0
        mov     eax, dword ptr [ebp + 0x58]
        mov     ecx, dword ptr [ebp + 0x50]
        mov     edx, dword ptr [ebp + 0x54]
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0xa8]
        push    eax
        lea     ecx, [esp + 0xc4]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x198]
        push    0
        push    -1
        push    4
        push    0
        lea     edx, [esp + 0x7c]
        push    edx
        call    FUN_00507f90
        push    eax
        lea     eax, [ebp + 0x90]
        push    eax
        mov     eax, dword ptr [esp + 0x54]
        push    2
        push    eax
        push    0
        push    2
        push    0xb4
        lea     ecx, [esp + 0x18c]
        call    FUN_005922e0
        mov     ecx, dword ptr [esp + 0x134]
        push    0
        push    ecx
        lea     edx, [esp + 0x13c]
        push    edx
        lea     ecx, [esp + 0xc0]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_7db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x20], cl
        mov     dx, word ptr [eax + 2]
        push    0
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0xbc]
        push    ecx
        mov     word ptr [esp + 0x2e], dx
        call    FUN_004d9910
        mov     ecx, dword ptr [g_7dab44]
        mov     esi, dword ptr [ecx]
        mov     edx, dword ptr [g_7dab40]
        xor     edx, esi
        mov     ecx, dword ptr [edx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        mov     ecx, ebx
        mov     dword ptr [esp + 0x24], 6
        call    FUN_005f07c0
        lea     ecx, [esp + 0x24]
        add     eax, 0x370
        push    ecx
        mov     ecx, eax
        call    FUN_00416b60
        mov     esi, eax
        test    esi, esi
        je      L_5a70fc
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     dl, byte ptr [eax + 0x14]
        mov     ebx, dword ptr [ebx + 0xd8]
        add     eax, 0x14
        mov     byte ptr [esp + 0x10], dl
        mov     ax, word ptr [eax + 2]
        mov     word ptr [esp + 0x12], ax
        mov     ecx, dword ptr [ebx + 0x8c]
        mov     edx, dword ptr [ebx + 0x9c]
        mov     eax, dword ptr [ebx + 0xac]
        add     ebx, 0x80
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x54]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x44], 0x44
        mov     dword ptr [esp + 0x48], 4
        mov     dword ptr [esp + 0x4c], 2
        mov     dword ptr [esp + 0x50], 0
        call    FUN_004ea0f0
        fld     dword ptr [ebp + 0x50]
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x6c], edx
        mov     dl, byte ptr [esp + 0x10]
        mov     dword ptr [esp + 0x74], ecx
        mov     ecx, dword ptr [ebp + 0x30]
        mov     byte ptr [esp + 0x58], dl
        mov     dword ptr [esp + 0x70], eax
        mov     ax, word ptr [esp + 0x12]
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x80], ecx
        mov     ecx, dword ptr [esi + 0x24]
        fstp    dword ptr [esp + 0x78]
        push    edx
        mov     dword ptr [esp + 0x64], 0
        mov     dword ptr [esp + 0x68], 0x3f800000
        mov     dword ptr [esp + 0x6c], 0
        mov     word ptr [esp + 0x5e], ax
        mov     dword ptr [esp + 0x58], 0x43480000
        mov     byte ptr [esp + 0x60], 0xb
        mov     byte ptr [esp + 0x80], 0
        call    FUN_004d5b70
L_5a70fc:
        lea     ecx, [esp + 0xb4]
        call    FUN_0041e710
L_5a7108:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1d8
        ret     8
    }
}
