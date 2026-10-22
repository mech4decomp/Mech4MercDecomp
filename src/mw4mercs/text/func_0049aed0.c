/*
 * FUN_0049aed0 (811 B) — MLR particle/flare object constructor (__thiscall,
 * RET 0x8). Initializes many curve/color sub-objects, sets vtable 0x770230,
 * reads data via virtual calls, and conditionally builds a light list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da884;
extern void __cdecl FUN_00493660(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_0049ba90(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0044cd30(void);
extern void __cdecl FUN_0049d220(void);
extern void __cdecl FUN_0049d2e0(void);
extern void __cdecl FUN_00412a00(void);

__declspec(naked) void FUN_0049aed0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    ebx
        push    edi
        mov     esi, ecx
        push    0x52d
        call    FUN_00493660
        xor     ebp, ebp
        mov     dword ptr [esi + 0x60], ebp
        mov     dword ptr [esi + 0x68], 0x2
        lea     ecx, [esi + 0x80]
        mov     dword ptr [esi + 0x7c], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x8c]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xa0]
        mov     dword ptr [esi + 0x9c], 0x6
        call    FUN_004ae3c0
        mov     eax, 0x2
        mov     dword ptr [esi + 0xac], eax
        mov     dword ptr [esi + 0xc4], 0x8
        mov     dword ptr [esi + 0xc8], ebp
        mov     ecx, 0x1
        mov     dword ptr [esi + 0xd0], ecx
        mov     dword ptr [esi + 0xe0], 0xa
        mov     dword ptr [esi + 0xe4], eax
        mov     dword ptr [esi + 0xf8], ecx
        lea     ecx, [esi + 0x10c]
        mov     dword ptr [esi + 0x108], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x118]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x12c]
        mov     dword ptr [esi + 0x128], 0x4
        call    FUN_004ae3c0
        mov     eax, 0x1
        mov     dword ptr [esi + 0x138], eax
        mov     dword ptr [esi + 0x148], 0x8
        mov     dword ptr [esi + 0x14c], ebp
        mov     dword ptr [esi + 0x154], eax
        mov     dword ptr [esi + 0x170], ebp
        mov     dword ptr [esi + 0x178], ebp
        mov     dword ptr [esi + 0x174], ebp
        mov     dword ptr [esi + 0x180], ebp
        mov     dword ptr [esi + 0x17c], ebp
        mov     dword ptr [esi + 0x188], ebp
        push    ebx
        mov     dword ptr [esi + 0x184], ebp
        mov     dword ptr [esi + 0x190], ebp
        push    edi
        lea     ecx, [esi + 0x60]
        mov     dword ptr [esi + 0x18c], ebp
        mov     dword ptr [esi], 0x770230
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0x68]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea     ecx, [esi + 0x80]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x8c]
        call    FUN_004ae5a0
        mov     eax, dword ptr [edi]
        push    0x1
        lea     ecx, [esi + 0x98]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0xa0]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0xac]
        call    FUN_004adf70
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0xc0]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0xc8]
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0xd0]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0xdc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0xe4]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea     ecx, [esi + 0xf8]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x104]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x10c]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x118]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x124]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x12c]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x138]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x144]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x14c]
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0x154]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x160]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    0xc
        lea     eax, [esi + 0x164]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        cmp     ebx, 0x19
        jge     loc_49b1cf
        push    edi
        mov     ecx, esi
        call    FUN_0049ba90
        mov     eax, dword ptr [esi + 0x174]
        cmp     eax, ebp
        jle     short loc_49b17f
        mov     edi, dword ptr [esi + 0x170]
        mov     ebx, eax
loc_49b163:
        mov     ecx, dword ptr [edi]
        dec     word ptr [ecx + 0x10]
        cmp     word ptr [ecx + 0x10], bp
        jnz     short loc_49b179
        cmp     ecx, ebp
        jz      short loc_49b179
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
loc_49b179:
        add     edi, 0x4
        dec     ebx
        jnz     short loc_49b163
loc_49b17f:
        cmp     dword ptr [esi + 0x174], ebp
        jz      short loc_49b1a2
        mov     eax, dword ptr [esi + 0x170]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x170], ebp
        mov     dword ptr [esi + 0x174], ebp
loc_49b1a2:
        push    ebp
        lea     ecx, [esi + 0x178]
        call    FUN_0044cd30
        push    ebp
        lea     ecx, [esi + 0x180]
        call    FUN_0049d220
        push    ebp
        lea     ecx, [esi + 0x188]
        call    FUN_0049d2e0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
loc_49b1cf:
        lea     ebx, [esi + 0x190]
        push    ebx
        push    edi
        call    FUN_00412a00
        mov     eax, dword ptr [ebx]
        add     esp, 0x8
        cmp     eax, ebp
        jz      short loc_49b1f2
        mov     ecx, dword ptr [g_007da884]
        mov     edx, dword ptr [ecx]
        push    ebx
        push    esi
        call    dword ptr [edx + 0x8]
loc_49b1f2:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
