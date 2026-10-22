/*
 * FUN_005B13D0 (471 B) — __thiscall (this in ecx), RET 4. Calls a vtable
 * method [eax+4] on the object at this+0x78, computes float offsets via
 * fld/fadd against g_76d048 / g_785f28, builds a transform through
 * FUN_0040d560 / FUN_0040c410 / FUN_004e2f40 / FUN_0040ca40 /
 * FUN_0040cbb0, copies a 0x1c-byte block from edi into this+0x1c8,
 * initializes matrices via FUN_004206b0 / FUN_0041c680, and calls a
 * vtable method [edx+4]. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d048;
extern float g_785f28;
extern void __cdecl FUN_0040d560(void);
extern void __cdecl FUN_0040c410(void);
extern int  g_7dc728;
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041c680(void);

__declspec(naked) void __stdcall FUN_005B13D0(void)
{
    __asm {
        sub     esp, 0x88
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        fld     dword ptr [esi + 0x540]
        fadd    dword ptr [g_76d048]
        mov     edi, eax
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        lea     ebp, [eax + 0x80]
        mov     eax, dword ptr [ebp + 0x2c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esi + 0x540]
        mov     dword ptr [esi + 0x51c], edx
        fadd    dword ptr [g_785f28]
        mov     dword ptr [esi + 0x518], ecx
        mov     dword ptr [esp + 0xc], ecx
        mov     edx, eax
        push    0x7b8d08
        fstp    dword ptr [esp + 0x40]
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esi + 0x520], eax
        mov     dword ptr [esp + 0x18], edx
        call    FUN_0040d560
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0040c410
        lea     ecx, [esp + 0x24]
        lea     eax, [esp + 0x40]
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [g_7dc728]
        lea     edx, [esp + 0x58]
        push    eax
        mov     dword ptr [esp + 0x48], edx
        mov     dword ptr [esp + 0x4c], 0
        mov     dword ptr [esp + 0x54], 0
        mov     dword ptr [esp + 0x58], 0x1000
        call    FUN_004e2f40
        fld     dword ptr [esp + 0x3c]
        push    ecx
        lea     ecx, [esp + 0x34]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0040ca40
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040cbb0
        fld     dword ptr [esi + 0x518]
        fld     dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0x540]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x5d0], ecx
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esi + 0x520]
        mov     ecx, dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x5d4], edx
        mov     edx, dword ptr [esp + 0x20]
        fstp    dword ptr [esi + 0x518]
        mov     dword ptr [esi + 0x5d8], eax
        mov     eax, dword ptr [edi + 0x2c]
        mov     dword ptr [esi + 0x51c], ecx
        mov     ecx, dword ptr [edi + 0x30]
        mov     byte ptr [esi + 0x5cc], 1
        mov     dword ptr [esi + 0x520], edx
        mov     dword ptr [esi + 0x1c8], eax
        mov     edx, dword ptr [edi + 0x34]
        mov     eax, dword ptr [edi + 0x38]
        mov     dword ptr [esi + 0x1cc], ecx
        mov     ecx, dword ptr [edi + 0x3c]
        mov     dword ptr [esi + 0x1d0], edx
        mov     edx, dword ptr [edi + 0x40]
        mov     dword ptr [esi + 0x1d8], ecx
        push    ebp
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esi + 0x1d4], eax
        mov     dword ptr [esi + 0x1dc], edx
        call    FUN_004206b0
        lea     eax, [esp + 0x64]
        push    eax
        lea     ecx, [esi + 0x1b0]
        push    ecx
        lea     ecx, [esi + 0x180]
        call    FUN_0041c680
        lea     edx, [esp + 0x64]
        push    edx
        lea     eax, [esi + 0x1bc]
        push    eax
        lea     ecx, [esi + 0x18c]
        call    FUN_0041c680
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    0x10
        call    dword ptr [edx + 4]
        pop     edi
        mov     byte ptr [esi + 0x514], 0
        pop     esi
        pop     ebp
        add     esp, 0x88
        ret     4
    }
}
