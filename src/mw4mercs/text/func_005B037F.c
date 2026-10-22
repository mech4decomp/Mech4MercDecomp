/*
 * FUN_005B037F (491 B) — __thiscall (ecx = this), 1 param (ret 4).
 *
 * Gameplay object update: calls a virtual method on [this+0x78],
 * computes timing/position values (FPU), copies a matrix from a
 * sub-object, and calls several transform helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_00785d28;
extern float g_0076d048;
extern float g_00785f28;
extern char g_007b8d08;
extern int g_007dc728;

extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0040d560(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041c680(void);

__declspec(naked) int __cdecl FUN_005B037F(void)
{
    __asm {
        nop
        sub     esp, 0x88
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        push    0
        mov     edi, eax
        call    FUN_00707e70
        fadd    qword ptr [g_00785d28]
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        fstp    qword ptr [esi + 0x5ec]
        fld     dword ptr [esi + 0x540]
        lea     ebp, [eax + 0x80]
        mov     eax, dword ptr [ebp + 0x2c]
        fadd    dword ptr [g_0076d048]
        mov     dword ptr [esi + 0x51c], edx
        mov     dword ptr [esi + 0x518], ecx
        fstp    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0xc], ecx
        fld     dword ptr [esi + 0x540]
        mov     edx, eax
        fadd    dword ptr [g_00785f28]
        push    offset g_007b8d08
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esi + 0x520], eax
        fstp    dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x18], edx
        call    FUN_0040d560
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0040c410
        lea     ecx, [esp + 0x24]
        lea     eax, [esp + 0x40]
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [g_007dc728]
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
        mov     byte ptr [esi + 0x5cc], 1
        mov     dword ptr [esi + 0x5d8], eax
        mov     dword ptr [esi + 0x51c], ecx
        mov     ecx, dword ptr [edi + 0x30]
        mov     eax, dword ptr [edi + 0x2c]
        mov     dword ptr [esi + 0x520], edx
        mov     edx, dword ptr [edi + 0x34]
        mov     dword ptr [esi + 0x1cc], ecx
        mov     ecx, dword ptr [edi + 0x3c]
        mov     dword ptr [esi + 0x1c8], eax
        mov     eax, dword ptr [edi + 0x38]
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
